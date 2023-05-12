# tinymlops-pipeline-196-199
Working repository for Michael Medrano and Josh Yap's EEE 196/199 capstone project.

---
## Usage

### Windows
1. Install and activate [Windows Subsystem for Linux](https://learn.microsoft.com/en-us/windows/wsl/install)
- *note: tested on Ubuntu-22.04 WSL distribution.*
2. Download and install [Docker backend for WSL](https://nickjanetakis.com/blog/install-docker-in-wsl-2-without-docker-desktop) or [Docker Desktop](https://docs.docker.com/desktop/install/windows-install/)
3. Install [Nvidia container toolkit for docker](https://docs.nvidia.com/datacenter/cloud-native/container-toolkit/install-guide.html#docker) inside WSL
4. Install make in WSL by running `sudo apt-get -y install make`
5. run specified make commands in makefile description.

### Linux (Ubuntu 22.04)
1. Download and install [Docker](https://docs.docker.com/engine/install/ubuntu/)
2. Install [Nvidia container toolkit for docker](https://docs.nvidia.com/datacenter/cloud-native/container-toolkit/install-guide.html#docker)
3. run specified make commands in makefile description.

## Directory

### 1. Containers (temporary)
- temporary directory for microcontroller build environments and other relevant code
- stm32: Includes the relevant files for setting up the container for embedded development on STM32 microcontrollers. Includes the Dockerfile, Makefile, CMakelist.txt file, and relevant microcontroller source files, headers, and libraries. 
- rpico: Includes a single Dockerfile that downloads and installs the necessary dependencies for pico initialization.

### 2. training
- cloned from MLCommon's tinyML benchmark github repository. contains the training directory for both the keyword spotting and visual wakeword tinyML applications.
- The training processes have been integrated with MLFlow and Dagshub for experiment tracking.

### 3. stm32f746g-discovery
- Directory for the STM32F746g-discovery board tinyML applications
- For this project it contains only the keyword spotting application located in the KWS_STM32 folder.
- Currently contains the working Makefile and CMakeLists.txt file for automating the build process.
- Keyword spotting application currently only supports the micro_speech example from tensorflow lite micro that detects 2 keywords (Yes, No).
- *TBA - working example using DS CNN model from tinyMLPerf for 12 keywords*

---
## Initialization Phase Files

### 1. Dockerfile
- contains all necessary dependencies in setting up the docker environment for the project.
- For the training and optimization phase, the dockerfile sets up the training environment for both keyword spotting and visual wake word by installing the respective python versions and library dependencies in their respective python virtual environments.
- For the application code build and deploy phase, the stm32 debug/flash tools are setup along with the ARM compiler.

### 2. Makefile
- provides commands for building of each phase
- build and run the docker image inside the working directory along with mounting the current directory as a volume and providing gpu access to the container using: `make build-container` with the following arguments specified for the MLFLOW run instance for training: `MLFLOW_TRACKING_USERNAME={username} MLFLOW_TRACKING_PASSWORD={password} MLFLOW_RUN_NAME={run name}`
- clean up docker image after exiting with: `make clean-image`
- Build STM32F746g-discovery board Keyword Spotting application .elf, .hex, and .bin files and store them in the build folder using `make build-stm32-app`.
- clean up stm32 docker image after exiting with: `make clean-stm32-image`
- *TBA - raspberry pi pico visual wake word app build make command*
- *TBA - sections in the makefile for automating microcontroller code  deployment*

--- 
