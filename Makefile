#   Makefile: serves as the main makefile for the entire project pipeline
#   
#   Copyright (C) 2023  Michael Medrano & Josh Yap
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
CONTAINER_NAME ?= tinymlops-pipeline

################## STM32 project configuration for container ###################

# STM32 application project specific variables to be manually setup
#	- the STM32_PROJECT_BUILD_DIR path is relative to the STM32 project root
STM32_PROJECT_LOCATION ?= application_deployment/stm32f746-discovery-board/KWS_STM32
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
PICO_PROJECT_LOCATION ?= application_deployment/raspberry-pi-pico/VWW_PICO/
PICO_PROJECT_LOCATION_app ?= RPI-Pico-Cam/tflmicro
PICO_PROJECT_BUILD_DIR ?= build
PICO_PROJECT_NAME ?= VWW_PICO
PICO_IMAGE_NAME ?= pico-app
PICO_CONTAINER_NAME ?= pico-app

override PICO_PROJECT_LOCATION := $(or $(PICO_PROJECT_LOCATION),$(filter PICO_PROJECT_LOCATION=%,$(MAKECMDGOALS)))
override PICO_PROJECT_BUILD_DIR := $(or $(PICO_PROJECT_BUILD_DIR),$(filter PICO_PROJECT_BUILD_DIR=%,$(MAKECMDGOALS)))
override PICO_PROJECT_NAME := $(or $(PICO_PROJECT_NAME),$(filter PICO_PROJECT_NAME=%,$(MAKECMDGOALS)))
override PICO_IMAGE_NAME := $(or $(PICO_IMAGE_NAME),$(filter PICO_IMAGE_NAME=%,$(MAKECMDGOALS)))
override PICO_CONTAINER_NAME := $(or $(PICO_CONTAINER_NAME),$(filter PICO_CONTAINER_NAME=%,$(MAKECMDGOALS)))

.PHONY: pico-args

pico-args:
	@echo "[INFO] PICO_PROJECT_LOCATION: $(PICO_PROJECT_LOCATION)"
	@echo "[INFO] PICO_PROJECT_BUILD_DIR: $(PICO_PROJECT_BUILD_DIR)"
	@echo "[INFO] PICO_PROJECT_NAME: $(PICO_PROJECT_NAME)"
	@echo "[INFO] PICO_IMAGE_NAME: $(PICO_IMAGE_NAME)"
	@echo "[INFO] PICO_CONTAINER_NAME: $(PICO_CONTAINER_NAME)"

# Additional generated variables
PICO_PROJECT_VOLUME = "$$(pwd)/$(PICO_PROJECT_LOCATION):/app"
PICO_DOCKERFILE := $(PICO_PROJECT_LOCATION)/Dockerfile
PICO_APP_UF2_FILE = $(PICO_PROJECT_BUILD_DIR)/examples/person_detection/person_detection_int8.uf2
PICO_NEED_IMAGE = $(shell $(CONTAINER_TOOL) image inspect $(PICO_IMAGE_NAME) 2> /dev/null > /dev/null || echo pico-image)

# PICO application container run rule
CONTAINER_RUN_PICO_APP = $(WIN_PREFIX) $(CONTAINER_TOOL) run \
				--name $(PICO_CONTAINER_NAME) \
				--rm \
				-it \
				--privileged \
				-v $(PICO_PROJECT_VOLUME)\
				--security-opt label=disable \
				--hostname $(CONTAINER_NAME) \
				-t $(PICO_IMAGE_NAME)

############################ MLFLOW configuration ##############################

# Default MLFLOW user configurations 
# 	-in a practical setting these will be set as empty
#	 and are only filled for testing and demonstration purposes
MLFLOW_TRACKING_USERNAME ?= mrmedrano81
MLFLOW_TRACKING_PASSWORD ?= 70334c6f3a4e81cd5c9271e67de06f62eb307c19
MLFLOW_TRACKING_URI ?= https://dagshub.com/mrmedrano81/tinymlops-pipeline-196-199.mlflow
GIT_COMMIT_ID := $(shell git rev-parse HEAD)


# Override variables with command line arguments if provided
override MLFLOW_TRACKING_USERNAME := $(or $(MLFLOW_TRACKING_USERNAME),$(filter MLFLOW_TRACKING_USERNAME=%,$(MAKECMDGOALS)))
override MLFLOW_TRACKING_PASSWORD := $(or $(MLFLOW_TRACKING_PASSWORD),$(filter MLFLOW_TRACKING_PASSWORD=%,$(MAKECMDGOALS)))
override MLFLOW_TRACKING_URI := $(or $(MLFLOW_TRACKING_URI),$(filter MLFLOW_TRACKING_URI=%,$(MAKECMDGOALS)))

.PHONY: mlflow-args

mlflow-args:
	@echo "[INFO] MLFLOW_TRACKING_USERNAME: $(MLFLOW_TRACKING_USERNAME)"
	@echo "[INFO] MLFLOW_TRACKING_PASSWORD: $(MLFLOW_TRACKING_PASSWORD)"
	@echo "[INFO] MLFLOW_TRACKING_URI: $(MLFLOW_TRACKING_URI)"
	@echo "[INFO] GIT_COMMIT_ID: $(GIT_COMMIT_ID)"

############################ Training Configuration ################################

NVIDIA_CUDA_IMAGE_VERSION?=11.2.0-cudnn8-runtime-ubuntu20.04

INSTALL_MLPERF_KWS_REQS?=false
INSTALL_ARM_KWS_REQS?=false
INSTALL_TF_SPEECH_COMMANDS_REQS?=false
INSTALL_TF_VWW_REQS?=false

training-args:
	@echo "[INFO] MLPERF-KWS pyenv status: $(INSTALL_MLPERF_KWS_REQS)"
	@echo "[INFO] ARM-KWS pyenv status: $(INSTALL_ARM_KWS_REQS)"
	@echo "[INFO] TF-SPEECH-COMMANDS pyenv status: $(INSTALL_TF_SPEECH_COMMANDS_REQS)"
	@echo "[INFO] TF-VWW pyenv status: $(INSTALL_TF_VWW_REQS)"

########################## Training Container Configuration ############################

TRAIN_CONTAINER_FILE := Dockerfile
TRAIN_IMAGE_NAME := train-container
TRAIN_CONTAINER_NAME := train-container

NEED_TRAIN_IMAGE = $(shell $(CONTAINER_TOOL) image inspect $(TRAIN_IMAGE_NAME) 2> /dev/null > /dev/null || echo train-image)

# Training container commands
#	-runs container interactively with gpu access

CONTAINER_RUN_TRAIN = $(WIN_PREFIX) $(CONTAINER_TOOL) run \
				--gpus all \
				--name $(TRAIN_CONTAINER_NAME) \
				--rm \
				-it \
				-v $(WORKDIR_VOLUME)\
				--security-opt label=disable \
				--hostname $(CONTAINER_NAME) \
				-t $(TRAIN_IMAGE_NAME)

################################### Targets #######################################

# build train docker image and run container 
build-train-container: $(NEED_TRAIN_IMAGE) training-args mlflow-args
	$(CONTAINER_RUN_TRAIN)

# train docker image build step
train-image: $(TRAIN_CONTAINER_FILE)
	$(CONTAINER_TOOL) build \
		-t $(TRAIN_IMAGE_NAME) \
		-f=$(TRAIN_CONTAINER_FILE) \
		--build-arg MLFLOW_TRACKING_USERNAME=$(MLFLOW_TRACKING_USERNAME) \
		--build-arg MLFLOW_TRACKING_PASSWORD=$(MLFLOW_TRACKING_PASSWORD) \
		--build-arg MLFLOW_TRACKING_URI=$(MLFLOW_TRACKING_URI) \
		--build-arg GIT_COMMIT_ID=$(GIT_COMMIT_ID) \
		--build-arg NVIDIA_CUDA_IMAGE_VERSION=$(NVIDIA_CUDA_IMAGE_VERSION) \
		--build-arg INSTALL_MLPERF_KWS_REQS=$(INSTALL_MLPERF_KWS_REQS) \
		--build-arg INSTALL_ARM_KWS_REQS=$(INSTALL_ARM_KWS_REQS) \
		--build-arg INSTALL_TF_SPEECH_COMMANDS_REQS=$(INSTALL_TF_SPEECH_COMMANDS_REQS) \
		--build-arg INSTALL_TF_VWW_REQS=$(INSTALL_TF_VWW_REQS) \
		.
#------ STM32 application targets ------#

# build stm32 docker image, run container, and build microcontroller application code
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

# build pico docker image, run container, and build microcontroller application code
build-pico-app: $(PICO_NEED_IMAGE) pico-args
	$(CONTAINER_RUN_PICO_APP) bash -lc 'mkdir -p $(PICO_PROJECT_LOCATION_app)/$(PICO_PROJECT_BUILD_DIR) && cd $(PICO_PROJECT_LOCATION_app)/$(PICO_PROJECT_BUILD_DIR) && cmake .. && make -j$(shell nproc)'

# builds and flashes the uf2 file to the pico
flash-pico-app: $(PICO_NEED_IMAGE) pico-args
	$(CONTAINER_RUN_PICO_APP) bash -lc 'mkdir -p $(PICO_PROJECT_LOCATION_app)/$(PICO_PROJECT_BUILD_DIR) && cd $(PICO_PROJECT_LOCATION_app)/$(PICO_PROJECT_BUILD_DIR) && cmake .. && make -j$(shell nproc)'
	
# removes PICO application project build folder
clean-pico-app: $(PICO_NEED_IMAGE)
	$(CONTAINER_RUN_PICO_APP) bash -lc 'rm -r $(PICO_PROJECT_LOCATION_app)/$(PICO_PROJECT_BUILD_DIR)'

# pico image build step
pico-image: $(CONTAINER_FILE)
	$(CONTAINER_TOOL) build \
		-t $(PICO_IMAGE_NAME) \
		-f=$(PICO_DOCKERFILE) \
		$(PICO_PROJECT_LOCATION)

#------ Image cleanup targets ------#

clean-train-image:
	$(CONTAINER_TOOL) container rm -f $(CONTAINER_NAME) 2> /dev/null > /dev/null || true
	$(CONTAINER_TOOL) image rmi -f $(TRAIN_IMAGE_NAME) 2> /dev/null > /dev/null || true

clean-stm32-image:
	$(CONTAINER_TOOL) container rm -f $(STM32_CONTAINER_NAME) 2> /dev/null > /dev/null || true
	$(CONTAINER_TOOL) image rmi -f $(STM32_IMAGE_NAME) 2> /dev/null > /dev/null || true

clean-pico-image:
	$(CONTAINER_TOOL) container rm -f $(PICO_CONTAINER_NAME) 2> /dev/null > /dev/null || true
	$(CONTAINER_TOOL) image rmi -f $(PICO_IMAGE_NAME) 2> /dev/null > /dev/null || true

clean-all-images: clean-train-image clean-stm32-image clean-pico-image
