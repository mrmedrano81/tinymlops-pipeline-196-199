FROM nvidia/cuda:12.0.1-cudnn8-runtime-ubuntu22.04

ARG DEBIAN_FRONTEND=noninteractive

RUN apt update && apt-get update 

RUN apt-get -y install git

RUN apt-get install -y software-properties-common gcc
    
RUN add-apt-repository -y ppa:deadsnakes/ppa

RUN apt-get update && apt-get install -y python3.8 python3.8-distutils python3-pip python3-apt

RUN python3.8 -m pip install --upgrade pip

RUN apt-get install -y ffmpeg

WORKDIR /app

COPY requirements.txt .

RUN pip3.8 install -r requirements.txt

RUN pip3.8 install tensorflow_datasets && pip3.8 install pydub

RUN pip3.8 install mlflow

ENV HOME=$PWD

ENV MLFLOW_TRACKING_USERNAME=mrmedrano81

ENV MLFLOW_TRACKING_PASSWORD=70334c6f3a4e81cd5c9271e67de06f62eb307c19