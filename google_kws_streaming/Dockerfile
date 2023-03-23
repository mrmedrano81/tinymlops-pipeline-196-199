FROM nvidia/cuda:12.0.1-cudnn8-runtime-ubuntu22.04

ARG DEBIAN_FRONTEND=noninteractive

ENV KWS_PATH=$PWD/test
ENV DATA_PATH=$KWS_PATH/data2

#ENV MODELS_PATH=$KWS_PATH/models_data_v2_12_labels
ENV MODELS_PATH=$KWS_PATH/models2_30k

RUN apt update && apt-get update 

RUN apt-get install -y software-properties-common gcc
    
RUN add-apt-repository -y ppa:deadsnakes/ppa

RUN apt-get update && apt-get install -y python3 python3-distutils python3-pip python3-apt

RUN python3 -m pip install --upgrade pip

RUN apt -y install libportaudio2

RUN pip install --upgrade pip

RUN pip install tf_nightly && pip install tensorflow_addons && pip install tensorflow_model_optimization

RUN pip install pandas && pip install pydot && pip install graphviz && pip install numpy && pip install absl-py

ENV CMD_TRAIN="python3 -m kws_streaming.train.model_train_eval"