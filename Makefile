################################################################################
###########################| MAIN PROJECT MAKEFILE |############################
################################################################################

# platform setup
UID ?= $(shell id -u)
GID ?= $(shell id -g)
USER ?= $(shell id -un)
GROUP ?= $(if $(filter $(PLATFORM), Windows_NT),$(shell id -un),$(shell id -gn))

ifeq ($(PLATFORM),Windows_NT)
    WIN_PREFIX = winpty
    WORKDIR_PATH = "//app"
    WORKDIR_VOLUME = "/$$(pwd -W):/app"
else
    WORKDIR_PATH = /app
    WORKDIR_VOLUME = "$$(pwd):/app"
endif

#container information
CONTAINER_TOOL ?= docker

################## STM32 project configuration for container ###################

STM32_PROJECT_VOLUME = "$$(pwd)/stm32f746g-discovery/KWS_STM32:/app"
STM32_DOCKERFILE:=stm32f746g-discovery/KWS_STM32/Dockerfile
STM32_IMAGE_NAME:= stm32-build-kws-app
STM32_CONTAINER_NAME := stm32-app
STM32_NEED_IMAGE = $(shell $(CONTAINER_TOOL) image inspect $(STM32_IMAGE_NAME) 2> /dev/null > /dev/null || echo stm32-image)

CONTAINER_RUN_STM32_APP = $(WIN_PREFIX) $(CONTAINER_TOOL) run \
				--gpus all \
				--name $(STM32_CONTAINER_NAME) \
				--rm \
				-it \
				-v $(STM32_PROJECT_VOLUME)\
				--security-opt label=disable \
				--hostname $(CONTAINER_NAME) \
				-t $(STM32_IMAGE_NAME)

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

######################## Main Container Configuration ##########################
CONTAINER_FILE := Dockerfile
IMAGE_NAME := tinymlops-pipeline
CONTAINER_NAME := tinymlops-pipeline

NEED_IMAGE = $(shell $(CONTAINER_TOOL) image inspect $(IMAGE_NAME) 2> /dev/null > /dev/null || echo image)
# main container commands
#	-runs container interactively with gpu access
#	-sets working volume and enters automatically into working directory path once run

CONTAINER_RUN = $(WIN_PREFIX) $(CONTAINER_TOOL) run \
				--gpus all \
				--name $(CONTAINER_NAME) \
				--rm \
				-it \
				-v $(WORKDIR_VOLUME)\
				--security-opt label=disable \
				--hostname $(CONTAINER_NAME) \
				-t $(IMAGE_NAME)

##################################### Targets #######################################

# build docker image and run container 
build-container: $(NEED_IMAGE)
	$(CONTAINER_RUN)

# docker image build step
image: $(CONTAINER_FILE)
	$(CONTAINER_TOOL) build \
		-t $(IMAGE_NAME) \
		-f=$(CONTAINER_FILE) \
		--build-arg MLFLOW_TRACKING_USERNAME=$(MLFLOW_TRACKING_USERNAME) \
		--build-arg MLFLOW_TRACKING_PASSWORD=$(MLFLOW_TRACKING_PASSWORD) \
		--build-arg MLFLOW_RUN_NAME=$(MLFLOW_RUN_NAME) \
		.

# build docker image, run container, and build microcontroller application code
build-stm32-app: $(STM32_NEED_IMAGE)
	$(CONTAINER_RUN_STM32_APP) bash -lc 'make -j$(shell nproc)'

stm32-image: $(CONTAINER_FILE)
	$(CONTAINER_TOOL) build \
		-t $(STM32_IMAGE_NAME) \
		-f=$(STM32_DOCKERFILE) \
		--build-arg UID=$(UID) \
		--build-arg GID=$(GID) \
		--build-arg USERNAME=$(USER) \
		--build-arg GROUPNAME=$(GROUP) \
		.

# cleanup
clean-image:
	$(CONTAINER_TOOL) container rm -f $(CONTAINER_NAME) 2> /dev/null > /dev/null || true
	$(CONTAINER_TOOL) image rmi -f $(IMAGE_NAME) 2> /dev/null > /dev/null || true

clean-stm32-image:
	$(CONTAINER_TOOL) container rm -f $(STM32_CONTAINER_NAME) 2> /dev/null > /dev/null || true
	$(CONTAINER_TOOL) image rmi -f $(STM32_IMAGE_NAME) 2> /dev/null > /dev/null || true

clean-all: clean clean-image