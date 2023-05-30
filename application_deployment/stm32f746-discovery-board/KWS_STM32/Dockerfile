#   Dockerfile: installs the compiler and flash tool for the stm32 application
#   
#   Copyright (C) 2023  Michael Medrano
#   
#   This program is free software: you can redistribute it and/or modify
#   it under the terms of the GNU General Public License as published by
#   the Free Software Foundation, either version 3 of the License, or
#   (at your option) any later version.
#   
#   This program is distributed in the hope that it will be useful,
#   but WITHOUT ANY WARRANTY; without even the implied warranty of
#   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
#   GNU General Public License for more details.
#   
#   You should have received a copy of the GNU General Public License
#   along with this program.  If not, see <https://www.gnu.org/licenses/>.

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