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

RUN apt-get update && apt-get install -y python3.6 python3-distutils python3-pip python3-apt git

#lib utils
RUN apt install -y usbutils
RUN apt install -y libncurses5

#Utils
RUN apt install -y nano
RUN apt install -y wget
RUN apt install -y findutils

#make and cmake
RUN apt install -y make
RUN apt install -y cmake

#Thonny, micropython
RUN apt install -y thonny
RUN apt install -y micropython
##RUN pip3 show thonny
##RUN pip3 show micropython

