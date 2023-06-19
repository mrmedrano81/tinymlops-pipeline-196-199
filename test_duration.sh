#!/bin/bash

train_out="build_duration.txt"
stm32_out="stm32_build_duration.txt"
pico_out="pico_build_duration.txt"

max=30
for i in `seq 0 $max`
do
    # training image
    yes | docker system prune -a 

    start_time=$(date +%s.%N)

    make train-image

    end_time=$(date +%s.%N)
    duration=$(echo "$end_time - $start_time" | bc)

    echo "$duration" >> "$train_out"

    # stm32 image
    yes | docker system prune -a 

    start_time=$(date +%s.%N)

    make stm32-image

    end_time=$(date +%s.%N)
    duration=$(echo "$end_time - $start_time" | bc)

    echo "$duration" >> "$stm32_out"

    # pico image
    yes | docker system prune -a 

    start_time=$(date +%s.%N)

    make pico-image

    end_time=$(date +%s.%N)
    duration=$(echo "$end_time - $start_time" | bc)

    echo "$duration" >> "$pico_out"
    
done