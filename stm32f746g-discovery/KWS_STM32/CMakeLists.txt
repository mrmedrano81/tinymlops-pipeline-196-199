# STM32 Minimal CMake project for C/C++ projects
cmake_minimum_required(VERSION 3.12)
##################################################################################################
# Set project name and source code folder location
project(KWS_STM32)

option(DUMP_ASM "Create full assembly of final executable" OFF)

# Set microcontroller information
# TODO (if time permits): 
#   -set BSP info for portability between stm32 mcu families 
#
set(MCU_FAMILY STM32F7xx)
set(MCU_MODEL STM32F746xx)
set(CPU_PARAMETERS
    -mcpu=cortex-m7
    -mthumb
    -mfpu=fpv4-sp-d16
    -mfloat-abi=hard)

set(STARTUP_SCRIPT ${CMAKE_CURRENT_SOURCE_DIR}/CubeMX/startup_stm32f746xx.s)
set(MCU_LINKER_SCRIPT ${CMAKE_CURRENT_SOURCE_DIR}/CubeMX/STM32F746NGHx_FLASH.ld)

##################################################################################################
set(EXECUTABLE ${CMAKE_PROJECT_NAME})

enable_language(C CXX ASM)
set(CMAKE_C_STANDARD 11)
set(CMAKE_C_STANDARD_REQUIRED ON)
set(CMAKE_C_EXTENSIONS ON)
set(CMAKE_CXX_STANDARD 20)
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
    ${CMAKE_CURRENT_SOURCE_DIR}/KWS/tensorflow
    ${CMAKE_CURRENT_SOURCE_DIR}/KWS/tensorflow/tensorflow
    ${CMAKE_CURRENT_SOURCE_DIR}/KWS/tensorflow/tensorflow/lite/experimental/microfrontend/lib
    ${CMAKE_CURRENT_SOURCE_DIR}/KWS/tensorflow/tensorflow/core/public
    ${CMAKE_CURRENT_SOURCE_DIR}/KWS/tensorflow/tensorflow/lite
    ${CMAKE_CURRENT_SOURCE_DIR}/KWS/tensorflow/tensorflow/lite/c
    ${CMAKE_CURRENT_SOURCE_DIR}/KWS/tensorflow/tensorflow/lite/core/api
    ${CMAKE_CURRENT_SOURCE_DIR}/KWS/tensorflow/tensorflow/lite/experimental/microfrontend/lib
    ${CMAKE_CURRENT_SOURCE_DIR}/KWS/tensorflow/tensorflow/lite/kernels
    ${CMAKE_CURRENT_SOURCE_DIR}/KWS/tensorflow/tensorflow/lite/kernels/internal
    ${CMAKE_CURRENT_SOURCE_DIR}/KWS/tensorflow/tensorflow/lite/kernels/internal/optimized
    ${CMAKE_CURRENT_SOURCE_DIR}/KWS/tensorflow/tensorflow/lite/kernels/internal/reference
    ${CMAKE_CURRENT_SOURCE_DIR}/KWS/tensorflow/tensorflow/lite/kernels/internal/reference/integer_ops
    ${CMAKE_CURRENT_SOURCE_DIR}/KWS/tensorflow/tensorflow/lite/micro
    ${CMAKE_CURRENT_SOURCE_DIR}/KWS/tensorflow/tensorflow/lite/micro/kernels
    ${CMAKE_CURRENT_SOURCE_DIR}/KWS/tensorflow/tensorflow/lite/micro/kernels/cmsis-nn
    ${CMAKE_CURRENT_SOURCE_DIR}/KWS/tensorflow/tensorflow/lite/micro/memory_planner
    ${CMAKE_CURRENT_SOURCE_DIR}/KWS/tensorflow/tensorflow/lite/micro/testing
    ${CMAKE_CURRENT_SOURCE_DIR}/KWS/tensorflow/tensorflow/lite/schema)

set(CMSIS_INCLUDE_DIRECTORIES
    ${CMAKE_CURRENT_SOURCE_DIR}/KWS/tensorflow/tensorflow/lite/micro/tools
    ${CMAKE_CURRENT_SOURCE_DIR}/KWS/tensorflow/tensorflow/lite/micro/tools/make
    ${CMAKE_CURRENT_SOURCE_DIR}/KWS/tensorflow/tensorflow/lite/micro/tools/make/downloads
    ${CMAKE_CURRENT_SOURCE_DIR}/KWS/tensorflow/tensorflow/lite/micro/tools/make/downloads/cmsis
    ${CMAKE_CURRENT_SOURCE_DIR}/KWS/tensorflow/tensorflow/lite/micro/tools/make/downloads/cmsis/CMSIS
    ${CMAKE_CURRENT_SOURCE_DIR}/KWS/tensorflow/tensorflow/lite/micro/tools/make/downloads/cmsis/CMSIS/Core
    ${CMAKE_CURRENT_SOURCE_DIR}/KWS/tensorflow/tensorflow/lite/micro/tools/make/downloads/cmsis/CMSIS/Core/Include
    ${CMAKE_CURRENT_SOURCE_DIR}/KWS/tensorflow/tensorflow/lite/micro/tools/make/downloads/cmsis/CMSIS/DSP
    ${CMAKE_CURRENT_SOURCE_DIR}/KWS/tensorflow/tensorflow/lite/micro/tools/make/downloads/cmsis/CMSIS/DSP/Include
    ${CMAKE_CURRENT_SOURCE_DIR}/KWS/tensorflow/tensorflow/lite/micro/tools/make/downloads/cmsis/CMSIS/DSP/Include/dsp
    ${CMAKE_CURRENT_SOURCE_DIR}/KWS/tensorflow/tensorflow/lite/micro/tools/make/downloads/cmsis/CMSIS/NN
    ${CMAKE_CURRENT_SOURCE_DIR}/KWS/tensorflow/tensorflow/lite/micro/tools/make/downloads/cmsis/CMSIS/NN/Include)

set(THIRD_PARTY_INCLUDE_DIRECTORIES
    ${CMAKE_CURRENT_SOURCE_DIR}/KWS/tensorflow/third_party
    ${CMAKE_CURRENT_SOURCE_DIR}/KWS/tensorflow/third_party/flatbuffers/include
    ${CMAKE_CURRENT_SOURCE_DIR}/KWS/tensorflow/third_party/flatbuffers/include/flatbuffers
    ${CMAKE_CURRENT_SOURCE_DIR}/KWS/tensorflow/third_party/gemmlowp
    ${CMAKE_CURRENT_SOURCE_DIR}/KWS/tensorflow/third_party/kissfft
    ${CMAKE_CURRENT_SOURCE_DIR}/KWS/tensorflow/third_party/ruy)

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
    ${CMAKE_CURRENT_SOURCE_DIR}/Drivers/BSP/Components/ft5336/ft5336.c
    ${CMAKE_CURRENT_SOURCE_DIR}/Drivers/BSP/Components/ov9655/ov9655.c
    ${CMAKE_CURRENT_SOURCE_DIR}/Drivers/BSP/Components/wm8994/wm8994.c
    ${CMAKE_CURRENT_SOURCE_DIR}/Drivers/BSP/STM32746G-Discovery/stm32746g_discovery_audio.c
    ${CMAKE_CURRENT_SOURCE_DIR}/Drivers/BSP/STM32746G-Discovery/stm32746g_discovery_camera.c
    ${CMAKE_CURRENT_SOURCE_DIR}/Drivers/BSP/STM32746G-Discovery/stm32746g_discovery_eeprom.c
    ${CMAKE_CURRENT_SOURCE_DIR}/Drivers/BSP/STM32746G-Discovery/stm32746g_discovery_lcd.c
    ${CMAKE_CURRENT_SOURCE_DIR}/Drivers/BSP/STM32746G-Discovery/stm32746g_discovery_qspi.c
    ${CMAKE_CURRENT_SOURCE_DIR}/Drivers/BSP/STM32746G-Discovery/stm32746g_discovery_sd.c
    ${CMAKE_CURRENT_SOURCE_DIR}/Drivers/BSP/STM32746G-Discovery/stm32746g_discovery_sdram.c
    ${CMAKE_CURRENT_SOURCE_DIR}/Drivers/BSP/STM32746G-Discovery/stm32746g_discovery_ts.c
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
    ${CMAKE_CURRENT_SOURCE_DIR}/KWS/tensorflow/tensorflow/lite/c/common.c
    ${CMAKE_CURRENT_SOURCE_DIR}/KWS/tensorflow/tensorflow/lite/core/api/error_reporter.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/KWS/tensorflow/tensorflow/lite/core/api/flatbuffer_conversions.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/KWS/tensorflow/tensorflow/lite/core/api/op_resolver.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/KWS/tensorflow/tensorflow/lite/core/api/tensor_utils.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/KWS/tensorflow/tensorflow/lite/experimental/microfrontend/lib/fft_util.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/KWS/tensorflow/tensorflow/lite/experimental/microfrontend/lib/fft.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/KWS/tensorflow/tensorflow/lite/experimental/microfrontend/lib/filterbank_util.c
    ${CMAKE_CURRENT_SOURCE_DIR}/KWS/tensorflow/tensorflow/lite/experimental/microfrontend/lib/filterbank.c
    ${CMAKE_CURRENT_SOURCE_DIR}/KWS/tensorflow/tensorflow/lite/experimental/microfrontend/lib/frontend_util.c
    ${CMAKE_CURRENT_SOURCE_DIR}/KWS/tensorflow/tensorflow/lite/experimental/microfrontend/lib/frontend.c
    ${CMAKE_CURRENT_SOURCE_DIR}/KWS/tensorflow/tensorflow/lite/experimental/microfrontend/lib/log_lut.c
    ${CMAKE_CURRENT_SOURCE_DIR}/KWS/tensorflow/tensorflow/lite/experimental/microfrontend/lib/log_scale_util.c
    ${CMAKE_CURRENT_SOURCE_DIR}/KWS/tensorflow/tensorflow/lite/experimental/microfrontend/lib/log_scale.c
    ${CMAKE_CURRENT_SOURCE_DIR}/KWS/tensorflow/tensorflow/lite/experimental/microfrontend/lib/noise_reduction_util.c
    ${CMAKE_CURRENT_SOURCE_DIR}/KWS/tensorflow/tensorflow/lite/experimental/microfrontend/lib/noise_reduction.c
    ${CMAKE_CURRENT_SOURCE_DIR}/KWS/tensorflow/tensorflow/lite/experimental/microfrontend/lib/pcan_gain_control_util.c
    ${CMAKE_CURRENT_SOURCE_DIR}/KWS/tensorflow/tensorflow/lite/experimental/microfrontend/lib/pcan_gain_control.c
    ${CMAKE_CURRENT_SOURCE_DIR}/KWS/tensorflow/tensorflow/lite/experimental/microfrontend/lib/window_util.c
    ${CMAKE_CURRENT_SOURCE_DIR}/KWS/tensorflow/tensorflow/lite/experimental/microfrontend/lib/window.c
    ${CMAKE_CURRENT_SOURCE_DIR}/KWS/tensorflow/tensorflow/lite/kernels/kernel_util.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/KWS/tensorflow/tensorflow/lite/kernels/internal/quantization_util.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/KWS/tensorflow/tensorflow/lite/micro/all_ops_resolver.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/KWS/tensorflow/tensorflow/lite/micro/memory_helpers.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/KWS/tensorflow/tensorflow/lite/micro/micro_allocator.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/KWS/tensorflow/tensorflow/lite/micro/micro_error_reporter.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/KWS/tensorflow/tensorflow/lite/micro/micro_interpreter.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/KWS/tensorflow/tensorflow/lite/micro/micro_profiler.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/KWS/tensorflow/tensorflow/lite/micro/micro_string.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/KWS/tensorflow/tensorflow/lite/micro/micro_time.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/KWS/tensorflow/tensorflow/lite/micro/micro_utils.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/KWS/tensorflow/tensorflow/lite/micro/recording_micro_allocator.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/KWS/tensorflow/tensorflow/lite/micro/recording_simple_memory_allocator.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/KWS/tensorflow/tensorflow/lite/micro/simple_memory_allocator.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/KWS/tensorflow/tensorflow/lite/micro/test_helpers.cpp
    #${CMAKE_CURRENT_SOURCE_DIR}/KWS/tensorflow/tensorflow/lite/micro/kernels/cmsis-nn/add.cpp
    #${CMAKE_CURRENT_SOURCE_DIR}/KWS/tensorflow/tensorflow/lite/micro/kernels/cmsis-nn/conv.cpp
    #${CMAKE_CURRENT_SOURCE_DIR}/KWS/tensorflow/tensorflow/lite/micro/kernels/cmsis-nn/depthwise_conv.cpp
    #${CMAKE_CURRENT_SOURCE_DIR}/KWS/tensorflow/tensorflow/lite/micro/kernels/cmsis-nn/fully_connected.cpp
    #${CMAKE_CURRENT_SOURCE_DIR}/KWS/tensorflow/tensorflow/lite/micro/kernels/cmsis-nn/mul.cpp
    #${CMAKE_CURRENT_SOURCE_DIR}/KWS/tensorflow/tensorflow/lite/micro/kernels/cmsis-nn/pooling.cpp
    #${CMAKE_CURRENT_SOURCE_DIR}/KWS/tensorflow/tensorflow/lite/micro/kernels/cmsis-nn/softmax.cpp
    #${CMAKE_CURRENT_SOURCE_DIR}/KWS/tensorflow/tensorflow/lite/micro/kernels/cmsis-nn/svdf.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/KWS/tensorflow/tensorflow/lite/micro/kernels/activations.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/KWS/tensorflow/tensorflow/lite/micro/kernels/arg_min_max.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/KWS/tensorflow/tensorflow/lite/micro/kernels/ceil.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/KWS/tensorflow/tensorflow/lite/micro/kernels/circular_buffer.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/KWS/tensorflow/tensorflow/lite/micro/kernels/comparisons.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/KWS/tensorflow/tensorflow/lite/micro/kernels/concatenation.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/KWS/tensorflow/tensorflow/lite/micro/kernels/conv_test_common.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/KWS/tensorflow/tensorflow/lite/micro/kernels/dequantize.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/KWS/tensorflow/tensorflow/lite/micro/kernels/detection_postprocess.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/KWS/tensorflow/tensorflow/lite/micro/kernels/elementwise.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/KWS/tensorflow/tensorflow/lite/micro/kernels/ethosu.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/KWS/tensorflow/tensorflow/lite/micro/kernels/flexbuffers_generated_data.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/KWS/tensorflow/tensorflow/lite/micro/kernels/floor.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/KWS/tensorflow/tensorflow/lite/micro/kernels/hard_swish.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/KWS/tensorflow/tensorflow/lite/micro/kernels/kernel_runner.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/KWS/tensorflow/tensorflow/lite/micro/kernels/kernel_util_full.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/KWS/tensorflow/tensorflow/lite/micro/kernels/l2norm.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/KWS/tensorflow/tensorflow/lite/micro/kernels/logical.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/KWS/tensorflow/tensorflow/lite/micro/kernels/logistic.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/KWS/tensorflow/tensorflow/lite/micro/kernels/maximum_minimum.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/KWS/tensorflow/tensorflow/lite/micro/kernels/neg.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/KWS/tensorflow/tensorflow/lite/micro/kernels/pack.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/KWS/tensorflow/tensorflow/lite/micro/kernels/pad.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/KWS/tensorflow/tensorflow/lite/micro/kernels/prelu.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/KWS/tensorflow/tensorflow/lite/micro/kernels/quantize_common.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/KWS/tensorflow/tensorflow/lite/micro/kernels/quantize.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/KWS/tensorflow/tensorflow/lite/micro/kernels/reduce.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/KWS/tensorflow/tensorflow/lite/micro/kernels/reshape.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/KWS/tensorflow/tensorflow/lite/micro/kernels/resize_nearest_neighbor.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/KWS/tensorflow/tensorflow/lite/micro/kernels/round.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/KWS/tensorflow/tensorflow/lite/micro/kernels/shape.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/KWS/tensorflow/tensorflow/lite/micro/kernels/split_v.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/KWS/tensorflow/tensorflow/lite/micro/kernels/split.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/KWS/tensorflow/tensorflow/lite/micro/kernels/strided_slice.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/KWS/tensorflow/tensorflow/lite/micro/kernels/sub.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/KWS/tensorflow/tensorflow/lite/micro/kernels/svdf_common.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/KWS/tensorflow/tensorflow/lite/micro/kernels/tanh.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/KWS/tensorflow/tensorflow/lite/micro/kernels/transpose_conv.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/KWS/tensorflow/tensorflow/lite/micro/kernels/unpack.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/KWS/tensorflow/tensorflow/lite/micro/memory_planner/greedy_memory_planner.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/KWS/tensorflow/tensorflow/lite/micro/memory_planner/linear_memory_planner.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/KWS/tensorflow/tensorflow/lite/micro/testing/test_conv_model.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/KWS/tensorflow/tensorflow/lite/schema/schema_utils.cpp)

set(CMSIS_SOURCES
    ${CMAKE_CURRENT_SOURCE_DIR}/KWS/tensorflow/tensorflow/lite/micro/tools/make/downloads/cmsis/CMSIS/NN/Source/ActivationFunctions/arm_nn_activations_q7.c
    ${CMAKE_CURRENT_SOURCE_DIR}/KWS/tensorflow/tensorflow/lite/micro/tools/make/downloads/cmsis/CMSIS/NN/Source/ActivationFunctions/arm_nn_activations_q15.c
    ${CMAKE_CURRENT_SOURCE_DIR}/KWS/tensorflow/tensorflow/lite/micro/tools/make/downloads/cmsis/CMSIS/NN/Source/ActivationFunctions/arm_relu_q7.c
    ${CMAKE_CURRENT_SOURCE_DIR}/KWS/tensorflow/tensorflow/lite/micro/tools/make/downloads/cmsis/CMSIS/NN/Source/ActivationFunctions/arm_relu_q15.c
    ${CMAKE_CURRENT_SOURCE_DIR}/KWS/tensorflow/tensorflow/lite/micro/tools/make/downloads/cmsis/CMSIS/NN/Source/ActivationFunctions/arm_relu6_s8.c
    ${CMAKE_CURRENT_SOURCE_DIR}/KWS/tensorflow/tensorflow/lite/micro/tools/make/downloads/cmsis/CMSIS/NN/Source/BasicMathFunctions/arm_elementwise_add_s8.c
    ${CMAKE_CURRENT_SOURCE_DIR}/KWS/tensorflow/tensorflow/lite/micro/tools/make/downloads/cmsis/CMSIS/NN/Source/BasicMathFunctions/arm_elementwise_mul_s8.c
    ${CMAKE_CURRENT_SOURCE_DIR}/KWS/tensorflow/tensorflow/lite/micro/tools/make/downloads/cmsis/CMSIS/NN/Source/ConcatenationFunctions/arm_concatenation_s8_w.c
    ${CMAKE_CURRENT_SOURCE_DIR}/KWS/tensorflow/tensorflow/lite/micro/tools/make/downloads/cmsis/CMSIS/NN/Source/ConcatenationFunctions/arm_concatenation_s8_x.c
    ${CMAKE_CURRENT_SOURCE_DIR}/KWS/tensorflow/tensorflow/lite/micro/tools/make/downloads/cmsis/CMSIS/NN/Source/ConcatenationFunctions/arm_concatenation_s8_y.c
    ${CMAKE_CURRENT_SOURCE_DIR}/KWS/tensorflow/tensorflow/lite/micro/tools/make/downloads/cmsis/CMSIS/NN/Source/ConcatenationFunctions/arm_concatenation_s8_z.c
    ${CMAKE_CURRENT_SOURCE_DIR}/KWS/tensorflow/tensorflow/lite/micro/tools/make/downloads/cmsis/CMSIS/NN/Source/ConvolutionFunctions/arm_convolve_1_x_n_s8.c
    ${CMAKE_CURRENT_SOURCE_DIR}/KWS/tensorflow/tensorflow/lite/micro/tools/make/downloads/cmsis/CMSIS/NN/Source/ConvolutionFunctions/arm_convolve_1x1_HWC_q7_fast_nonsquare.c
    ${CMAKE_CURRENT_SOURCE_DIR}/KWS/tensorflow/tensorflow/lite/micro/tools/make/downloads/cmsis/CMSIS/NN/Source/ConvolutionFunctions/arm_convolve_1x1_s8_fast.c
    ${CMAKE_CURRENT_SOURCE_DIR}/KWS/tensorflow/tensorflow/lite/micro/tools/make/downloads/cmsis/CMSIS/NN/Source/ConvolutionFunctions/arm_convolve_HWC_q7_basic_nonsquare.c
    ${CMAKE_CURRENT_SOURCE_DIR}/KWS/tensorflow/tensorflow/lite/micro/tools/make/downloads/cmsis/CMSIS/NN/Source/ConvolutionFunctions/arm_convolve_HWC_q7_basic.c
    ${CMAKE_CURRENT_SOURCE_DIR}/KWS/tensorflow/tensorflow/lite/micro/tools/make/downloads/cmsis/CMSIS/NN/Source/ConvolutionFunctions/arm_convolve_HWC_q7_fast_nonsquare.c
    ${CMAKE_CURRENT_SOURCE_DIR}/KWS/tensorflow/tensorflow/lite/micro/tools/make/downloads/cmsis/CMSIS/NN/Source/ConvolutionFunctions/arm_convolve_HWC_q7_fast.c
    ${CMAKE_CURRENT_SOURCE_DIR}/KWS/tensorflow/tensorflow/lite/micro/tools/make/downloads/cmsis/CMSIS/NN/Source/ConvolutionFunctions/arm_convolve_HWC_q7_RGB.c
    ${CMAKE_CURRENT_SOURCE_DIR}/KWS/tensorflow/tensorflow/lite/micro/tools/make/downloads/cmsis/CMSIS/NN/Source/ConvolutionFunctions/arm_convolve_HWC_q15_basic.c
    ${CMAKE_CURRENT_SOURCE_DIR}/KWS/tensorflow/tensorflow/lite/micro/tools/make/downloads/cmsis/CMSIS/NN/Source/ConvolutionFunctions/arm_convolve_HWC_q15_fast_nonsquare.c
    ${CMAKE_CURRENT_SOURCE_DIR}/KWS/tensorflow/tensorflow/lite/micro/tools/make/downloads/cmsis/CMSIS/NN/Source/ConvolutionFunctions/arm_convolve_HWC_q15_fast.c
    ${CMAKE_CURRENT_SOURCE_DIR}/KWS/tensorflow/tensorflow/lite/micro/tools/make/downloads/cmsis/CMSIS/NN/Source/ConvolutionFunctions/arm_convolve_s8.c
    ${CMAKE_CURRENT_SOURCE_DIR}/KWS/tensorflow/tensorflow/lite/micro/tools/make/downloads/cmsis/CMSIS/NN/Source/ConvolutionFunctions/arm_convolve_wrapper_s8.c
    ${CMAKE_CURRENT_SOURCE_DIR}/KWS/tensorflow/tensorflow/lite/micro/tools/make/downloads/cmsis/CMSIS/NN/Source/ConvolutionFunctions/arm_depthwise_conv_3x3_s8.c
    ${CMAKE_CURRENT_SOURCE_DIR}/KWS/tensorflow/tensorflow/lite/micro/tools/make/downloads/cmsis/CMSIS/NN/Source/ConvolutionFunctions/arm_depthwise_conv_s8_opt.c
    ${CMAKE_CURRENT_SOURCE_DIR}/KWS/tensorflow/tensorflow/lite/micro/tools/make/downloads/cmsis/CMSIS/NN/Source/ConvolutionFunctions/arm_depthwise_conv_s8.c
    ${CMAKE_CURRENT_SOURCE_DIR}/KWS/tensorflow/tensorflow/lite/micro/tools/make/downloads/cmsis/CMSIS/NN/Source/ConvolutionFunctions/arm_depthwise_conv_u8_basic_ver1.c
    ${CMAKE_CURRENT_SOURCE_DIR}/KWS/tensorflow/tensorflow/lite/micro/tools/make/downloads/cmsis/CMSIS/NN/Source/ConvolutionFunctions/arm_depthwise_conv_wrapper_s8.c
    ${CMAKE_CURRENT_SOURCE_DIR}/KWS/tensorflow/tensorflow/lite/micro/tools/make/downloads/cmsis/CMSIS/NN/Source/ConvolutionFunctions/arm_depthwise_separable_conv_HWC_q7_nonsquare.c
    ${CMAKE_CURRENT_SOURCE_DIR}/KWS/tensorflow/tensorflow/lite/micro/tools/make/downloads/cmsis/CMSIS/NN/Source/ConvolutionFunctions/arm_depthwise_separable_conv_HWC_q7.c
    ${CMAKE_CURRENT_SOURCE_DIR}/KWS/tensorflow/tensorflow/lite/micro/tools/make/downloads/cmsis/CMSIS/NN/Source/ConvolutionFunctions/arm_nn_depthwise_conv_s8_core.c
    ${CMAKE_CURRENT_SOURCE_DIR}/KWS/tensorflow/tensorflow/lite/micro/tools/make/downloads/cmsis/CMSIS/NN/Source/ConvolutionFunctions/arm_nn_mat_mult_kernel_q7_q15_reordered.c
    ${CMAKE_CURRENT_SOURCE_DIR}/KWS/tensorflow/tensorflow/lite/micro/tools/make/downloads/cmsis/CMSIS/NN/Source/ConvolutionFunctions/arm_nn_mat_mult_kernel_q7_q15.c
    ${CMAKE_CURRENT_SOURCE_DIR}/KWS/tensorflow/tensorflow/lite/micro/tools/make/downloads/cmsis/CMSIS/NN/Source/ConvolutionFunctions/arm_nn_mat_mult_kernel_s8_s16_reordered.c
    ${CMAKE_CURRENT_SOURCE_DIR}/KWS/tensorflow/tensorflow/lite/micro/tools/make/downloads/cmsis/CMSIS/NN/Source/ConvolutionFunctions/arm_nn_mat_mult_kernel_s8_s16.c
    ${CMAKE_CURRENT_SOURCE_DIR}/KWS/tensorflow/tensorflow/lite/micro/tools/make/downloads/cmsis/CMSIS/NN/Source/ConvolutionFunctions/arm_nn_mat_mult_s8.c
    ${CMAKE_CURRENT_SOURCE_DIR}/KWS/tensorflow/tensorflow/lite/micro/tools/make/downloads/cmsis/CMSIS/NN/Source/FullyConnectedFunctions/arm_fully_connected_mat_q7_vec_q15_opt.c
    ${CMAKE_CURRENT_SOURCE_DIR}/KWS/tensorflow/tensorflow/lite/micro/tools/make/downloads/cmsis/CMSIS/NN/Source/FullyConnectedFunctions/arm_fully_connected_mat_q7_vec_q15.c
    ${CMAKE_CURRENT_SOURCE_DIR}/KWS/tensorflow/tensorflow/lite/micro/tools/make/downloads/cmsis/CMSIS/NN/Source/FullyConnectedFunctions/arm_fully_connected_q7_opt.c
    ${CMAKE_CURRENT_SOURCE_DIR}/KWS/tensorflow/tensorflow/lite/micro/tools/make/downloads/cmsis/CMSIS/NN/Source/FullyConnectedFunctions/arm_fully_connected_q7.c
    ${CMAKE_CURRENT_SOURCE_DIR}/KWS/tensorflow/tensorflow/lite/micro/tools/make/downloads/cmsis/CMSIS/NN/Source/FullyConnectedFunctions/arm_fully_connected_q15_opt.c
    ${CMAKE_CURRENT_SOURCE_DIR}/KWS/tensorflow/tensorflow/lite/micro/tools/make/downloads/cmsis/CMSIS/NN/Source/FullyConnectedFunctions/arm_fully_connected_q15.c
    ${CMAKE_CURRENT_SOURCE_DIR}/KWS/tensorflow/tensorflow/lite/micro/tools/make/downloads/cmsis/CMSIS/NN/Source/FullyConnectedFunctions/arm_fully_connected_s8.c
    ${CMAKE_CURRENT_SOURCE_DIR}/KWS/tensorflow/tensorflow/lite/micro/tools/make/downloads/cmsis/CMSIS/NN/Source/NNSupportFunctions/arm_nn_accumulate_q7_to_q15.c
    ${CMAKE_CURRENT_SOURCE_DIR}/KWS/tensorflow/tensorflow/lite/micro/tools/make/downloads/cmsis/CMSIS/NN/Source/NNSupportFunctions/arm_nn_add_q7.c
    ${CMAKE_CURRENT_SOURCE_DIR}/KWS/tensorflow/tensorflow/lite/micro/tools/make/downloads/cmsis/CMSIS/NN/Source/NNSupportFunctions/arm_nn_depthwise_conv_nt_t_padded_s8.c
    ${CMAKE_CURRENT_SOURCE_DIR}/KWS/tensorflow/tensorflow/lite/micro/tools/make/downloads/cmsis/CMSIS/NN/Source/NNSupportFunctions/arm_nn_depthwise_conv_nt_t_s8.c
    ${CMAKE_CURRENT_SOURCE_DIR}/KWS/tensorflow/tensorflow/lite/micro/tools/make/downloads/cmsis/CMSIS/NN/Source/NNSupportFunctions/arm_nn_mat_mul_core_1x_s8.c
    ${CMAKE_CURRENT_SOURCE_DIR}/KWS/tensorflow/tensorflow/lite/micro/tools/make/downloads/cmsis/CMSIS/NN/Source/NNSupportFunctions/arm_nn_mat_mul_core_4x_s8.c
    ${CMAKE_CURRENT_SOURCE_DIR}/KWS/tensorflow/tensorflow/lite/micro/tools/make/downloads/cmsis/CMSIS/NN/Source/NNSupportFunctions/arm_nn_mat_mult_nt_t_s8.c
    ${CMAKE_CURRENT_SOURCE_DIR}/KWS/tensorflow/tensorflow/lite/micro/tools/make/downloads/cmsis/CMSIS/NN/Source/NNSupportFunctions/arm_nn_mult_q7.c
    ${CMAKE_CURRENT_SOURCE_DIR}/KWS/tensorflow/tensorflow/lite/micro/tools/make/downloads/cmsis/CMSIS/NN/Source/NNSupportFunctions/arm_nn_mult_q15.c
    ${CMAKE_CURRENT_SOURCE_DIR}/KWS/tensorflow/tensorflow/lite/micro/tools/make/downloads/cmsis/CMSIS/NN/Source/NNSupportFunctions/arm_nn_vec_mat_mult_t_s8.c
    ${CMAKE_CURRENT_SOURCE_DIR}/KWS/tensorflow/tensorflow/lite/micro/tools/make/downloads/cmsis/CMSIS/NN/Source/NNSupportFunctions/arm_nntables.c
    ${CMAKE_CURRENT_SOURCE_DIR}/KWS/tensorflow/tensorflow/lite/micro/tools/make/downloads/cmsis/CMSIS/NN/Source/NNSupportFunctions/arm_q7_to_q15_no_shift.c
    ${CMAKE_CURRENT_SOURCE_DIR}/KWS/tensorflow/tensorflow/lite/micro/tools/make/downloads/cmsis/CMSIS/NN/Source/NNSupportFunctions/arm_q7_to_q15_reordered_no_shift.c
    ${CMAKE_CURRENT_SOURCE_DIR}/KWS/tensorflow/tensorflow/lite/micro/tools/make/downloads/cmsis/CMSIS/NN/Source/NNSupportFunctions/arm_q7_to_q15_reordered_with_offset.c
    ${CMAKE_CURRENT_SOURCE_DIR}/KWS/tensorflow/tensorflow/lite/micro/tools/make/downloads/cmsis/CMSIS/NN/Source/NNSupportFunctions/arm_q7_to_q15_with_offset.c
    ${CMAKE_CURRENT_SOURCE_DIR}/KWS/tensorflow/tensorflow/lite/micro/tools/make/downloads/cmsis/CMSIS/NN/Source/PoolingFunctions/arm_avgpool_s8.c
    ${CMAKE_CURRENT_SOURCE_DIR}/KWS/tensorflow/tensorflow/lite/micro/tools/make/downloads/cmsis/CMSIS/NN/Source/PoolingFunctions/arm_max_pool_s8.c
    ${CMAKE_CURRENT_SOURCE_DIR}/KWS/tensorflow/tensorflow/lite/micro/tools/make/downloads/cmsis/CMSIS/NN/Source/PoolingFunctions/arm_pool_q7_HWC.c
    ${CMAKE_CURRENT_SOURCE_DIR}/KWS/tensorflow/tensorflow/lite/micro/tools/make/downloads/cmsis/CMSIS/NN/Source/ReshapeFunctions/arm_reshape_s8.c
    ${CMAKE_CURRENT_SOURCE_DIR}/KWS/tensorflow/tensorflow/lite/micro/tools/make/downloads/cmsis/CMSIS/NN/Source/SoftmaxFunctions/arm_softmax_q7.c
    ${CMAKE_CURRENT_SOURCE_DIR}/KWS/tensorflow/tensorflow/lite/micro/tools/make/downloads/cmsis/CMSIS/NN/Source/SoftmaxFunctions/arm_softmax_q15.c
    ${CMAKE_CURRENT_SOURCE_DIR}/KWS/tensorflow/tensorflow/lite/micro/tools/make/downloads/cmsis/CMSIS/NN/Source/SoftmaxFunctions/arm_softmax_s8.c
    ${CMAKE_CURRENT_SOURCE_DIR}/KWS/tensorflow/tensorflow/lite/micro/tools/make/downloads/cmsis/CMSIS/NN/Source/SoftmaxFunctions/arm_softmax_u8.c
    ${CMAKE_CURRENT_SOURCE_DIR}/KWS/tensorflow/tensorflow/lite/micro/tools/make/downloads/cmsis/CMSIS/NN/Source/SoftmaxFunctions/arm_softmax_with_batch_q7.c
    ${CMAKE_CURRENT_SOURCE_DIR}/KWS/tensorflow/tensorflow/lite/micro/tools/make/downloads/cmsis/CMSIS/NN/Source/SVDFunctions/arm_svdf_s8.c
)

set(THIRD_PARTY_SOURCES
    ${CMAKE_CURRENT_SOURCE_DIR}/KWS/tensorflow/third_party/kissfft/tools/kiss_fftr.c
    ${CMAKE_CURRENT_SOURCE_DIR}/KWS/tensorflow/third_party/kissfft/kiss_fft.c)

set(PROJECT_SOURCES
    ${CMAKE_CURRENT_SOURCE_DIR}/Core/Src/main.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/Core/Src/audio_loopback.c
    ${CMAKE_CURRENT_SOURCE_DIR}/Core/Src/sdram_dma.c 
    ${CMAKE_CURRENT_SOURCE_DIR}/Core/Src/sdram.c 
    ${CMAKE_CURRENT_SOURCE_DIR}/KWS/Source/debug_log.c
    ${CMAKE_CURRENT_SOURCE_DIR}/KWS/Source/ds_cnn_quantized_data.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/KWS/Source/model_settings.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/KWS/Source/audio_provider.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/KWS/Source/command_responder.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/KWS/Source/feature_provider.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/KWS/Source/main_functions.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/KWS/Source/recognize_commands.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/KWS/Source/micro_features_micro_features_generator.cpp)
    
    #${CMAKE_CURRENT_SOURCE_DIR}/KWS/Source/micro_features_micro_model_settings.cpp
    #${CMAKE_CURRENT_SOURCE_DIR}/KWS/Source/micro_features_model.cpp)

add_executable(${EXECUTABLE}
    ${STM32CUBEMX_SOURCES} 
    ${TFLITE_SOURCES}
    ${CMSIS_SOURCES}
    ${THIRD_PARTY_SOURCES} 
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
    ${TFLITE_INCLUDE_DIRECTORIES})

target_include_directories(${EXECUTABLE} SYSTEM PRIVATE
    ${CMSIS_INCLUDE_DIRECTORIES})

#mike
target_include_directories(${EXECUTABLE} SYSTEM PRIVATE
    ${THIRD_PARTY_INCLUDE_DIRECTORIES})

target_include_directories(${EXECUTABLE} PRIVATE
    ${PROJECT_INCLUDE_DIRECTORIES})

target_link_directories(${EXECUTABLE} PUBLIC
    ${STM32CUBEMX_INCLUDE_DIRECTORIES})

#mike
target_link_directories(${EXECUTABLE} PUBLIC
    ${TFLITE_INCLUDE_DIRECTORIES})

target_link_directories(${EXECUTABLE} PUBLIC
    ${CMSIS_INCLUDE_DIRECTORIES})

#mike
target_link_directories(${EXECUTABLE} PUBLIC
    ${THIRD_PARTY_INCLUDE_DIRECTORIES})

target_link_directories(${EXECUTABLE} PUBLIC
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
    -fmessage-length=0
    -ffunction-sections
    -fdata-sections
    $<$<COMPILE_LANGUAGE:CXX>:
        -Wconversion # STM libraries!
        -Wno-volatile
        -Wold-style-cast
        -Wuseless-cast
        -Wsuggest-override>
    $<$<CONFIG:Debug>:-Og -g3 -ggdb>
    $<$<CONFIG:Release>:-Og -g0>)

target_link_options(${EXECUTABLE} PRIVATE
    -T${MCU_LINKER_SCRIPT}
    ${CPU_PARAMETERS}
    -Wl,-Map=${CMAKE_PROJECT_NAME}.map
    #--specs=nosys.specs
    -Wl,--start-group
    -lc
    -lm
    -lstdc++
    -Wl,--verbose
    -Wl,--trace,--trace
    -Wl,--trace-symbol,symbol_name
    -Wl,-Map=output.map
    -Wl,--cref
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
