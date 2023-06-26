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

FROM ubuntu:20.04

ARG DEBIAN_FRONTEND=noninteractive

#install necessary packages for building and flashing the stm32f746g discovery board
RUN apt update && apt-get update && apt upgrade -y && \
    apt-get install -y --no-install-recommends\
    git \
    build-essential \
    rpm \
    libusb-1.0 \
    usbutils \
    libncurses5 \
    lbzip2 \
    nano \
    wget \
    findutils \
    ca-certificates \
    gcc \
    make \
    cmake

#------------ GCC-ARM-NONE-EABI COMPILER SETUP ------------#

#Download gcc-arm-none-eabi to bz2 format in tmp directory
RUN wget --no-check-certificate https://developer.arm.com/-/media/Files/downloads/gnu-rm/10.3-2021.10/gcc-arm-none-eabi-10.3-2021.10-x86_64-linux.tar.bz2 -O /tmp/gcc-arm-none-eabi.tar.bz2

#Extract files into new gcc folder in opt
RUN mkdir -p opt/gcc-arm-none-eabi
RUN tar xjfv /tmp/gcc-arm-none-eabi.tar.bz2 -C opt/gcc-arm-none-eabi --strip-components 1

#Link executables to usr local bin
RUN ln -s /opt/gcc-arm-none-eabi-10.3/bin/* /usr/local/bin

#Clear tmp folder and configure compiler path
RUN rm -rf /tmp/*
ENV PATH="/opt/gcc-arm-none-eabi/bin:${PATH}"

#------------ STLINK SETUP ------------#

RUN mkdir /git
WORKDIR /git

# clone stlink github repo
RUN git clone https://github.com/stlink-org/stlink.git
WORKDIR /git/stlink

# build  stlink from source
RUN make clean && make release && make install && make debug && make package
RUN ldconfig

RUN mkdir /app

WORKDIR /app