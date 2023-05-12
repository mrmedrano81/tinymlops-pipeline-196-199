FROM ubuntu:20.04

ARG DEBIAN_FRONTEND=noninteractive

RUN apt update && apt-get update && apt upgrade -y && \
    apt-get install -y --no-install-recommends\
    git \
    usbutils \
    libncurses5 \
    lbzip2 \
    nano \
    wget \
    findutils \
    make \
    cmake \
    stlink-tools \
    openocd

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

ENV HOME=/app
WORKDIR /app