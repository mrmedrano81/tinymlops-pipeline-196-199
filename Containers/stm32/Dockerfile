FROM ubuntu:20.04

ARG DEBIAN_FRONTEND=noninteractive

RUN apt update

RUN apt install -y git

#lib utils
RUN apt install -y usbutils
RUN apt install -y libncurses5
RUN apt install -y lbzip2

#Utils
RUN apt install -y nano
RUN apt install -y wget
RUN apt install -y findutils

#make and cmake
RUN apt install -y make
RUN apt install -y cmake

#STM32 Debug tools
RUN apt install -y stlink-tools
RUN apt install -y openocd

#Download gcc-arm-none-eabi to bz2 format in tmp directory
RUN wget https://developer.arm.com/-/media/Files/downloads/gnu-rm/9-2020q2/gcc-arm-none-eabi-9-2020-q2-update-x86_64-linux.tar.bz2 -O /tmp/gcc-arm-none-eabi.tar.bz2

#Extract files into new gcc folder in opt
RUN mkdir -p opt/gcc-arm-none-eabi
RUN tar xjfv /tmp/gcc-arm-none-eabi.tar.bz2 -C opt/gcc-arm-none-eabi --strip-components 1

#Link executables to usr local bin
RUN ln -s /opt/gcc-arm-none-eabi-10.3/bin/* /usr/local/bin

#Clear tmp folder and configure compiler path
RUN rm -rf /tmp/*
ENV PATH="/opt/gcc-arm-none-eabi/bin:${PATH}"

#Configure container for user
ARG UID
ARG GID
ARG USERNAME
ARG GROUPNAME
RUN groupadd --gid $GID $GROUPNAME
RUN useradd --uid $UID --gid $GID $USERNAME
RUN usermod --append --groups $GROUPNAME $USERNAME
RUN usermod --shell /bin/bash $USERNAME

USER $USERNAME









            