# Copyright 2023 Michael Medrano
# 
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
# 
#     http://www.apache.org/licenses/LICENSE-2.0
# 
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.

#######################-------INITIALIZATION-------#########################

#FROM nvidia/cuda:11.0.3-cudnn8-runtime-ubuntu20.04
FROM nvidia/cuda:11.2.0-cudnn8-runtime-ubuntu20.04
#FROM nvidia/cuda:12.0.1-cudnn8-runtime-ubuntu20.04

ARG NEEDRESTART_MODE=a

ARG DEBIAN_FRONTEND=noninteractive

# Set of all package dependencies needed
RUN apt update && apt-get update && apt upgrade -y && \
    apt-get install -y --no-install-recommends\
    #model-training
    ffmpeg \
    make \
    build-essential \
    libssl-dev \
    zlib1g-dev \
    libbz2-dev \
    libreadline-dev \
    libsqlite3-dev \
    wget \
    ca-certificates \
    curl \
    llvm \
    libncurses5-dev \
    xz-utils \
    tk-dev \
    libxml2-dev \
    libxmlsec1-dev \
    libffi-dev \
    liblzma-dev \
    mecab-ipadic-utf8 \
    git \
    #application-deployment
    usbutils \
    lbzip2 \
    nano \
    findutils \
    cmake \
    xxd \
    stlink-tools \
    openocd

# Download gcc-arm-none-eabi to bz2 format in tmp directory
RUN wget --no-check-certificate https://developer.arm.com/-/media/Files/downloads/gnu-rm/10.3-2021.10/gcc-arm-none-eabi-10.3-2021.10-x86_64-linux.tar.bz2 -O /tmp/gcc-arm-none-eabi.tar.bz2

# Extract files into new gcc folder in opt
RUN mkdir -p /opt/gcc-arm-none-eabi
RUN tar xjfv /tmp/gcc-arm-none-eabi.tar.bz2 -C /opt/gcc-arm-none-eabi --strip-components 1

# Link executables to usr local bin
RUN ln -s /opt/gcc-arm-none-eabi-10.3/bin/* /usr/local/bin

# Clear tmp folder and configure compiler path
RUN rm -rf /tmp/*
ENV PATH="/opt/gcc-arm-none-eabi/bin:${PATH}"

# Set up necessary environment variables for pyenv
ENV PYENV_ROOT /root/.pyenv
ENV PATH $PYENV_ROOT/shims:$PYENV_ROOT/bin:$PATH

# Install pyenv
RUN set -ex \
    && curl https://pyenv.run | bash \
    && pyenv update \
    && pyenv install 3.8 \
    && pyenv global 3.8 \
    && pyenv rehash

# Set up virtual environments for projects
RUN pyenv virtualenv 3.8 mlperf-kws

#----Set up MLPerf KWS training environment----#
ENV PATH="/opt/pyenv/versions/mlperf-kws/bin:$PATH"

RUN pyenv local mlperf-kws
RUN python -m pip install --upgrade pip setuptools wheel

# Copy directory to workdir in docker container
WORKDIR /tmp
COPY /model_training/MLPerf/training/keyword_spotting/requirements.txt .

#----Set up ARM-ML-Zoo KWS training environment----#
RUN pyenv virtualenv 3.8 arm-kws
ENV PATH="/opt/pyenv/versions/arm-kws/bin:$PATH"

RUN pyenv local arm-kws
RUN python -m pip install --upgrade pip setuptools wheel

# Copy directory to workdir in docker container
WORKDIR /tmp
COPY /model_training/ARM-ML-Zoo/keyword_spotting/requirements.txt .

# Run pip install requirements.txt
RUN pip install -r requirements.txt

# set mlflow config
ARG MLFLOW_TRACKING_USERNAME
ARG MLFLOW_TRACKING_PASSWORD
ARG MLFLOW_RUN_NAME

ENV MLFLOW_TRACKING_USERNAME=$MLFLOW_TRACKING_USERNAME
ENV MLFLOW_TRACKING_PASSWORD=$MLFLOW_TRACKING_PASSWORD
ENV MLFLOW_RUN_NAME=$MLFLOW_RUN_NAME

# set other env vars
ENV HOME=/app

WORKDIR /app