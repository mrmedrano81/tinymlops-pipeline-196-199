#######################-------INITIALIZATION-------#########################

FROM nvidia/cuda:11.0.3-cudnn8-runtime-ubuntu20.04

ARG NEEDRESTART_MODE=a

ARG DEBIAN_FRONTEND=noninteractive

# Set of all package dependencies needed
RUN apt update && apt-get update && apt upgrade -y && \
    apt-get install -y --no-install-recommends\
    #training
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
    #embedded
    usbutils \
    lbzip2 \
    nano \
    findutils \
    cmake \
    xxd \
    stlink-tools \
    openocd

# Download gcc-arm-none-eabi to bz2 format in tmp directory
#RUN wget https://developer.arm.com/-/media/Files/downloads/gnu-rm/9-2020q2/gcc-arm-none-eabi-9-2020-q2-update-x86_64-linux.tar.bz2 -O /tmp/gcc-arm-none-eabi.tar.bz2
RUN wget --no-check-certificate https://developer.arm.com/-/media/Files/downloads/gnu-rm/10.3-2021.10/gcc-arm-none-eabi-10.3-2021.10-x86_64-linux.tar.bz2 -O /tmp/gcc-arm-none-eabi.tar.bz2
# Extract files into new gcc folder in opt
RUN mkdir -p /opt/gcc-arm-none-eabi
RUN tar xjfv /tmp/gcc-arm-none-eabi.tar.bz2 -C /opt/gcc-arm-none-eabi --strip-components 1

# Link executables to usr local bin
RUN ln -s /opt/gcc-arm-none-eabi-10.3/bin/* /usr/local/bin

# Clear tmp folder and configure compiler path
RUN rm -rf /tmp/*
ENV PATH="/opt/gcc-arm-none-eabi/bin:${PATH}"

#######################-------MODEL TRAINING AND OPTIMIZATION-------#########################

# Set up necessary environment variables for pyenv
ENV PYENV_ROOT /root/.pyenv
ENV PATH $PYENV_ROOT/shims:$PYENV_ROOT/bin:$PATH

# Install pyenv
RUN set -ex \
    && curl https://pyenv.run | bash \
    && pyenv update \
    && pyenv install 3.7 \
    && pyenv install 3.8 \
    && pyenv global 3.8 \
    && pyenv rehash

# Set up virtual environments for projects
RUN pyenv virtualenv 3.7 image_classification
RUN pyenv virtualenv 3.8 keyword_spotting

#----Set up image classification project environment----#
ENV PATH="/opt/pyenv/versions/image_classification/bin:$PATH"

RUN pyenv local image_classification
RUN python -m pip install --upgrade pip setuptools wheel

# Copy directory to workdir in docker container
WORKDIR /tmp
COPY /training/image_classification/requirements.txt .

# Run pip install requirements.txt
RUN pip install -r requirements.txt

#----Set up keyword spotting project environment----#
ENV PATH="/opt/pyenv/versions/keyword_spotting/bin:$PATH"

RUN pyenv local keyword_spotting
RUN python -m pip install --upgrade pip setuptools wheel

# Copy directory to workdir in docker container
WORKDIR /tmp
COPY /training/keyword_spotting/requirements.txt .

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