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

### 1. model_training
- Directory for the model training phase of the pipeline and consists of different repositories for training specific models.
- *MLPerf*: cloned from [MLCommon's tinyML benchmark](https://github.com/mlcommons/tiny) github repository training directory. contains the training directory for both the keyword spotting and visual wakeword tinyML applications.
- *ARM-ML-Zoo*: cloned from the [ML-Zoo](https://github.com/ARM-software/ML-zoo) repository of ARM, namely the training package for cnn_small and ds_cnn small models for keyword spotting.
- *Tensorflow*: cloned from tensorflow [speech commands example](https://github.com/tensorflow/tensorflow/tree/v2.4.0/tensorflow/examples/speech_commands). Contains the training package for the micro_speech model training and audio recognition tutorial.

### 2. application_deployment
- Directory for different microcontroller applications as part of the deployment phase of the pipeline.
- *stm32f746g-discovery*: Directory for the STM32F746g-discovery board tinyML applications.
- *raspberry-pi-pico*: Directory for the Raspberry Pi Pico microcontroller tinyML applications.

---
## Initialization Phase Files

### 1. Dockerfile
- contains all necessary dependencies in setting up the docker environment for the project.
- For the training and optimization phase, the dockerfile sets up the training environment for both keyword spotting and visual wake word by installing the respective python versions and library dependencies in their respective python virtual environments.
- For the application code build and deploy phase, the stm32 debug/flash tools are setup along with the ARM compiler.
- When choosing which nvidia/cuda docker base image to use, make sure that the build configuration is compatible with the training process to be used by checking the version compatibilities listed in the [build from source](https://www.tensorflow.org/install/source#linux) section in the tensorflow website. 

### 2. Makefile
- Provides targets for each phase of the project pipeline.
- *TBA - raspberry pi pico visual wake word app build, flash, and clean make command*
- Listed in the table below are the available targets to be run with `make[command]` :

| Command | Description |
| ----------- | ----------- |
| `build-main-container` | Run the docker image inside the working directory along with mounting the current directory as a volume and providing gpu access to the container for training. You can specify the following arguments for mlflow tracking: `MLFLOW_TRACKING_USERNAME={username} MLFLOW_TRACKING_PASSWORD={password} MLFLOW_RUN_NAME={run name}`|
| `build-stm32-app` | Build the STM32F746g-discovery board keyword spotting application .elf, .hex, and .bin files and store them in the build folder | 
|`flash-stm32-app`|Builds and flashes the {PROJECT_NAME}.bin file to the stm32 microcontroller. The flashing process is repeated if the first one fails (a workaround for a bug within the st-link tool for certain stm32 mcus).|
|`clean-stm32-app`|Removes STM32 application project 'build' folder|
|`clean-all-images`|Runs the `clean-image` and `clean-stm32-image` targets to clean both main and STM32 docker images.|


--- 
