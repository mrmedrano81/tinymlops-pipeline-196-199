########################### CONTAINER ###########################


#get user info
UID ?= $(shell id -u)
GID ?= $(shell id -g)
USER ?= $(shell id -un)
GROUP ?= $(if $(filter $(PLATFORM), Windows_NT),$(shell id -un),$(shell id -gn))

#set workdir path/volume
ifeq ($(PLATFORM),Windows_NT)
    WIN_PREFIX = winpty
    WORKDIR_PATH = "//workdir"
    WORKDIR_VOLUME = "/$$(pwd -W):/workdir"
else
    WORKDIR_PATH = /workdir
    WORKDIR_VOLUME = "$$(pwd):/workdir"
endif

#container information
CONTAINER_TOOL ?= docker
CONTAINER_FILE := Dockerfile
IMAGE_NAME := ubuntu-arm-embedded-dev
CONTAINER_NAME := ubuntu-arm-embedded-dev

NEED_IMAGE = $(shell $(CONTAINER_TOOL) image inspect $(IMAGE_NAME) 2> /dev/null > /dev/null || echo image)

#main container commands
#	-runs container interactively
#	-sets working volume and enters automatically into working directory path once run
CONTAINER_RUN = $(WIN_PREFIX) $(CONTAINER_TOOL) run \
				--name $(CONTAINER_NAME) \
				--rm \
				-it \
				-v $(WORKDIR_VOLUME) \
				-w $(WORKDIR_PATH) \
				--security-opt label=disable \
				--hostname $(CONTAINER_NAME) \
				$(IMAGE_NAME)

build-container: $(NEED_IMAGE)
	$(CONTAINER_RUN) bash -lc 'make -j$(shell nproc)'

format-container:
	$(CONTAINER_RUN) bash -lc 'make format -j$(shell nproc)'

format-linux-container:
	$(CONTAINER_RUN) bash -lc 'make format-linux'

shell:
	$(CONTAINER_RUN) bash -l

image: $(CONTAINER_FILE)
	$(CONTAINER_TOOL) build \
		-t $(IMAGE_NAME) \
		-f=$(CONTAINER_FILE) \
		--build-arg UID=$(UID) \
		--build-arg GID=$(GID) \
		--build-arg USERNAME=$(USER) \
		--build-arg GROUPNAME=$(GROUP) \
		.

clean-image:
	$(CONTAINER_TOOL) container rm -f $(CONTAINER_NAME) 2> /dev/null > /dev/null || true
	$(CONTAINER_TOOL) image rmi -f $(IMAGE_NAME) 2> /dev/null > /dev/null || true

clean-all: clean clean-image