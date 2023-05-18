#!/usr/bin/env bash
# Copyright (C) 2023 Arm Limited or its affiliates. All rights reserved.
#
# SPDX-License-Identifier: Apache-2.0
#
# Licensed under the Apache License, Version 2.0 (the License); you may
# not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
# www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an AS IS BASIS, WITHOUT
# WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.

ckpt_path=keras/ds_cnn.h5
train=false


# DS-CNN Small training
if [ "$train" = true ]
then
python train.py --model_architecture ds_cnn --model_size_info 5 64 10 4 2 2 64 3 3 1 1 64 3 3 1 1 64 3 3 1 1 64 3 3 1 1 --dct_coefficient_count 40 --window_size_ms 30 --window_stride_ms 20 --learning_rate 0.0005,0.0001,0.00002 --how_many_training_steps 10000,10000,10000 --summaries_dir work/DS_CNN/DS_CNN_S/retrain_logs --train_dir work/DS_CNN/DS_CNN_S/training --data_dir dataset
fi

#Conversion to TFLite fp32
#python convert_to_tflite.py --model_architecture ds_cnn --model_size_info 5 64 10 4 2 2 64 3 3 1 1 64 3 3 1 1 64 3 3 1 1 64 3 3 1 1 --dct_coefficient_count 40 --window_size_ms 30 --window_stride_ms 20 --checkpoint $ckpt_path --no-quantize --data_dir dataset

# Conversion to TFLite int8
python convert_to_tflite.py --model_architecture ds_cnn --model_size_info 5 64 10 4 2 2 64 3 3 1 1 64 3 3 1 1 64 3 3 1 1 64 3 3 1 1 --dct_coefficient_count 40 --window_size_ms 30 --window_stride_ms 20 --checkpoint $ckpt_path --inference_type int8 --data_dir dataset

