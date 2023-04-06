# tinymlops-pipeline-196-199
Working repository for Michael Medrano and Josh Yap's EEE 196/199 capstone project.

---

## Directory

### 1. Containers
- temporary directory for microcontroller build environments and other relevant code

- stm32: Includes the relevant files for setting up the container for embedded development on STM32 microcontrollers. Includes the Dockerfile, Makefile, CMakelist.txt file, and relevant microcontroller source files, headers, and libraries. 

- rpico: *TBA -Josh Yap*

### 2. google_kws_streaming
- cloned from the google research github repository and slightly modified for this project

### 3. training
- cloned from MLCommon's tinyML benchmark github repository. Keyword spotting and image classification directories contain an added Dockerfile for the training phase.

### 4. tflu-kws-cortex-m
- cloned from the ARM repository and slightly modified for this project
---
## Initialization Phase Files

### 1. Dockerfile
- contains all necessary dependencies for the pipline stages and setting up the docker environment for the project

### 2. Makefile
- provides commands for building of each phase
- build and run the docker image inside the working directory along with mounting the current directory as a volume and providing gpu access to the container using: `make build-container`
- clean up docker image after exiting with: `make clean-image`
- *TBA - sections in the makefile for automating microcontroller code build and deployment*

--- 
