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

ARG NVIDIA_CUDA_IMAGE_VERSION

FROM nvidia/cuda:$NVIDIA_CUDA_IMAGE_VERSION

ARG NEEDRESTART_MODE=a

ARG DEBIAN_FRONTEND=noninteractive

# Dependencies needed for pyenv to function inside docker
RUN apt update && apt-get update && apt upgrade -y && \
    apt-get install -y --no-install-recommends \
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
    xxd

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

ARG INSTALL_MLPERF_KWS_REQS
ARG INSTALL_ARM_KWS_REQS
ARG INSTALL_TF_SPEECH_COMMANDS_REQS
ARG INSTALL_TF_VWW_REQS

# Set up PATHS
ENV PATH="/opt/pyenv/versions/MLPERF-KWS/bin:$PATH"
ENV PATH="/opt/pyenv/versions/ARM-KWS/bin:$PATH"
ENV PATH="/opt/pyenv/versions/TF-SPEECH-COMMANDS/bin:$PATH"
ENV PATH="/opt/pyenv/versions/TF_VWW/bin:$PATH"

# Set up virtual environments model training

# MLperf keyword spotting 
RUN if [ "$INSTALL_MLPERF_KWS_REQS" = "true" ]; then \
    pyenv virtualenv 3.8 MLPERF-KWS && \
    pyenv local MLPERF-KWS && \
    python -m pip install --upgrade pip setuptools wheel; \ 
    fi
WORKDIR /tmp
COPY /model_training/MLPerf/training/keyword_spotting/requirements.txt .
RUN if [ "$INSTALL_MLPERF_KWS_REQS" = "true" ]; then python -m pip install -r requirements.txt; fi

# ARM-ML-Zoo keyword spotting
RUN if [ "$INSTALL_ARM_KWS_REQS" = "true" ]; then \
    pyenv virtualenv 3.8 ARM-KWS && \
    pyenv local ARM-KWS && \
    python -m pip install --upgrade pip setuptools wheel; \
    fi
WORKDIR /tmp
COPY /model_training/ARM-ML-Zoo/keyword_spotting/requirements.txt .
RUN if [ "$INSTALL_ARM_KWS_REQS" = "true" ]; then python -m pip install -r requirements.txt; fi

# Tensorflow Speech Commands
RUN if [ "$INSTALL_TF_SPEECH_COMMANDS_REQS" = "true" ]; then \
    pyenv virtualenv 3.8 TF-SPEECH-COMMANDS && \
    pyenv local TF-SPEECH-COMMANDS && \
    python -m pip install --upgrade pip setuptools wheel; \
    fi
RUN if [ "$INSTALL_TF_SPEECH_COMMANDS_REQS" = "true" ]; then \
    pip install tensorflow-gpu==2.10.0 && \
    pip install mlflow; \
    fi

WORKDIR /model_training/Tensorflow/visual_wake_words

#  Tensorflow Visual Wake Word
RUN if [ "$INSTALL_TF_VWW_REQS" = "true" ]; then \
    pyenv virtualenv 3.8 TF_VWW && \
    pyenv local TF_VWW && \
    python -m pip install --upgrade pip setuptools wheel && \
    pip install tensorflow-gpu==2.10.0 && \
    pip install contextlib2; \
    fi

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