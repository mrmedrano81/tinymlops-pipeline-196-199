########################### CONTAINER ###########################

#set workdir path/volume
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
CONTAINER_FILE := Dockerfile
IMAGE_NAME := tinymlops-pipeline
CONTAINER_NAME := tinymlops-pipeline

NEED_IMAGE = $(shell $(CONTAINER_TOOL) image inspect $(IMAGE_NAME) 2> /dev/null > /dev/null || echo image)

#main container commands
#	-runs container interactively
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

build-container: $(NEED_IMAGE)
	$(CONTAINER_RUN)

build-container-app: $(NEED_IMAGE)
	$(CONTAINER_RUN) bash -lc 'make -j$(shell nproc)'

shell:
	$(CONTAINER_RUN) bash -l

image: $(CONTAINER_FILE)
	$(CONTAINER_TOOL) build \
		-t $(IMAGE_NAME) \
		-f=$(CONTAINER_FILE) \
		.

clean-image:
	$(CONTAINER_TOOL) container rm -f $(CONTAINER_NAME) 2> /dev/null > /dev/null || true
	$(CONTAINER_TOOL) image rmi -f $(IMAGE_NAME) 2> /dev/null > /dev/null || true

clean-all: clean clean-image