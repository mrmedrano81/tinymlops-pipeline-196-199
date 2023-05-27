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
#	- the STM32_PROJECT_BUILD_DIR path is relative to the STM32 project root
STM32_PROJECT_LOCATION ?= application_deployment/stm32f746g-discovery/KWS_STM32
STM32_PROJECT_BUILD_DIR ?= build
STM32_PROJECT_NAME ?= KWS_STM32
STM32_IMAGE_NAME ?= stm32-app
STM32_CONTAINER_NAME ?= stm32-app

override STM32_PROJECT_LOCATION := $(or $(STM32_PROJECT_LOCATION),$(filter STM32_PROJECT_LOCATION=%,$(MAKECMDGOALS)))
override STM32_PROJECT_BUILD_DIR := $(or $(STM32_PROJECT_BUILD_DIR),$(filter STM32_PROJECT_BUILD_DIR=%,$(MAKECMDGOALS)))
override STM32_PROJECT_NAME := $(or $(STM32_PROJECT_NAME),$(filter STM32_PROJECT_NAME=%,$(MAKECMDGOALS)))
override STM32_IMAGE_NAME := $(or $(STM32_IMAGE_NAME),$(filter STM32_IMAGE_NAME=%,$(MAKECMDGOALS)))
override STM32_CONTAINER_NAME := $(or $(STM32_CONTAINER_NAME),$(filter STM32_CONTAINER_NAME=%,$(MAKECMDGOALS)))

.PHONY: stm32-args

stm32-args:
	@echo "[INFO] STM32_PROJECT_LOCATION: $(STM32_PROJECT_LOCATION)"
	@echo "[INFO] STM32_PROJECT_BUILD_DIR: $(STM32_PROJECT_BUILD_DIR)"
	@echo "[INFO] STM32_PROJECT_NAME: $(STM32_PROJECT_NAME)"
	@echo "[INFO] STM32_IMAGE_NAME: $(STM32_IMAGE_NAME)"
	@echo "[INFO] STM32_CONTAINER_NAME: $(STM32_CONTAINER_NAME)"

# Additional generated variables
STM32_PROJECT_VOLUME = "$$(pwd)/$(STM32_PROJECT_LOCATION):/app"
STM32_DOCKERFILE:=$(STM32_PROJECT_LOCATION)/Dockerfile
STM32_APP_BIN_FILE = $(STM32_PROJECT_BUILD_DIR)/$(STM32_PROJECT_NAME).bin
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

# Default MLFLOW user configurations 
# 	-in a practical setting these will be set as empty
#	 and are only filled for testing and demonstration purposes
MLFLOW_TRACKING_USERNAME ?= mrmedrano81
MLFLOW_TRACKING_PASSWORD ?= 70334c6f3a4e81cd5c9271e67de06f62eb307c19
MLFLOW_RUN_NAME ?= test_run

# Override variables with command line arguments if provided
override MLFLOW_TRACKING_USERNAME := $(or $(MLFLOW_TRACKING_USERNAME),$(filter MLFLOW_TRACKING_USERNAME=%,$(MAKECMDGOALS)))
override MLFLOW_TRACKING_PASSWORD := $(or $(MLFLOW_TRACKING_PASSWORD),$(filter MLFLOW_TRACKING_PASSWORD=%,$(MAKECMDGOALS)))
override MLFLOW_RUN_NAME := $(or $(MLFLOW_RUN_NAME),$(filter MLFLOW_RUN_NAME=%,$(MAKECMDGOALS)))

.PHONY: mlflow-args

mlflow-args:
	@echo "[INFO] MLFLOW_TRACKING_USERNAME: $(MLFLOW_TRACKING_USERNAME)"
	@echo "[INFO] MLFLOW_TRACKING_PASSWORD: $(MLFLOW_TRACKING_PASSWORD)"
	@echo "[INFO] MLFLOW_RUN_NAME: $(MLFLOW_RUN_NAME)"

############################ Training Configuration ################################

NVIDIA_CUDA_IMAGE_VERSION?=11.2.0-cudnn8-runtime-ubuntu20.04

INSTALL_MLPERF_KWS_REQS?=false
INSTALL_ARM_KWS_REQS?=true
INSTALL_TF_SPEECH_COMMANDS_REQS?=false

# Check NVIDIA_CUDA_IMAGE_VERSION and set INSTAL_REQ variables accordingly
#ifeq ($(NVIDIA_CUDA_IMAGE_VERSION),11.2.0-cudnn8-runtime-ubuntu20.04)
#	INSTALL_TF_SPEECH_COMMANDS_REQS:=true
#	INSTALL_MLPERF_KWS_REQS:=true
#	INSTALL_ARM_KWS_REQS:=true
#else
#$(error NVIDIA_CUDA_IMAGE_VERSION '$(NVIDIA_CUDA_IMAGE_VERSION)' is not supported.)
#endif

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
build-main-container: $(NEED_IMAGE) mlflow-args
	$(CONTAINER_RUN)

# main docker image build step
image: $(CONTAINER_FILE)
	$(CONTAINER_TOOL) build \
		-t $(IMAGE_NAME) \
		-f=$(CONTAINER_FILE) \
		--build-arg MLFLOW_TRACKING_USERNAME=$(MLFLOW_TRACKING_USERNAME) \
		--build-arg MLFLOW_TRACKING_PASSWORD=$(MLFLOW_TRACKING_PASSWORD) \
		--build-arg MLFLOW_RUN_NAME=$(MLFLOW_RUN_NAME) \
		--build-arg NVIDIA_CUDA_IMAGE_VERSION=$(NVIDIA_CUDA_IMAGE_VERSION) \
		--build-arg INSTALL_MLPERF_KWS_REQS=$(INSTALL_MLPERF_KWS_REQS) \
		--build-arg INSTALL_ARM_KWS_REQS=$(INSTALL_ARM_KWS_REQS) \
		--build-arg INSTALL_TF_SPEECH_COMMANDS_REQS=$(INSTALL_TF_SPEECH_COMMANDS_REQS) \
		.


#------ STM32 application targets ------#

# build docker image, run container, and build microcontroller application code
build-stm32-app: $(STM32_NEED_IMAGE) stm32-args
	$(CONTAINER_RUN_STM32_APP) bash -lc 'make -j$(shell nproc)'

# builds and flashes binary to the stm32 microcontroller
# 	- the flashing process is repeated if the first one fails 
#	  (a workaround for a bug within the st-link tool for certain stm32 mcus)
flash-stm32-app: $(STM32_NEED_IMAGE) stm32-args
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