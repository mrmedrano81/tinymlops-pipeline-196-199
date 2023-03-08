FROM ubuntu:20.04

#set noninteractive to avoid timezone error during building
ARG DEBIAN_FRONTEND=noninteractive

#execute necessary commands for installing additional packages:
#   -software-properties-common for add-apt-repository and gcc
#   -ppa:deadsnakes/ppa for installing python3.x on ubuntu (in this case python3.9)

RUN apt-get update 

RUN apt-get install -y software-properties-common gcc
    
RUN add-apt-repository -y ppa:deadsnakes/ppa

RUN apt-get update && apt-get install -y python3.10 python3-distutils python3-pip python3-apt

RUN python3 -m pip install --upgrade pip

#installing libcudnn8
RUN apt-get install wget
RUN wget https://developer.download.nvidia.com/compute/cuda/repos/ubuntu2004/x86_64/cuda-ubuntu2004.pin
RUN mv cuda-ubuntu2004.pin /etc/apt/preferences.d/cuda-repository-pin-600
RUN apt-key adv --fetch-keys https://developer.download.nvidia.com/compute/cuda/repos/ubuntu2004/x86_64/3bf863cc.pub
RUN add-apt-repository "deb https://developer.download.nvidia.com/compute/cuda/repos/ubuntu2004/x86_64/ /"
RUN apt-get update
RUN apt-get install libcudnn8
RUN apt-get install libcudnn8-dev

RUN pip install -U -q tensorflow tensorflow_datasets

RUN pip install matplotlib

RUN pip install seaborn

RUN pip install ipython

WORKDIR /app

COPY train.py .

COPY test_gpu.py .

