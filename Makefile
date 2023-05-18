#   Makefile: serves as the main makefile for the entire project pipeline
#   
#   Copyright (C) 2023  Michael Medrano
#   
#   This program is free software: you can redistribute it and/or modify
#   it under the terms of the GNU General Public License as published by
#   the Free Software Foundation, either version 3 of the License, or
#   (at your option) any later version.
#   
#   This program is distributed in the hope that it will be useful,
#   but WITHOUT ANY WARRANTY; without even the implied warranty of
#   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
#   GNU General Public License for more details.
#   
#   You should have received a copy of the GNU General Public License
#   along with this program.  If not, see <https://www.gnu.org/licenses/>.


################################################################################
###########################| MAIN PROJECT MAKEFILE |############################
################################################################################

# Platform setup
ifeq ($(PLATFORM),Windows_NT)
    WIN_PREFIX = winpty
    WORKDIR_PATH = "//app"
    WORKDIR_VOLUME = "/$$(pwd -W):/app"
else
    WORKDIR_PATH = /app
    WORKDIR_VOLUME = "$$(pwd):/app"
endif

# Container information
CONTAINER_TOOL ?= docker

################## STM32 project configuration for container ###################

# STM32 application project specific variables to be manually setup
STM32_PROJECT_LOCATION = application_deployment/stm32f746g-discovery/KWS_STM32
STM32_PROJECT_NAME = KWS_STM32
STM32_IMAGE_NAME := stm32-app
STM32_CONTAINER_NAME := stm32-app

# Additional variables
STM32_PROJECT_VOLUME = "$$(pwd)/$(STM32_PROJECT_LOCATION):/app"
STM32_DOCKERFILE:=$(STM32_PROJECT_LOCATION)/Dockerfile
STM32_APP_BIN_FILE = build/$(STM32_PROJECT_NAME).bin
STM32_NEED_IMAGE = $(shell $(CONTAINER_TOOL) image inspect $(STM32_IMAGE_NAME) 2> /dev/null > /dev/null || echo stm32-image)

# STM32 application container run rule
CONTAINER_RUN_STM32_APP = $(WIN_PREFIX) $(CONTAINER_TOOL) run \
				--name $(STM32_CONTAINER_NAME) \
				--rm \
				-it \
				--privileged \
				-v $(STM32_PROJECT_VOLUME)\
				--security-opt label=disable \
				--hostname $(CONTAINER_NAME) \
				-t $(STM32_IMAGE_NAME)

############ Raspberry Pi Pico project configuration for container #############


#									TBA




############################ MLFLOW configuration ##############################

# Defaults initialized for demonstration purposes only.
# In a practical setting defaults will be initialized as empty.
MLFLOW_TRACKING_USERNAME :=
MLFLOW_TRACKING_PASSWORD :=
MLFLOW_RUN_NAME :=

# Override MLFLOW_TRACKING_USERNAME if the user passes an argument to make
ifeq ($(filter MLFLOW_TRACKING_USERNAME=%,$(MAKECMDGOALS)),MLFLOW_TRACKING_USERNAME=)
    MLFLOW_TRACKING_USERNAME := $(subst MLFLOW_TRACKING_USERNAME=,,$(filter MLFLOW_TRACKING_USERNAME=%,$(MAKECMDGOALS)))
endif

# Override MLFLOW_TRACKING_PASSWORD if the user passes an argument to make
ifeq ($(filter MLFLOW_TRACKING_PASSWORD=%,$(MAKECMDGOALS)),MLFLOW_TRACKING_PASSWORD=)
    MLFLOW_TRACKING_PASSWORD := $(subst MLFLOW_TRACKING_PASSWORD=,,$(filter MLFLOW_TRACKING_PASSWORD=%,$(MAKECMDGOALS)))
endif

# Override MLFLOW_RUN_NAME if the user passes an argument to make
ifeq ($(filter MLFLOW_RUN_NAME=%,$(MAKECMDGOALS)),MLFLOW_RUN_NAME=)
    MLFLOW_RUN_NAME := $(subst MLFLOW_RUN_NAME=,,$(filter MLFLOW_RUN_NAME=%,$(MAKECMDGOALS)))
endif

ifndef MLFLOW_TRACKING_USERNAME
$(warning [NOTICE] MLFLOW_TRACKING_USERNAME argument not specified. Using default values)
	MLFLOW_TRACKING_USERNAME := mrmedrano81
endif

ifndef MLFLOW_TRACKING_PASSWORD
$(warning [NOTICE] MLFLOW_TRACKING_PASSWORD argument not specified. Using default values)
	MLFLOW_TRACKING_PASSWORD := 70334c6f3a4e81cd5c9271e67de06f62eb307c19
endif

ifndef MLFLOW_RUN_NAME
$(warning [NOTICE] MLFLOW_RUN_NAME argument not specified. Using default values)
	MLFLOW_RUN_NAME := test_run
endif

########################## Main Container Configuration ############################

CONTAINER_FILE := Dockerfile
IMAGE_NAME := tinymlops-pipeline
CONTAINER_NAME := tinymlops-pipeline

NEED_IMAGE = $(shell $(CONTAINER_TOOL) image inspect $(IMAGE_NAME) 2> /dev/null > /dev/null || echo image)

# main container commands
#	-runs container interactively with gpu access

CONTAINER_RUN = $(WIN_PREFIX) $(CONTAINER_TOOL) run \
				--gpus all \
				--name $(CONTAINER_NAME) \
				--rm \
				-it \
				-v $(WORKDIR_VOLUME)\
				--security-opt label=disable \
				--hostname $(CONTAINER_NAME) \
				-t $(IMAGE_NAME)

################################### Targets #######################################

# build main docker image and run container 
build-main-container: $(NEED_IMAGE)
	$(CONTAINER_RUN)

# main docker image build step
image: $(CONTAINER_FILE)
	$(CONTAINER_TOOL) build \
		-t $(IMAGE_NAME) \
		-f=$(CONTAINER_FILE) \
		--build-arg MLFLOW_TRACKING_USERNAME=$(MLFLOW_TRACKING_USERNAME) \
		--build-arg MLFLOW_TRACKING_PASSWORD=$(MLFLOW_TRACKING_PASSWORD) \
		--build-arg MLFLOW_RUN_NAME=$(MLFLOW_RUN_NAME) \
		.


#------ STM32 application targets ------#

# build docker image, run container, and build microcontroller application code
build-stm32-app: $(STM32_NEED_IMAGE)
	$(CONTAINER_RUN_STM32_APP) bash -lc 'make -j$(shell nproc)'

# builds and flashes binary to the stm32 microcontroller
# 	- the flashing process is repeated if the first one fails 
#	  (a workaround for a bug within the st-link tool for certain stm32 mcus)
flash-stm32-app: $(STM32_NEED_IMAGE)
	$(CONTAINER_RUN_STM32_APP) bash -lc 'make -j$(shell nproc) && \
	st-flash --reset write $(STM32_APP_BIN_FILE) 0x08000000 || \
	st-flash --reset write $(STM32_APP_BIN_FILE) 0x08000000'

# removes STM32 application project build folder
clean-stm32-app: $(STM32_NEED_IMAGE)
	$(CONTAINER_RUN_STM32_APP) bash -lc 'make clean'

# stm32 image build step
stm32-image: $(CONTAINER_FILE)
	$(CONTAINER_TOOL) build \
		-t $(STM32_IMAGE_NAME) \
		-f=$(STM32_DOCKERFILE) \
		.

#------ Raspberry Pi Pico application targets ------#

# 					   TBA

#------ Image cleanup targets ------#

clean-image:
	$(CONTAINER_TOOL) container rm -f $(CONTAINER_NAME) 2> /dev/null > /dev/null || true
	$(CONTAINER_TOOL) image rmi -f $(IMAGE_NAME) 2> /dev/null > /dev/null || true

clean-stm32-image:
	$(CONTAINER_TOOL) container rm -f $(STM32_CONTAINER_NAME) 2> /dev/null > /dev/null || true
	$(CONTAINER_TOOL) image rmi -f $(STM32_IMAGE_NAME) 2> /dev/null > /dev/null || true

clean-all-images: clean-image clean-stm32-image