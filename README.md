# tinymlops-pipeline-196-199
Working repository for Michael Medrano and Josh Yap's EEE 196/199 capstone project.

---

## Directory

### 1. Containers (temporary)
- temporary directory for microcontroller build environments and other relevant code

- stm32: Includes the relevant files for setting up the container for embedded development on STM32 microcontrollers. Includes the Dockerfile, Makefile, CMakelist.txt file, and relevant microcontroller source files, headers, and libraries. 

- rpico: Includes a single Dockerfile that downloads and installs the necessary dependencies for pico initialization.

### 2. training
- cloned from MLCommon's tinyML benchmark github repository. contains the training directory for both the keyword spotting and visual wakeword tinyML applications.
- The training processes have been integrated with MLFlow and Dagshub for experiment tracking.

---
## Initialization Phase Files

### 1. Dockerfile
- contains all necessary dependencies in setting up the docker environment for the project.
- For the training and optimization phase, the dockerfile sets up the training environment for both keyword spotting and visual wake word by installing the respective python versions and library dependencies in their respective python virtual environments.
- For the application code build and deploy phase, the stm32 debug/flash tools are setup along with the ARM compiler.

### 2. Makefile
- provides commands for building of each phase
- build and run the docker image inside the working directory along with mounting the current directory as a volume and providing gpu access to the container using: `make build-container`
- clean up docker image after exiting with: `make clean-image`
- *TBA - sections in the makefile for automating microcontroller code build and deployment*

--- 
