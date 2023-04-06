#######################-------INITIALIZATION-------#########################

FROM nvidia/cuda:12.0.1-cudnn8-runtime-ubuntu20.04

ARG NEEDRESTART_MODE=a

ARG DEBIAN_FRONTEND=noninteractive

RUN apt update && apt-get update && apt upgrade -y

RUN apt-get install -y ffmpeg

#######################-------MODEL TRAINING AND OPTIMIZATION-------#########################

# Set of all dependencies needed for pyenv to work on Ubuntu
RUN apt-get install -y --no-install-recommends make build-essential libssl-dev zlib1g-dev libbz2-dev libreadline-dev libsqlite3-dev wget ca-certificates curl llvm libncurses5-dev xz-utils tk-dev libxml2-dev libxmlsec1-dev libffi-dev liblzma-dev mecab-ipadic-utf8 git

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
COPY /tflu-kws-cortex-m/Training/requirements.txt .

# Run pip install requirements.txt
RUN pip install -r requirements.txt

RUN pip install tensorflow_datasets && pip install pydub && pip install mlflow

ENV HOME=$PWD


#######################-------APPLICATION BUILD AND DEPLOY-------#########################

#lib utils
RUN apt install -y usbutils
RUN apt install -y lbzip2

#Utils
RUN apt install -y nano
RUN apt install -y findutils

RUN apt install -y cmake

#STM32 Debug tools
RUN apt install -y stlink-tools
RUN apt install -y openocd

#Download gcc-arm-none-eabi to bz2 format in tmp directory
RUN wget https://developer.arm.com/-/media/Files/downloads/gnu-rm/9-2020q2/gcc-arm-none-eabi-9-2020-q2-update-x86_64-linux.tar.bz2 -O /tmp/gcc-arm-none-eabi.tar.bz2

#Extract files into new gcc folder in opt
RUN mkdir -p /opt/gcc-arm-none-eabi
RUN tar xjfv /tmp/gcc-arm-none-eabi.tar.bz2 -C /opt/gcc-arm-none-eabi --strip-components 1

#Link executables to usr local bin
RUN ln -s /opt/gcc-arm-none-eabi-10.3/bin/* /usr/local/bin

#Clear tmp folder and configure compiler path
RUN rm -rf /tmp/*
ENV PATH="/opt/gcc-arm-none-eabi/bin:${PATH}"

WORKDIR /app


##### pico side #####
FROM ubuntu:20.04

ARG NEEDRESTART_MODE=a
ARG DEBIAN_FRONTEND=noninteractive

ARG DEBIAN_PRIORITY=critical

#initialization
RUN apt update
RUN apt upgrade -y

#python
RUN apt-get update && apt-get install -y software-properties-common gcc && \
    add-apt-repository -y ppa:deadsnakes/ppa

RUN apt-get update && apt-get install -y python3.6 python3-distutils python3-pip python3-apt

#lib utils
RUN apt install -y usbutils
RUN apt install -y libncurses5

#Utils
RUN apt install -y nano
RUN apt install -y wget
RUN apt install git
RUN apt install -y findutils

#make and cmake
RUN apt install -y make
RUN apt install -y cmake

#Thonny, micropython
RUN apt install -y thonny
RUN apt install -y micropython

RUN pip3 show thonny
RUN pip3 show micropython

#Microphone
RUN export PICO_SDK_PATH=/path/to/pico-sdk
RUN git clone https://github.com/sandeepmistry/pico-microphone.git
RUN cd pico-microphone

RUN mkdir build
RUN cd build

RUN cmake ..
RUN cmake .. -DPICO_BOARD=pico

RUN make
RUN echo "Make command initialized. Please Hold down the BOOTSEL button on the board, while plugging the board into your computer with a USB cable."

*pause command(s) execution after the latest line*
*prompt user to continue after the BOOTSEL*

RUN cp -a examples/usb_microphone/usb_microphone.uf2 /Volumes/RPI-RP2/.


