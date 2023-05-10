# STM32 Minimal CMake project for C/C++ projects
cmake_minimum_required(VERSION 3.12)
##################################################################################################
# Set project name and source code folder location
project(KWS_STM32)

option(DUMP_ASM "Create full assembly of final executable" OFF)

# Set microcontroller information
set(MCU_FAMILY STM32F7xx)
set(MCU_MODEL STM32F746xx)
set(CPU_PARAMETERS
    -mcpu=cortex-m7
    -mthumb
    -mfpu=fpv5-sp-d16
    -mfloat-abi=hard)

set(STARTUP_SCRIPT ${CMAKE_CURRENT_SOURCE_DIR}/CubeMX/startup_stm32f746xx.s)
set(MCU_LINKER_SCRIPT ${CMAKE_CURRENT_SOURCE_DIR}/CubeMX/STM32F746NGHx_FLASH.ld)

##################################################################################################
set(EXECUTABLE ${CMAKE_PROJECT_NAME})

enable_language(C CXX ASM)
set(CMAKE_C_STANDARD 11)
set(CMAKE_C_STANDARD_REQUIRED ON)
set(CMAKE_C_EXTENSIONS ON)
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS ON)


############################################ Includes ############################################

set(STM32CUBEMX_INCLUDE_DIRECTORIES
    ${CMAKE_CURRENT_SOURCE_DIR}/Drivers/${MCU_FAMILY}_HAL_Driver/Inc
    ${CMAKE_CURRENT_SOURCE_DIR}/Drivers/${MCU_FAMILY}_HAL_Driver/Inc/Legacy
    ${CMAKE_CURRENT_SOURCE_DIR}/Drivers/CMSIS/Device/ST/${MCU_FAMILY}/Include
    ${CMAKE_CURRENT_SOURCE_DIR}/Drivers/CMSIS/Include
    ${CMAKE_CURRENT_SOURCE_DIR}/Drivers/BSP/STM32746G-Discovery
    ${CMAKE_CURRENT_SOURCE_DIR}/Drivers/BSP/Components/Common
    ${CMAKE_CURRENT_SOURCE_DIR}/Utilities/Fonts
    ${CMAKE_CURRENT_SOURCE_DIR}/Utilities/Log)

set(TFLITE_INCLUDE_DIRECTORIES
    ${CMAKE_CURRENT_SOURCE_DIR}/KWS
    ${CMAKE_CURRENT_SOURCE_DIR}/KWS/tensorflow
    ${CMAKE_CURRENT_SOURCE_DIR}/KWS/tensorflow/core/public
    ${CMAKE_CURRENT_SOURCE_DIR}/KWS/tensorflow/lite
    ${CMAKE_CURRENT_SOURCE_DIR}/KWS/tensorflow/lite/c
    ${CMAKE_CURRENT_SOURCE_DIR}/KWS/tensorflow/lite/core/api
    ${CMAKE_CURRENT_SOURCE_DIR}/KWS/tensorflow/lite/experimental/microfrontend/lib
    ${CMAKE_CURRENT_SOURCE_DIR}/KWS/tensorflow/lite/kernels
    ${CMAKE_CURRENT_SOURCE_DIR}/KWS/tensorflow/lite/kernels/internal
    ${CMAKE_CURRENT_SOURCE_DIR}/KWS/tensorflow/lite/kernels/internal/optimized
    ${CMAKE_CURRENT_SOURCE_DIR}/KWS/tensorflow/lite/kernels/internal/reference
    ${CMAKE_CURRENT_SOURCE_DIR}/KWS/tensorflow/lite/kernels/internal/reference/integer_ops
    ${CMAKE_CURRENT_SOURCE_DIR}/KWS/tensorflow/lite/micro
    ${CMAKE_CURRENT_SOURCE_DIR}/KWS/tensorflow/lite/micro/kernels
    ${CMAKE_CURRENT_SOURCE_DIR}/KWS/tensorflow/lite/micro/memory_planner
    ${CMAKE_CURRENT_SOURCE_DIR}/KWS/tensorflow/lite/micro/testing
    ${CMAKE_CURRENT_SOURCE_DIR}/KWS/tensorflow/lite/schema)

set(THIRD_PARTY_INCLUDE_DIRECTORIES
    ${CMAKE_CURRENT_SOURCE_DIR}/KWS/third_party/flatbuffers
    ${CMAKE_CURRENT_SOURCE_DIR}/KWS/third_party/flatbuffers/include
    ${CMAKE_CURRENT_SOURCE_DIR}/KWS/third_party/flatbuffers/include/flatbuffers
    ${CMAKE_CURRENT_SOURCE_DIR}/KWS/third_party/gemmlowp
    ${CMAKE_CURRENT_SOURCE_DIR}/KWS/third_party/gemmlowp/fixedpoint
    ${CMAKE_CURRENT_SOURCE_DIR}/KWS/third_party/gemmlowp/internal
    ${CMAKE_CURRENT_SOURCE_DIR}/KWS/third_party/kissfft
    ${CMAKE_CURRENT_SOURCE_DIR}/KWS/third_party/kissfft/tools
    ${CMAKE_CURRENT_SOURCE_DIR}/KWS/third_party/ruy
    ${CMAKE_CURRENT_SOURCE_DIR}/KWS/third_party/ruy/ruy
    ${CMAKE_CURRENT_SOURCE_DIR}/KWS/third_party/ruy/ruy/profiler)

set(PROJECT_INCLUDE_DIRECTORIES
    ${CMAKE_CURRENT_SOURCE_DIR}/Core/Inc
    ${CMAKE_CURRENT_SOURCE_DIR}/KWS/Include)

############################################ Sources ############################################

set(STM32CUBEMX_SOURCES
    ${CMAKE_CURRENT_SOURCE_DIR}/Core/Src/syscalls.c
    ${CMAKE_CURRENT_SOURCE_DIR}/Core/Src/sysmem.c
    ${CMAKE_CURRENT_SOURCE_DIR}/Core/Src/stm32f7xx_hal_msp.c
    ${CMAKE_CURRENT_SOURCE_DIR}/Core/Src/stm32f7xx_it.c
    ${CMAKE_CURRENT_SOURCE_DIR}/Core/Src/system_stm32f7xx.c
    ${CMAKE_CURRENT_SOURCE_DIR}/Drivers/BSP/Components/wm8994/wm8994.c
    ${CMAKE_CURRENT_SOURCE_DIR}/Drivers/BSP/STM32746G-Discovery/stm32746g_discovery_audio.c
    ${CMAKE_CURRENT_SOURCE_DIR}/Drivers/BSP/STM32746G-Discovery/stm32746g_discovery_lcd.c
    ${CMAKE_CURRENT_SOURCE_DIR}/Drivers/BSP/STM32746G-Discovery/stm32746g_discovery_sdram.c
    ${CMAKE_CURRENT_SOURCE_DIR}/Drivers/BSP/STM32746G-Discovery/stm32746g_discovery.c
    ${CMAKE_CURRENT_SOURCE_DIR}/Drivers/${MCU_FAMILY}_HAL_Driver/Src/stm32f7xx_hal_cortex.c
    ${CMAKE_CURRENT_SOURCE_DIR}/Drivers/${MCU_FAMILY}_HAL_Driver/Src/stm32f7xx_hal_rcc.c
    ${CMAKE_CURRENT_SOURCE_DIR}/Drivers/${MCU_FAMILY}_HAL_Driver/Src/stm32f7xx_hal_rcc_ex.c
    ${CMAKE_CURRENT_SOURCE_DIR}/Drivers/${MCU_FAMILY}_HAL_Driver/Src/stm32f7xx_hal_flash.c
    ${CMAKE_CURRENT_SOURCE_DIR}/Drivers/${MCU_FAMILY}_HAL_Driver/Src/stm32f7xx_hal_flash_ex.c
    ${CMAKE_CURRENT_SOURCE_DIR}/Drivers/${MCU_FAMILY}_HAL_Driver/Src/stm32f7xx_hal_gpio.c
    ${CMAKE_CURRENT_SOURCE_DIR}/Drivers/${MCU_FAMILY}_HAL_Driver/Src/stm32f7xx_hal_dma.c
    ${CMAKE_CURRENT_SOURCE_DIR}/Drivers/${MCU_FAMILY}_HAL_Driver/Src/stm32f7xx_hal_dma_ex.c
    ${CMAKE_CURRENT_SOURCE_DIR}/Drivers/${MCU_FAMILY}_HAL_Driver/Src/stm32f7xx_hal_dma2d.c
    ${CMAKE_CURRENT_SOURCE_DIR}/Drivers/${MCU_FAMILY}_HAL_Driver/Src/stm32f7xx_hal_pwr.c
    ${CMAKE_CURRENT_SOURCE_DIR}/Drivers/${MCU_FAMILY}_HAL_Driver/Src/stm32f7xx_hal_pwr_ex.c
    ${CMAKE_CURRENT_SOURCE_DIR}/Drivers/${MCU_FAMILY}_HAL_Driver/Src/stm32f7xx_hal.c
    ${CMAKE_CURRENT_SOURCE_DIR}/Drivers/${MCU_FAMILY}_HAL_Driver/Src/stm32f7xx_hal_i2c.c
    ${CMAKE_CURRENT_SOURCE_DIR}/Drivers/${MCU_FAMILY}_HAL_Driver/Src/stm32f7xx_hal_i2c_ex.c
    ${CMAKE_CURRENT_SOURCE_DIR}/Drivers/${MCU_FAMILY}_HAL_Driver/Src/stm32f7xx_hal_i2s.c
    ${CMAKE_CURRENT_SOURCE_DIR}/Drivers/${MCU_FAMILY}_HAL_Driver/Src/stm32f7xx_hal_ltdc.c
    ${CMAKE_CURRENT_SOURCE_DIR}/Drivers/${MCU_FAMILY}_HAL_Driver/Src/stm32f7xx_hal_nor.c
    ${CMAKE_CURRENT_SOURCE_DIR}/Drivers/${MCU_FAMILY}_HAL_Driver/Src/stm32f7xx_hal_qspi.c
    ${CMAKE_CURRENT_SOURCE_DIR}/Drivers/${MCU_FAMILY}_HAL_Driver/Src/stm32f7xx_hal_sai.c
    ${CMAKE_CURRENT_SOURCE_DIR}/Drivers/${MCU_FAMILY}_HAL_Driver/Src/stm32f7xx_hal_sai_ex.c
    ${CMAKE_CURRENT_SOURCE_DIR}/Drivers/${MCU_FAMILY}_HAL_Driver/Src/stm32f7xx_hal_sd.c
    ${CMAKE_CURRENT_SOURCE_DIR}/Drivers/${MCU_FAMILY}_HAL_Driver/Src/stm32f7xx_hal_sdram.c
    ${CMAKE_CURRENT_SOURCE_DIR}/Drivers/${MCU_FAMILY}_HAL_Driver/Src/stm32f7xx_hal_sram.c
    ${CMAKE_CURRENT_SOURCE_DIR}/Drivers/${MCU_FAMILY}_HAL_Driver/Src/stm32f7xx_hal_tim_ex.c
    ${CMAKE_CURRENT_SOURCE_DIR}/Drivers/${MCU_FAMILY}_HAL_Driver/Src/stm32f7xx_hal_tim.c
    ${CMAKE_CURRENT_SOURCE_DIR}/Drivers/${MCU_FAMILY}_HAL_Driver/Src/stm32f7xx_hal_uart.c
    ${CMAKE_CURRENT_SOURCE_DIR}/Drivers/${MCU_FAMILY}_HAL_Driver/Src/stm32f7xx_ll_fmc.c
    ${CMAKE_CURRENT_SOURCE_DIR}/Drivers/${MCU_FAMILY}_HAL_Driver/Src/stm32f7xx_ll_sdmmc.c)
    #${CMAKE_CURRENT_SOURCE_DIR}/Utilities/Log/lcd_log.c)

set (TFLITE_SOURCES

    #tflite
    ${CMAKE_CURRENT_SOURCE_DIR}/KWS/tensorflow/lite/c/common.c
    ${CMAKE_CURRENT_SOURCE_DIR}/KWS/tensorflow/lite/core/api/error_reporter.cc
    ${CMAKE_CURRENT_SOURCE_DIR}/KWS/tensorflow/lite/core/api/flatbuffer_conversions.cc
    ${CMAKE_CURRENT_SOURCE_DIR}/KWS/tensorflow/lite/core/api/op_resolver.cc
    ${CMAKE_CURRENT_SOURCE_DIR}/KWS/tensorflow/lite/core/api/tensor_utils.cc
    ${CMAKE_CURRENT_SOURCE_DIR}/KWS/tensorflow/lite/schema/schema_utils.cc
    
    #tflite kernel
    ${CMAKE_CURRENT_SOURCE_DIR}/KWS/tensorflow/lite/kernels/kernel_util.cc
    ${CMAKE_CURRENT_SOURCE_DIR}/KWS/tensorflow/lite/kernels/internal/quantization_util.cc

    #microfrontend
    ${CMAKE_CURRENT_SOURCE_DIR}/KWS/tensorflow/lite/experimental/microfrontend/lib/window.c
    ${CMAKE_CURRENT_SOURCE_DIR}/KWS/tensorflow/lite/experimental/microfrontend/lib/window_util.c
    ${CMAKE_CURRENT_SOURCE_DIR}/KWS/tensorflow/lite/experimental/microfrontend/lib/pcan_gain_control.c
    ${CMAKE_CURRENT_SOURCE_DIR}/KWS/tensorflow/lite/experimental/microfrontend/lib/pcan_gain_control_util.c
    ${CMAKE_CURRENT_SOURCE_DIR}/KWS/tensorflow/lite/experimental/microfrontend/lib/noise_reduction.c
    ${CMAKE_CURRENT_SOURCE_DIR}/KWS/tensorflow/lite/experimental/microfrontend/lib/noise_reduction_util.c
    ${CMAKE_CURRENT_SOURCE_DIR}/KWS/tensorflow/lite/experimental/microfrontend/lib/log_scale.c
    ${CMAKE_CURRENT_SOURCE_DIR}/KWS/tensorflow/lite/experimental/microfrontend/lib/log_scale_util.c
    ${CMAKE_CURRENT_SOURCE_DIR}/KWS/tensorflow/lite/experimental/microfrontend/lib/log_lut.c
    ${CMAKE_CURRENT_SOURCE_DIR}/KWS/tensorflow/lite/experimental/microfrontend/lib/frontend.c
    ${CMAKE_CURRENT_SOURCE_DIR}/KWS/tensorflow/lite/experimental/microfrontend/lib/frontend_util.c
    ${CMAKE_CURRENT_SOURCE_DIR}/KWS/tensorflow/lite/experimental/microfrontend/lib/filterbank.c
    ${CMAKE_CURRENT_SOURCE_DIR}/KWS/tensorflow/lite/experimental/microfrontend/lib/filterbank_util.c
    ${CMAKE_CURRENT_SOURCE_DIR}/KWS/tensorflow/lite/experimental/microfrontend/lib/fft.cc
    ${CMAKE_CURRENT_SOURCE_DIR}/KWS/tensorflow/lite/experimental/microfrontend/lib/fft_util.cc

    #micro
    ${CMAKE_CURRENT_SOURCE_DIR}/KWS/tensorflow/lite/micro/all_ops_resolver.cc
    ${CMAKE_CURRENT_SOURCE_DIR}/KWS/tensorflow/lite/micro/memory_helpers.cc
    ${CMAKE_CURRENT_SOURCE_DIR}/KWS/tensorflow/lite/micro/micro_allocator.cc
    ${CMAKE_CURRENT_SOURCE_DIR}/KWS/tensorflow/lite/micro/micro_error_reporter.cc
    ${CMAKE_CURRENT_SOURCE_DIR}/KWS/tensorflow/lite/micro/micro_interpreter.cc
    ${CMAKE_CURRENT_SOURCE_DIR}/KWS/tensorflow/lite/micro/micro_profiler.cc
    ${CMAKE_CURRENT_SOURCE_DIR}/KWS/tensorflow/lite/micro/micro_string.cc
    ${CMAKE_CURRENT_SOURCE_DIR}/KWS/tensorflow/lite/micro/micro_time.cc
    ${CMAKE_CURRENT_SOURCE_DIR}/KWS/tensorflow/lite/micro/micro_utils.cc
    ${CMAKE_CURRENT_SOURCE_DIR}/KWS/tensorflow/lite/micro/recording_micro_allocator.cc
    ${CMAKE_CURRENT_SOURCE_DIR}/KWS/tensorflow/lite/micro/recording_simple_memory_allocator.cc
    ${CMAKE_CURRENT_SOURCE_DIR}/KWS/tensorflow/lite/micro/simple_memory_allocator.cc
    ${CMAKE_CURRENT_SOURCE_DIR}/KWS/tensorflow/lite/micro/test_helpers.cc

    #micro kernels
    ${CMAKE_CURRENT_SOURCE_DIR}/KWS/tensorflow/lite/micro/kernels/activations.cc
    ${CMAKE_CURRENT_SOURCE_DIR}/KWS/tensorflow/lite/micro/kernels/add.cc
    ${CMAKE_CURRENT_SOURCE_DIR}/KWS/tensorflow/lite/micro/kernels/arg_min_max.cc
    ${CMAKE_CURRENT_SOURCE_DIR}/KWS/tensorflow/lite/micro/kernels/ceil.cc
    ${CMAKE_CURRENT_SOURCE_DIR}/KWS/tensorflow/lite/micro/kernels/circular_buffer.cc
    ${CMAKE_CURRENT_SOURCE_DIR}/KWS/tensorflow/lite/micro/kernels/comparisons.cc
    ${CMAKE_CURRENT_SOURCE_DIR}/KWS/tensorflow/lite/micro/kernels/concatenation.cc
    ${CMAKE_CURRENT_SOURCE_DIR}/KWS/tensorflow/lite/micro/kernels/conv.cc
    ${CMAKE_CURRENT_SOURCE_DIR}/KWS/tensorflow/lite/micro/kernels/depthwise_conv.cc
    ${CMAKE_CURRENT_SOURCE_DIR}/KWS/tensorflow/lite/micro/kernels/dequantize.cc
    ${CMAKE_CURRENT_SOURCE_DIR}/KWS/tensorflow/lite/micro/kernels/elementwise.cc
    ${CMAKE_CURRENT_SOURCE_DIR}/KWS/tensorflow/lite/micro/kernels/ethosu.cc
    ${CMAKE_CURRENT_SOURCE_DIR}/KWS/tensorflow/lite/micro/kernels/floor.cc
    ${CMAKE_CURRENT_SOURCE_DIR}/KWS/tensorflow/lite/micro/kernels/fully_connected.cc
    ${CMAKE_CURRENT_SOURCE_DIR}/KWS/tensorflow/lite/micro/kernels/hard_swish.cc
    ${CMAKE_CURRENT_SOURCE_DIR}/KWS/tensorflow/lite/micro/kernels/kernel_runner.cc
    ${CMAKE_CURRENT_SOURCE_DIR}/KWS/tensorflow/lite/micro/kernels/kernel_util.cc
    ${CMAKE_CURRENT_SOURCE_DIR}/KWS/tensorflow/lite/micro/kernels/l2norm.cc
    ${CMAKE_CURRENT_SOURCE_DIR}/KWS/tensorflow/lite/micro/kernels/logical.cc
    ${CMAKE_CURRENT_SOURCE_DIR}/KWS/tensorflow/lite/micro/kernels/logistic.cc
    ${CMAKE_CURRENT_SOURCE_DIR}/KWS/tensorflow/lite/micro/kernels/maximum_minimum.cc
    ${CMAKE_CURRENT_SOURCE_DIR}/KWS/tensorflow/lite/micro/kernels/mul.cc
    ${CMAKE_CURRENT_SOURCE_DIR}/KWS/tensorflow/lite/micro/kernels/neg.cc
    ${CMAKE_CURRENT_SOURCE_DIR}/KWS/tensorflow/lite/micro/kernels/pack.cc
    ${CMAKE_CURRENT_SOURCE_DIR}/KWS/tensorflow/lite/micro/kernels/pad.cc
    ${CMAKE_CURRENT_SOURCE_DIR}/KWS/tensorflow/lite/micro/kernels/pooling.cc
    ${CMAKE_CURRENT_SOURCE_DIR}/KWS/tensorflow/lite/micro/kernels/prelu.cc
    ${CMAKE_CURRENT_SOURCE_DIR}/KWS/tensorflow/lite/micro/kernels/quantize.cc
    ${CMAKE_CURRENT_SOURCE_DIR}/KWS/tensorflow/lite/micro/kernels/reduce.cc
    ${CMAKE_CURRENT_SOURCE_DIR}/KWS/tensorflow/lite/micro/kernels/reshape.cc
    ${CMAKE_CURRENT_SOURCE_DIR}/KWS/tensorflow/lite/micro/kernels/resize_nearest_neighbor.cc
    ${CMAKE_CURRENT_SOURCE_DIR}/KWS/tensorflow/lite/micro/kernels/round.cc
    ${CMAKE_CURRENT_SOURCE_DIR}/KWS/tensorflow/lite/micro/kernels/shape.cc
    ${CMAKE_CURRENT_SOURCE_DIR}/KWS/tensorflow/lite/micro/kernels/softmax.cc
    ${CMAKE_CURRENT_SOURCE_DIR}/KWS/tensorflow/lite/micro/kernels/split_v.cc
    ${CMAKE_CURRENT_SOURCE_DIR}/KWS/tensorflow/lite/micro/kernels/split.cc
    ${CMAKE_CURRENT_SOURCE_DIR}/KWS/tensorflow/lite/micro/kernels/strided_slice.cc
    ${CMAKE_CURRENT_SOURCE_DIR}/KWS/tensorflow/lite/micro/kernels/sub.cc
    ${CMAKE_CURRENT_SOURCE_DIR}/KWS/tensorflow/lite/micro/kernels/svdf.cc
    ${CMAKE_CURRENT_SOURCE_DIR}/KWS/tensorflow/lite/micro/kernels/tanh.cc
    ${CMAKE_CURRENT_SOURCE_DIR}/KWS/tensorflow/lite/micro/kernels/unpack.cc

    #micro mem planner
    ${CMAKE_CURRENT_SOURCE_DIR}/KWS/tensorflow/lite/micro/memory_planner/greedy_memory_planner.cc
    ${CMAKE_CURRENT_SOURCE_DIR}/KWS/tensorflow/lite/micro/memory_planner/linear_memory_planner.cc)

set(THIRD_PARTY_SOURCES
    ${CMAKE_CURRENT_SOURCE_DIR}/KWS/tensorflow/lite/micro/tools/make/downloads/kissfft/tools/kiss_fftr.c
    ${CMAKE_CURRENT_SOURCE_DIR}/KWS/tensorflow/lite/micro/tools/make/downloads/kissfft/kiss_fft.c)

set(PROJECT_SOURCES
    ${CMAKE_CURRENT_SOURCE_DIR}/Core/Src/main.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/Core/Src/audio_loopback.c
    ${CMAKE_CURRENT_SOURCE_DIR}/Core/Src/sdram_dma.c 
    ${CMAKE_CURRENT_SOURCE_DIR}/Core/Src/sdram.c 
    ${CMAKE_CURRENT_SOURCE_DIR}/KWS/Source/debug_log.c
    
    #${CMAKE_CURRENT_SOURCE_DIR}/KWS/Source/ds_cnn_quantized_data.cpp
    #${CMAKE_CURRENT_SOURCE_DIR}/KWS/Source/model_settings.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/KWS/Source/micro_features_micro_model_settings.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/KWS/Source/micro_features_model.cpp

    ${CMAKE_CURRENT_SOURCE_DIR}/KWS/Source/audio_provider.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/KWS/Source/command_responder.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/KWS/Source/feature_provider.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/KWS/Source/main_functions.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/KWS/Source/recognize_commands.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/KWS/Source/micro_features_micro_features_generator.cpp)

add_executable(${EXECUTABLE}
    ${STM32CUBEMX_SOURCES} 
    ${THIRD_PARTY_SOURCES}
    ${TFLITE_SOURCES}  
    ${PROJECT_SOURCES}
    ${STARTUP_SCRIPT})

target_compile_definitions(${EXECUTABLE} PRIVATE
    #$<$<CONFIG:Debug>:DEBUG>
    ${MCU_MODEL}
    USE_HAL_DRIVER)

target_include_directories(${EXECUTABLE} SYSTEM PRIVATE
    ${STM32CUBEMX_INCLUDE_DIRECTORIES})

    #mike
target_include_directories(${EXECUTABLE} SYSTEM PRIVATE
    ${THIRD_PARTY_INCLUDE_DIRECTORIES})

#mike
target_include_directories(${EXECUTABLE} SYSTEM PRIVATE
    ${TFLITE_INCLUDE_DIRECTORIES})


target_include_directories(${EXECUTABLE} PRIVATE
    ${PROJECT_INCLUDE_DIRECTORIES})

##################################################################################################

target_compile_options(${EXECUTABLE} PRIVATE
    ${CPU_PARAMETERS}
    -Wall
    -Wextra
    -Wpedantic
    -Wshadow
    -Wdouble-promotion
    -Wformat=2 -Wformat-truncation
    -Wundef
    -fno-common
    -Wno-unused-parameter
    -DTF_LITE_STATIC_MEMORY
    -DPORTABLE_OPTIMIZED
    #-fmessage-length=0
    #-Wno-missing-field-initializers
    #-fno-exceptions
    #-fomit-frame-pointer
    #-Os
    $<$<COMPILE_LANGUAGE:CXX>:
        -Wconversion # STM libraries!
        -Wno-volatile
        -Wold-style-cast
        -Wuseless-cast
        -Wsuggest-override>
        -DTF_LITE_STATIC_MEMORY
        -DPORTABLE_OPTIMIZED
        #-fno-builtin
        #-funsigned-char
        #-MMD
        #-Wvla
    $<$<CONFIG:Debug>:-Og -g3 -ggdb>
    $<$<CONFIG:Release>:-Og -g0>)

target_link_options(${EXECUTABLE} PRIVATE
    -T${MCU_LINKER_SCRIPT}
    ${CPU_PARAMETERS}
    -Wl,-Map=${CMAKE_PROJECT_NAME}.map
    -Wl,--gc-sections
    -static
    --specs=nosys.specs
    -Wl,--start-group
    -lc
    -lm
    -lstdc++
    -lsupc++
    -Wl,--end-group
    -Wl,--print-memory-usage)

# The last command can take a couple of seconds on larger project, usefull for debugging
add_custom_command(TARGET ${EXECUTABLE} POST_BUILD
    COMMAND ${CMAKE_SIZE} $<TARGET_FILE:${EXECUTABLE}>
    COMMAND ${CMAKE_OBJCOPY} -O ihex $<TARGET_FILE:${EXECUTABLE}> ${EXECUTABLE}.hex
    COMMAND ${CMAKE_OBJCOPY} -O binary $<TARGET_FILE:${EXECUTABLE}> ${EXECUTABLE}.bin)

if (${DUMP_ASM})
    add_custom_command(TARGET ${EXECUTABLE} POST_BUILD
        COMMAND ${CMAKE_OBJDUMP} -D $<TARGET_FILE:${EXECUTABLE}> > ${EXECUTABLE}.s)
endif()
