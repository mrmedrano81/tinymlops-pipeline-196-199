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
5. Install usbipd-win ([guide](https://www.xda-developers.com/wsl-connect-usb-devices-windows-11/)) for flashing the STM32F746g-discovery board. You will need to then attach the STM32 using `usbipd wsl attach --busid <busid>` in the Windows CLI. 
6. run specified make commands in makefile description.

### Linux (Ubuntu 22.04)
1. Download and install [Docker](https://docs.docker.com/engine/install/ubuntu/)
2. Install [Nvidia container toolkit for docker](https://docs.nvidia.com/datacenter/cloud-native/container-toolkit/install-guide.html#docker)
3. run specified make commands in makefile description.

## Directory

### 1. model_training
- Directory for the model training phase of the pipeline and consists of different repositories for training specific models.
- *MLPerf*: cloned from [MLCommon's tinyML benchmark](https://github.com/mlcommons/tiny) github repository training directory. contains the training directory for both the keyword spotting and visual wakeword tinyML applications.
- *ARM-ML-Zoo*: cloned from the [ML-Zoo](https://github.com/ARM-software/ML-zoo) repository of ARM, namely the training package for cnn_small and ds_cnn small models for keyword spotting.
- *Tensorflow/speech commands*: cloned from tensorflow [speech commands example](https://github.com/tensorflow/tensorflow/tree/v2.4.0/tensorflow/examples/speech_commands). Contains the training package for the micro_speech model training and conversion. 
- *Tensorflow/visual_wake_words*: Visual wake words person detection training.

### 2. application_deployment
- Directory for different microcontroller applications as part of the deployment phase of the pipeline.
- *stm32f746g-discovery*: Directory for the STM32F746g-discovery board tinyML applications.
- *raspberry-pi-pico*: Directory for the Raspberry Pi Pico microcontroller tinyML applications.

---
## Initialization Phase Files

### 1. Dockerfile
- contains all necessary dependencies in setting up the docker environment for the project.
- For the training and optimization phase, the dockerfile sets up the training environment for both keyword spotting and visual wake word by installing the respective python versions and library dependencies in their respective python virtual environments.
- For the application code build and deploy phase, each microcontroller has it's own Dockerfile in the project root. For the stm32, the arm-gcc-none-eabi compiler and stlink tool is set up.
- When choosing which nvidia/cuda docker base image to use, make sure that the build configuration is compatible with the training process to be used by checking the version compatibilities listed in the [build from source](https://www.tensorflow.org/install/source#linux) section in the tensorflow website.
- The project currently supports the following nvidia/cuda docker images along with which training directories use it: 

|Image|Training Directories|
| ----------- | ----------- |
|`nvidia/cuda:11.2.0-cudnn8-runtime-ubuntu20.04`|ARM-ML-Zoo/keyword_spotting, MLPerf/training/keyword_spotting, Tensorflow/speech_commands, Tensorflow/visual_wake_words|

### 2. Makefile
- Provides targets for each phase of the project pipeline.
- *TBA - raspberry pi pico visual wake word app flash command*
- Listed in the table below are the available targets to be run with `make[command]` :

| <div style="width:180px">Command</div> | Description |
| ----------- | ----------- |
| `build-train-container` | Runs the docker image for training inside the working directory along with mounting the current directory as a volume while providing gpu access to the container. You can specify the following arguments for mlflow tracking: `MLFLOW_TRACKING_USERNAME={username} MLFLOW_TRACKING_PASSWORD={password} MLFLOW_RUN_NAME={run name}`. The base nvidia/cuda image version can also be specified using for example `NVIDIA_CUDA_IMAGE=11.0.3-cudnn8-runtime-ubuntu20.04`, where the options are listed in the table under the Dockerfile description|
| `build-stm32-app` | Builds the STM32F746g-discovery board keyword spotting application .elf, .hex, and .bin files and stores them in the build folder |
|`flash-stm32-app`|Builds and flashes the {PROJECT_NAME}.bin file to the stm32 microcontroller.|
|`clean-stm32-app`|Removes STM32 application project 'build' folder|
| `build-pico-app` | Builds the Raspberry Pi Pico visual wake word application, .elf, .hex, .bin, and .uf2 files and stores them in the build folder | 
|`flash-pico-app`|Builds and flashes the person_detection_int8.uf2 file to the pico microcontroller. Make sure that you have successfully mounted the Raspberry Pi Pico in BOOTSEL mode before running this command. You can mount the Pico using `mkdir /mnt/pico` then `mount -t drvfs D: /mnt/pico`.|
|`clean-pico-app`|Removes Pico application project 'build' folder|
|`clean-all-images`|Runs the `clean-image`, `clean-stm32-image`, and `clean-pico-image` targets to clean the main, STM32, and Pico docker images.|


--- 
