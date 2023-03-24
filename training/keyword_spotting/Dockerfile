FROM nvidia/cuda:12.0.1-cudnn8-runtime-ubuntu22.04

ARG DEBIAN_FRONTEND=noninteractive

RUN apt update && apt-get update 

RUN apt-get install -y software-properties-common gcc
    
RUN add-apt-repository -y ppa:deadsnakes/ppa

RUN apt-get update && apt-get install -y python3.8 python3.8-distutils python3-pip python3-apt

RUN python3.8 -m pip install --upgrade pip

WORKDIR /app

COPY requirements.txt .

RUN pip3.8 install -r requirements.txt

RUN pip3.8 install tensorflow_datasets

ENV HOME=$PWD