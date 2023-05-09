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
    #${CMAKE_CURRENT_SOURCE_DIR}/KWS/tensorflow/tensorflow/lite
    ${CMAKE_CURRENT_SOURCE_DIR}/KWS/tensorflow/tensorflow/lite/c
    ${CMAKE_CURRENT_SOURCE_DIR}/KWS/tensorflow/tensorflow/lite/core
    ${CMAKE_CURRENT_SOURCE_DIR}/KWS/tensorflow/tensorflow/lite/core/api
    ${CMAKE_CURRENT_SOURCE_DIR}/KWS/tensorflow/tensorflow/lite/core/c
    ${CMAKE_CURRENT_SOURCE_DIR}/KWS/tensorflow/tensorflow/lite/experimental
    ${CMAKE_CURRENT_SOURCE_DIR}/KWS/tensorflow/tensorflow/lite/experimental/microfrontend
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
    ${CMAKE_CURRENT_SOURCE_DIR}/KWS/tensorflow/tensorflow/lite/micro/tflite_bridge
    ${CMAKE_CURRENT_SOURCE_DIR}/KWS/tensorflow/tensorflow/lite/micro/tools/make/downloads/cmsis_nn/Include
    ${CMAKE_CURRENT_SOURCE_DIR}/KWS/tensorflow/tensorflow/lite/micro/tools/make/downloads/cmsis_nn/Include/Internal
    ${CMAKE_CURRENT_SOURCE_DIR}/KWS/tensorflow/tensorflow/lite/schema)

set(THIRD_PARTY_INCLUDE_DIRECTORIES
    ${CMAKE_CURRENT_SOURCE_DIR}/KWS/tensorflow/third_party
    ${CMAKE_CURRENT_SOURCE_DIR}/KWS/tensorflow/third_party/flatbuffers/include
    ${CMAKE_CURRENT_SOURCE_DIR}/KWS/tensorflow/third_party/flatbuffers/include/flatbuffers
    ${CMAKE_CURRENT_SOURCE_DIR}/KWS/tensorflow/third_party/kissfft)

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
    ${CMAKE_CURRENT_SOURCE_DIR}/KWS/tensorflow/tensorflow/lite/core/api/error_reporter.cc
    ${CMAKE_CURRENT_SOURCE_DIR}/KWS/tensorflow/tensorflow/lite/core/api/flatbuffer_conversions.cc
    ${CMAKE_CURRENT_SOURCE_DIR}/KWS/tensorflow/tensorflow/lite/core/api/op_resolver.cc
    ${CMAKE_CURRENT_SOURCE_DIR}/KWS/tensorflow/tensorflow/lite/core/api/tensor_utils.cc
    ${CMAKE_CURRENT_SOURCE_DIR}/KWS/tensorflow/tensorflow/lite/core/c/common.cc

    #microfrontend
    ${CMAKE_CURRENT_SOURCE_DIR}/KWS/tensorflow/tensorflow/lite/experimental/microfrontend/lib/fft_io.c
    ${CMAKE_CURRENT_SOURCE_DIR}/KWS/tensorflow/tensorflow/lite/experimental/microfrontend/lib/fft_test.cc
    ${CMAKE_CURRENT_SOURCE_DIR}/KWS/tensorflow/tensorflow/lite/experimental/microfrontend/lib/fft_util.cc
    ${CMAKE_CURRENT_SOURCE_DIR}/KWS/tensorflow/tensorflow/lite/experimental/microfrontend/lib/fft.cc
    ${CMAKE_CURRENT_SOURCE_DIR}/KWS/tensorflow/tensorflow/lite/experimental/microfrontend/lib/filterbank_io.c
    ${CMAKE_CURRENT_SOURCE_DIR}/KWS/tensorflow/tensorflow/lite/experimental/microfrontend/lib/filterbank_test.cc
    ${CMAKE_CURRENT_SOURCE_DIR}/KWS/tensorflow/tensorflow/lite/experimental/microfrontend/lib/filterbank_util.c
    ${CMAKE_CURRENT_SOURCE_DIR}/KWS/tensorflow/tensorflow/lite/experimental/microfrontend/lib/filterbank.c
    ${CMAKE_CURRENT_SOURCE_DIR}/KWS/tensorflow/tensorflow/lite/experimental/microfrontend/lib/frontend_io.c
    ${CMAKE_CURRENT_SOURCE_DIR}/KWS/tensorflow/tensorflow/lite/experimental/microfrontend/lib/frontend_main.c
    ${CMAKE_CURRENT_SOURCE_DIR}/KWS/tensorflow/tensorflow/lite/experimental/microfrontend/lib/frontend_memmap_generator.c
    ${CMAKE_CURRENT_SOURCE_DIR}/KWS/tensorflow/tensorflow/lite/experimental/microfrontend/lib/frontend_memmap_main.c
    ${CMAKE_CURRENT_SOURCE_DIR}/KWS/tensorflow/tensorflow/lite/experimental/microfrontend/lib/frontend_test.cc
    ${CMAKE_CURRENT_SOURCE_DIR}/KWS/tensorflow/tensorflow/lite/experimental/microfrontend/lib/frontend_util.c
    ${CMAKE_CURRENT_SOURCE_DIR}/KWS/tensorflow/tensorflow/lite/experimental/microfrontend/lib/frontend.c
    ${CMAKE_CURRENT_SOURCE_DIR}/KWS/tensorflow/tensorflow/lite/experimental/microfrontend/lib/kiss_fft_int16.cc
    ${CMAKE_CURRENT_SOURCE_DIR}/KWS/tensorflow/tensorflow/lite/experimental/microfrontend/lib/log_lut.c
    ${CMAKE_CURRENT_SOURCE_DIR}/KWS/tensorflow/tensorflow/lite/experimental/microfrontend/lib/log_scale_io.c
    ${CMAKE_CURRENT_SOURCE_DIR}/KWS/tensorflow/tensorflow/lite/experimental/microfrontend/lib/log_scale_test.cc
    ${CMAKE_CURRENT_SOURCE_DIR}/KWS/tensorflow/tensorflow/lite/experimental/microfrontend/lib/log_scale_util.c
    ${CMAKE_CURRENT_SOURCE_DIR}/KWS/tensorflow/tensorflow/lite/experimental/microfrontend/lib/log_scale.c
    ${CMAKE_CURRENT_SOURCE_DIR}/KWS/tensorflow/tensorflow/lite/experimental/microfrontend/lib/noise_reduction_io.c
    ${CMAKE_CURRENT_SOURCE_DIR}/KWS/tensorflow/tensorflow/lite/experimental/microfrontend/lib/noise_reduction_test.cc
    ${CMAKE_CURRENT_SOURCE_DIR}/KWS/tensorflow/tensorflow/lite/experimental/microfrontend/lib/noise_reduction_util.c
    ${CMAKE_CURRENT_SOURCE_DIR}/KWS/tensorflow/tensorflow/lite/experimental/microfrontend/lib/noise_reduction.c
    ${CMAKE_CURRENT_SOURCE_DIR}/KWS/tensorflow/tensorflow/lite/experimental/microfrontend/lib/pcan_gain_control_test.cc
    ${CMAKE_CURRENT_SOURCE_DIR}/KWS/tensorflow/tensorflow/lite/experimental/microfrontend/lib/pcan_gain_control_util.c
    ${CMAKE_CURRENT_SOURCE_DIR}/KWS/tensorflow/tensorflow/lite/experimental/microfrontend/lib/pcan_gain_control.c
    ${CMAKE_CURRENT_SOURCE_DIR}/KWS/tensorflow/tensorflow/lite/experimental/microfrontend/lib/window_io.c
    ${CMAKE_CURRENT_SOURCE_DIR}/KWS/tensorflow/tensorflow/lite/experimental/microfrontend/lib/window_test.cc
    ${CMAKE_CURRENT_SOURCE_DIR}/KWS/tensorflow/tensorflow/lite/experimental/microfrontend/lib/window_util.c
    ${CMAKE_CURRENT_SOURCE_DIR}/KWS/tensorflow/tensorflow/lite/experimental/microfrontend/lib/window.c

    #tflite kernels
    ${CMAKE_CURRENT_SOURCE_DIR}/KWS/tensorflow/tensorflow/lite/kernels/kernel_util.cc
    ${CMAKE_CURRENT_SOURCE_DIR}/KWS/tensorflow/tensorflow/lite/kernels/internal/common.cc
    ${CMAKE_CURRENT_SOURCE_DIR}/KWS/tensorflow/tensorflow/lite/kernels/internal/portable_tensor_utils.cc
    ${CMAKE_CURRENT_SOURCE_DIR}/KWS/tensorflow/tensorflow/lite/kernels/internal/quantization_util.cc
    ${CMAKE_CURRENT_SOURCE_DIR}/KWS/tensorflow/tensorflow/lite/kernels/internal/tensor_ctypes.cc
    ${CMAKE_CURRENT_SOURCE_DIR}/KWS/tensorflow/tensorflow/lite/kernels/internal/tensor_utils.cc
    ${CMAKE_CURRENT_SOURCE_DIR}/KWS/tensorflow/tensorflow/lite/kernels/internal/reference/comparisons.cc
    ${CMAKE_CURRENT_SOURCE_DIR}/KWS/tensorflow/tensorflow/lite/kernels/internal/reference/portable_tensor_utils.cc

    #micro
    ${CMAKE_CURRENT_SOURCE_DIR}/KWS/tensorflow/tensorflow/lite/micro/all_ops_resolver.cc
    ${CMAKE_CURRENT_SOURCE_DIR}/KWS/tensorflow/tensorflow/lite/micro/debug_log.cc
    ${CMAKE_CURRENT_SOURCE_DIR}/KWS/tensorflow/tensorflow/lite/micro/fake_micro_context_test.cc
    ${CMAKE_CURRENT_SOURCE_DIR}/KWS/tensorflow/tensorflow/lite/micro/fake_micro_context.cc
    ${CMAKE_CURRENT_SOURCE_DIR}/KWS/tensorflow/tensorflow/lite/micro/flatbuffer_utils_test.cc
    ${CMAKE_CURRENT_SOURCE_DIR}/KWS/tensorflow/tensorflow/lite/micro/flatbuffer_utils.cc
    ${CMAKE_CURRENT_SOURCE_DIR}/KWS/tensorflow/tensorflow/lite/micro/memory_arena_threshold_test.cc
    ${CMAKE_CURRENT_SOURCE_DIR}/KWS/tensorflow/tensorflow/lite/micro/memory_helpers_test.cc
    ${CMAKE_CURRENT_SOURCE_DIR}/KWS/tensorflow/tensorflow/lite/micro/memory_helpers.cc
    ${CMAKE_CURRENT_SOURCE_DIR}/KWS/tensorflow/tensorflow/lite/micro/micro_allocation_info_test.cc
    ${CMAKE_CURRENT_SOURCE_DIR}/KWS/tensorflow/tensorflow/lite/micro/micro_allocation_info.cc
    ${CMAKE_CURRENT_SOURCE_DIR}/KWS/tensorflow/tensorflow/lite/micro/micro_allocator_test.cc
    ${CMAKE_CURRENT_SOURCE_DIR}/KWS/tensorflow/tensorflow/lite/micro/micro_allocator.cc
    ${CMAKE_CURRENT_SOURCE_DIR}/KWS/tensorflow/tensorflow/lite/micro/micro_context_test.cc
    ${CMAKE_CURRENT_SOURCE_DIR}/KWS/tensorflow/tensorflow/lite/micro/micro_context.cc
    ${CMAKE_CURRENT_SOURCE_DIR}/KWS/tensorflow/tensorflow/lite/micro/micro_graph.cc
    ${CMAKE_CURRENT_SOURCE_DIR}/KWS/tensorflow/tensorflow/lite/micro/micro_interpreter_test.cc
    ${CMAKE_CURRENT_SOURCE_DIR}/KWS/tensorflow/tensorflow/lite/micro/micro_interpreter.cc
    ${CMAKE_CURRENT_SOURCE_DIR}/KWS/tensorflow/tensorflow/lite/micro/micro_log_test.cc
    ${CMAKE_CURRENT_SOURCE_DIR}/KWS/tensorflow/tensorflow/lite/micro/micro_log.cc
    ${CMAKE_CURRENT_SOURCE_DIR}/KWS/tensorflow/tensorflow/lite/micro/micro_mutable_op_resolver_test.cc
    ${CMAKE_CURRENT_SOURCE_DIR}/KWS/tensorflow/tensorflow/lite/micro/micro_op_resolver.cc
    ${CMAKE_CURRENT_SOURCE_DIR}/KWS/tensorflow/tensorflow/lite/micro/micro_profiler.cc
    ${CMAKE_CURRENT_SOURCE_DIR}/KWS/tensorflow/tensorflow/lite/micro/micro_resource_variable_test.cc
    ${CMAKE_CURRENT_SOURCE_DIR}/KWS/tensorflow/tensorflow/lite/micro/micro_resource_variable.cc
    ${CMAKE_CURRENT_SOURCE_DIR}/KWS/tensorflow/tensorflow/lite/micro/micro_string_test.cc
    ${CMAKE_CURRENT_SOURCE_DIR}/KWS/tensorflow/tensorflow/lite/micro/micro_string.cc
    ${CMAKE_CURRENT_SOURCE_DIR}/KWS/tensorflow/tensorflow/lite/micro/micro_time_test.cc
    ${CMAKE_CURRENT_SOURCE_DIR}/KWS/tensorflow/tensorflow/lite/micro/micro_time.cc
    ${CMAKE_CURRENT_SOURCE_DIR}/KWS/tensorflow/tensorflow/lite/micro/micro_utils_test.cc
    ${CMAKE_CURRENT_SOURCE_DIR}/KWS/tensorflow/tensorflow/lite/micro/micro_utils.cc
    ${CMAKE_CURRENT_SOURCE_DIR}/KWS/tensorflow/tensorflow/lite/micro/mock_micro_graph.cc
    ${CMAKE_CURRENT_SOURCE_DIR}/KWS/tensorflow/tensorflow/lite/micro/recording_micro_allocator_test.cc
    ${CMAKE_CURRENT_SOURCE_DIR}/KWS/tensorflow/tensorflow/lite/micro/recording_micro_allocator.cc
    ${CMAKE_CURRENT_SOURCE_DIR}/KWS/tensorflow/tensorflow/lite/micro/system_setup.cc
    ${CMAKE_CURRENT_SOURCE_DIR}/KWS/tensorflow/tensorflow/lite/micro/test_helper_custom_ops.cc
    ${CMAKE_CURRENT_SOURCE_DIR}/KWS/tensorflow/tensorflow/lite/micro/test_helpers.cc
    ${CMAKE_CURRENT_SOURCE_DIR}/KWS/tensorflow/tensorflow/lite/micro/testing_helpers_test.cc

    #micro cmsis-nn kernels
    ${CMAKE_CURRENT_SOURCE_DIR}/KWS/tensorflow/tensorflow/lite/micro/kernels/cmsis_nn/add.cc
    ${CMAKE_CURRENT_SOURCE_DIR}/KWS/tensorflow/tensorflow/lite/micro/kernels/cmsis_nn/conv.cc
    ${CMAKE_CURRENT_SOURCE_DIR}/KWS/tensorflow/tensorflow/lite/micro/kernels/cmsis_nn/depthwise_conv.cc
    ${CMAKE_CURRENT_SOURCE_DIR}/KWS/tensorflow/tensorflow/lite/micro/kernels/cmsis_nn/fully_connected.cc
    ${CMAKE_CURRENT_SOURCE_DIR}/KWS/tensorflow/tensorflow/lite/micro/kernels/cmsis_nn/mul.cc
    ${CMAKE_CURRENT_SOURCE_DIR}/KWS/tensorflow/tensorflow/lite/micro/kernels/cmsis_nn/pooling.cc
    ${CMAKE_CURRENT_SOURCE_DIR}/KWS/tensorflow/tensorflow/lite/micro/kernels/cmsis_nn/softmax.cc
    ${CMAKE_CURRENT_SOURCE_DIR}/KWS/tensorflow/tensorflow/lite/micro/kernels/cmsis_nn/svdf.cc
    ${CMAKE_CURRENT_SOURCE_DIR}/KWS/tensorflow/tensorflow/lite/micro/kernels/cmsis_nn/unidirectional_sequence_lstm.cc

    #micro kernels
    ${CMAKE_CURRENT_SOURCE_DIR}/KWS/tensorflow/tensorflow/lite/micro/kernels/activations_common.cc
    ${CMAKE_CURRENT_SOURCE_DIR}/KWS/tensorflow/tensorflow/lite/micro/kernels/activations_test.cc
    ${CMAKE_CURRENT_SOURCE_DIR}/KWS/tensorflow/tensorflow/lite/micro/kernels/activations.cc
    ${CMAKE_CURRENT_SOURCE_DIR}/KWS/tensorflow/tensorflow/lite/micro/kernels/add_common.cc
    ${CMAKE_CURRENT_SOURCE_DIR}/KWS/tensorflow/tensorflow/lite/micro/kernels/add_n_test.cc
    ${CMAKE_CURRENT_SOURCE_DIR}/KWS/tensorflow/tensorflow/lite/micro/kernels/add_n.cc
    ${CMAKE_CURRENT_SOURCE_DIR}/KWS/tensorflow/tensorflow/lite/micro/kernels/add_test.cc
    ${CMAKE_CURRENT_SOURCE_DIR}/KWS/tensorflow/tensorflow/lite/micro/kernels/add.cc
    ${CMAKE_CURRENT_SOURCE_DIR}/KWS/tensorflow/tensorflow/lite/micro/kernels/arg_min_max_test.cc
    ${CMAKE_CURRENT_SOURCE_DIR}/KWS/tensorflow/tensorflow/lite/micro/kernels/arg_min_max.cc
    ${CMAKE_CURRENT_SOURCE_DIR}/KWS/tensorflow/tensorflow/lite/micro/kernels/assign_variable.cc
    ${CMAKE_CURRENT_SOURCE_DIR}/KWS/tensorflow/tensorflow/lite/micro/kernels/batch_to_space_nd_test.cc
    ${CMAKE_CURRENT_SOURCE_DIR}/KWS/tensorflow/tensorflow/lite/micro/kernels/batch_to_space_nd.cc
    ${CMAKE_CURRENT_SOURCE_DIR}/KWS/tensorflow/tensorflow/lite/micro/kernels/broadcast_args_test.cc
    ${CMAKE_CURRENT_SOURCE_DIR}/KWS/tensorflow/tensorflow/lite/micro/kernels/broadcast_args.cc
    ${CMAKE_CURRENT_SOURCE_DIR}/KWS/tensorflow/tensorflow/lite/micro/kernels/broadcast_to_test.cc
    ${CMAKE_CURRENT_SOURCE_DIR}/KWS/tensorflow/tensorflow/lite/micro/kernels/broadcast_to.cc
    ${CMAKE_CURRENT_SOURCE_DIR}/KWS/tensorflow/tensorflow/lite/micro/kernels/call_once_test.cc
    ${CMAKE_CURRENT_SOURCE_DIR}/KWS/tensorflow/tensorflow/lite/micro/kernels/call_once.cc
    ${CMAKE_CURRENT_SOURCE_DIR}/KWS/tensorflow/tensorflow/lite/micro/kernels/cast_test.cc
    ${CMAKE_CURRENT_SOURCE_DIR}/KWS/tensorflow/tensorflow/lite/micro/kernels/cast.cc
    ${CMAKE_CURRENT_SOURCE_DIR}/KWS/tensorflow/tensorflow/lite/micro/kernels/ceil_test.cc
    ${CMAKE_CURRENT_SOURCE_DIR}/KWS/tensorflow/tensorflow/lite/micro/kernels/ceil.cc
    ${CMAKE_CURRENT_SOURCE_DIR}/KWS/tensorflow/tensorflow/lite/micro/kernels/circular_buffer_common.cc
    ${CMAKE_CURRENT_SOURCE_DIR}/KWS/tensorflow/tensorflow/lite/micro/kernels/circular_buffer_flexbuffers_generated_data.cc
    ${CMAKE_CURRENT_SOURCE_DIR}/KWS/tensorflow/tensorflow/lite/micro/kernels/circular_buffer_test.cc
    ${CMAKE_CURRENT_SOURCE_DIR}/KWS/tensorflow/tensorflow/lite/micro/kernels/circular_buffer.cc
    ${CMAKE_CURRENT_SOURCE_DIR}/KWS/tensorflow/tensorflow/lite/micro/kernels/comparisons_test.cc
    ${CMAKE_CURRENT_SOURCE_DIR}/KWS/tensorflow/tensorflow/lite/micro/kernels/comparisons.cc
    ${CMAKE_CURRENT_SOURCE_DIR}/KWS/tensorflow/tensorflow/lite/micro/kernels/concatenation_test.cc
    ${CMAKE_CURRENT_SOURCE_DIR}/KWS/tensorflow/tensorflow/lite/micro/kernels/concatenation.cc
    ${CMAKE_CURRENT_SOURCE_DIR}/KWS/tensorflow/tensorflow/lite/micro/kernels/conv_common.cc
    ${CMAKE_CURRENT_SOURCE_DIR}/KWS/tensorflow/tensorflow/lite/micro/kernels/conv_test_common.cc
    ${CMAKE_CURRENT_SOURCE_DIR}/KWS/tensorflow/tensorflow/lite/micro/kernels/conv_test.cc
    ${CMAKE_CURRENT_SOURCE_DIR}/KWS/tensorflow/tensorflow/lite/micro/kernels/conv.cc
    ${CMAKE_CURRENT_SOURCE_DIR}/KWS/tensorflow/tensorflow/lite/micro/kernels/cumsum_test.cc
    ${CMAKE_CURRENT_SOURCE_DIR}/KWS/tensorflow/tensorflow/lite/micro/kernels/cumsum.cc
    ${CMAKE_CURRENT_SOURCE_DIR}/KWS/tensorflow/tensorflow/lite/micro/kernels/depth_to_space_test.cc
    ${CMAKE_CURRENT_SOURCE_DIR}/KWS/tensorflow/tensorflow/lite/micro/kernels/depth_to_space.cc
    ${CMAKE_CURRENT_SOURCE_DIR}/KWS/tensorflow/tensorflow/lite/micro/kernels/depthwise_conv_common.cc
    ${CMAKE_CURRENT_SOURCE_DIR}/KWS/tensorflow/tensorflow/lite/micro/kernels/depthwise_conv_test.cc
    ${CMAKE_CURRENT_SOURCE_DIR}/KWS/tensorflow/tensorflow/lite/micro/kernels/depthwise_conv.cc
    ${CMAKE_CURRENT_SOURCE_DIR}/KWS/tensorflow/tensorflow/lite/micro/kernels/dequantize_common.cc
    ${CMAKE_CURRENT_SOURCE_DIR}/KWS/tensorflow/tensorflow/lite/micro/kernels/dequantize_test.cc
    ${CMAKE_CURRENT_SOURCE_DIR}/KWS/tensorflow/tensorflow/lite/micro/kernels/dequantize.cc
    ${CMAKE_CURRENT_SOURCE_DIR}/KWS/tensorflow/tensorflow/lite/micro/kernels/detection_postprocess_flexbuffers_generated_data.cc
    ${CMAKE_CURRENT_SOURCE_DIR}/KWS/tensorflow/tensorflow/lite/micro/kernels/detection_postprocess_test.cc
    ${CMAKE_CURRENT_SOURCE_DIR}/KWS/tensorflow/tensorflow/lite/micro/kernels/detection_postprocess.cc
    ${CMAKE_CURRENT_SOURCE_DIR}/KWS/tensorflow/tensorflow/lite/micro/kernels/div_test.cc
    ${CMAKE_CURRENT_SOURCE_DIR}/KWS/tensorflow/tensorflow/lite/micro/kernels/div.cc
    ${CMAKE_CURRENT_SOURCE_DIR}/KWS/tensorflow/tensorflow/lite/micro/kernels/elementwise_test.cc
    ${CMAKE_CURRENT_SOURCE_DIR}/KWS/tensorflow/tensorflow/lite/micro/kernels/elementwise.cc
    ${CMAKE_CURRENT_SOURCE_DIR}/KWS/tensorflow/tensorflow/lite/micro/kernels/elu_test.cc
    ${CMAKE_CURRENT_SOURCE_DIR}/KWS/tensorflow/tensorflow/lite/micro/kernels/elu.cc
    ${CMAKE_CURRENT_SOURCE_DIR}/KWS/tensorflow/tensorflow/lite/micro/kernels/ethosu.cc
    ${CMAKE_CURRENT_SOURCE_DIR}/KWS/tensorflow/tensorflow/lite/micro/kernels/exp_test.cc
    ${CMAKE_CURRENT_SOURCE_DIR}/KWS/tensorflow/tensorflow/lite/micro/kernels/exp.cc
    ${CMAKE_CURRENT_SOURCE_DIR}/KWS/tensorflow/tensorflow/lite/micro/kernels/expand_dims_test.cc
    ${CMAKE_CURRENT_SOURCE_DIR}/KWS/tensorflow/tensorflow/lite/micro/kernels/expand_dims.cc
    ${CMAKE_CURRENT_SOURCE_DIR}/KWS/tensorflow/tensorflow/lite/micro/kernels/fill_test.cc
    ${CMAKE_CURRENT_SOURCE_DIR}/KWS/tensorflow/tensorflow/lite/micro/kernels/fill.cc
    ${CMAKE_CURRENT_SOURCE_DIR}/KWS/tensorflow/tensorflow/lite/micro/kernels/floor_div_test.cc
    ${CMAKE_CURRENT_SOURCE_DIR}/KWS/tensorflow/tensorflow/lite/micro/kernels/floor_div.cc
    ${CMAKE_CURRENT_SOURCE_DIR}/KWS/tensorflow/tensorflow/lite/micro/kernels/floor_mod_test.cc
    ${CMAKE_CURRENT_SOURCE_DIR}/KWS/tensorflow/tensorflow/lite/micro/kernels/floor_mod.cc
    ${CMAKE_CURRENT_SOURCE_DIR}/KWS/tensorflow/tensorflow/lite/micro/kernels/floor_test.cc
    ${CMAKE_CURRENT_SOURCE_DIR}/KWS/tensorflow/tensorflow/lite/micro/kernels/floor.cc
    ${CMAKE_CURRENT_SOURCE_DIR}/KWS/tensorflow/tensorflow/lite/micro/kernels/fully_connected_common.cc
    ${CMAKE_CURRENT_SOURCE_DIR}/KWS/tensorflow/tensorflow/lite/micro/kernels/fully_connected_test.cc
    ${CMAKE_CURRENT_SOURCE_DIR}/KWS/tensorflow/tensorflow/lite/micro/kernels/fully_connected.cc
    ${CMAKE_CURRENT_SOURCE_DIR}/KWS/tensorflow/tensorflow/lite/micro/kernels/gather_nd_test.cc
    ${CMAKE_CURRENT_SOURCE_DIR}/KWS/tensorflow/tensorflow/lite/micro/kernels/gather_nd.cc
    ${CMAKE_CURRENT_SOURCE_DIR}/KWS/tensorflow/tensorflow/lite/micro/kernels/gather_test.cc
    ${CMAKE_CURRENT_SOURCE_DIR}/KWS/tensorflow/tensorflow/lite/micro/kernels/gather.cc
    ${CMAKE_CURRENT_SOURCE_DIR}/KWS/tensorflow/tensorflow/lite/micro/kernels/hard_swish_common.cc
    ${CMAKE_CURRENT_SOURCE_DIR}/KWS/tensorflow/tensorflow/lite/micro/kernels/hard_swish_test.cc
    ${CMAKE_CURRENT_SOURCE_DIR}/KWS/tensorflow/tensorflow/lite/micro/kernels/hard_swish.cc
    ${CMAKE_CURRENT_SOURCE_DIR}/KWS/tensorflow/tensorflow/lite/micro/kernels/if_test.cc
    ${CMAKE_CURRENT_SOURCE_DIR}/KWS/tensorflow/tensorflow/lite/micro/kernels/if.cc
    ${CMAKE_CURRENT_SOURCE_DIR}/KWS/tensorflow/tensorflow/lite/micro/kernels/kernel_runner.cc
    ${CMAKE_CURRENT_SOURCE_DIR}/KWS/tensorflow/tensorflow/lite/micro/kernels/kernel_util.cc
    ${CMAKE_CURRENT_SOURCE_DIR}/KWS/tensorflow/tensorflow/lite/micro/kernels/l2_pool_2d_test.cc
    ${CMAKE_CURRENT_SOURCE_DIR}/KWS/tensorflow/tensorflow/lite/micro/kernels/l2_pool_2d.cc
    ${CMAKE_CURRENT_SOURCE_DIR}/KWS/tensorflow/tensorflow/lite/micro/kernels/l2norm_test.cc
    ${CMAKE_CURRENT_SOURCE_DIR}/KWS/tensorflow/tensorflow/lite/micro/kernels/l2norm.cc
    ${CMAKE_CURRENT_SOURCE_DIR}/KWS/tensorflow/tensorflow/lite/micro/kernels/leaky_relu_common.cc
    ${CMAKE_CURRENT_SOURCE_DIR}/KWS/tensorflow/tensorflow/lite/micro/kernels/leaky_relu_test.cc
    ${CMAKE_CURRENT_SOURCE_DIR}/KWS/tensorflow/tensorflow/lite/micro/kernels/leaky_relu.cc
    ${CMAKE_CURRENT_SOURCE_DIR}/KWS/tensorflow/tensorflow/lite/micro/kernels/log_softmax_test.cc
    ${CMAKE_CURRENT_SOURCE_DIR}/KWS/tensorflow/tensorflow/lite/micro/kernels/log_softmax.cc
    ${CMAKE_CURRENT_SOURCE_DIR}/KWS/tensorflow/tensorflow/lite/micro/kernels/logical_common.cc
    ${CMAKE_CURRENT_SOURCE_DIR}/KWS/tensorflow/tensorflow/lite/micro/kernels/logical_test.cc
    ${CMAKE_CURRENT_SOURCE_DIR}/KWS/tensorflow/tensorflow/lite/micro/kernels/logical.cc
    ${CMAKE_CURRENT_SOURCE_DIR}/KWS/tensorflow/tensorflow/lite/micro/kernels/logistic_common.cc
    ${CMAKE_CURRENT_SOURCE_DIR}/KWS/tensorflow/tensorflow/lite/micro/kernels/logistic_test.cc
    ${CMAKE_CURRENT_SOURCE_DIR}/KWS/tensorflow/tensorflow/lite/micro/kernels/logistic.cc
    ${CMAKE_CURRENT_SOURCE_DIR}/KWS/tensorflow/tensorflow/lite/micro/kernels/lstm_eval_common.cc
    ${CMAKE_CURRENT_SOURCE_DIR}/KWS/tensorflow/tensorflow/lite/micro/kernels/lstm_eval_test.cc
    ${CMAKE_CURRENT_SOURCE_DIR}/KWS/tensorflow/tensorflow/lite/micro/kernels/lstm_eval.cc
    ${CMAKE_CURRENT_SOURCE_DIR}/KWS/tensorflow/tensorflow/lite/micro/kernels/maximum_minimum_test.cc
    ${CMAKE_CURRENT_SOURCE_DIR}/KWS/tensorflow/tensorflow/lite/micro/kernels/maximum_minimum.cc
    ${CMAKE_CURRENT_SOURCE_DIR}/KWS/tensorflow/tensorflow/lite/micro/kernels/micro_tensor_utils.cc
    ${CMAKE_CURRENT_SOURCE_DIR}/KWS/tensorflow/tensorflow/lite/micro/kernels/mirror_pad_test.cc
    ${CMAKE_CURRENT_SOURCE_DIR}/KWS/tensorflow/tensorflow/lite/micro/kernels/mirror_pad.cc
    ${CMAKE_CURRENT_SOURCE_DIR}/KWS/tensorflow/tensorflow/lite/micro/kernels/mul_common.cc
    ${CMAKE_CURRENT_SOURCE_DIR}/KWS/tensorflow/tensorflow/lite/micro/kernels/mul_test.cc
    ${CMAKE_CURRENT_SOURCE_DIR}/KWS/tensorflow/tensorflow/lite/micro/kernels/mul.cc
    ${CMAKE_CURRENT_SOURCE_DIR}/KWS/tensorflow/tensorflow/lite/micro/kernels/neg_test.cc
    ${CMAKE_CURRENT_SOURCE_DIR}/KWS/tensorflow/tensorflow/lite/micro/kernels/neg.cc
    ${CMAKE_CURRENT_SOURCE_DIR}/KWS/tensorflow/tensorflow/lite/micro/kernels/pack_test.cc
    ${CMAKE_CURRENT_SOURCE_DIR}/KWS/tensorflow/tensorflow/lite/micro/kernels/pack.cc
    ${CMAKE_CURRENT_SOURCE_DIR}/KWS/tensorflow/tensorflow/lite/micro/kernels/pad_test.cc
    ${CMAKE_CURRENT_SOURCE_DIR}/KWS/tensorflow/tensorflow/lite/micro/kernels/pad.cc
    ${CMAKE_CURRENT_SOURCE_DIR}/KWS/tensorflow/tensorflow/lite/micro/kernels/pooling_common.cc
    ${CMAKE_CURRENT_SOURCE_DIR}/KWS/tensorflow/tensorflow/lite/micro/kernels/pooling_test.cc
    ${CMAKE_CURRENT_SOURCE_DIR}/KWS/tensorflow/tensorflow/lite/micro/kernels/pooling.cc
    ${CMAKE_CURRENT_SOURCE_DIR}/KWS/tensorflow/tensorflow/lite/micro/kernels/prelu_common.cc
    ${CMAKE_CURRENT_SOURCE_DIR}/KWS/tensorflow/tensorflow/lite/micro/kernels/prelu_test.cc
    ${CMAKE_CURRENT_SOURCE_DIR}/KWS/tensorflow/tensorflow/lite/micro/kernels/prelu.cc
    ${CMAKE_CURRENT_SOURCE_DIR}/KWS/tensorflow/tensorflow/lite/micro/kernels/quantization_util_test.cc
    ${CMAKE_CURRENT_SOURCE_DIR}/KWS/tensorflow/tensorflow/lite/micro/kernels/quantize_common.cc
    ${CMAKE_CURRENT_SOURCE_DIR}/KWS/tensorflow/tensorflow/lite/micro/kernels/quantize_test.cc
    ${CMAKE_CURRENT_SOURCE_DIR}/KWS/tensorflow/tensorflow/lite/micro/kernels/quantize.cc
    ${CMAKE_CURRENT_SOURCE_DIR}/KWS/tensorflow/tensorflow/lite/micro/kernels/read_variable.cc
    ${CMAKE_CURRENT_SOURCE_DIR}/KWS/tensorflow/tensorflow/lite/micro/kernels/reduce_common.cc
    ${CMAKE_CURRENT_SOURCE_DIR}/KWS/tensorflow/tensorflow/lite/micro/kernels/reduce_test.cc
    ${CMAKE_CURRENT_SOURCE_DIR}/KWS/tensorflow/tensorflow/lite/micro/kernels/reduce.cc
    ${CMAKE_CURRENT_SOURCE_DIR}/KWS/tensorflow/tensorflow/lite/micro/kernels/reshape_test.cc
    ${CMAKE_CURRENT_SOURCE_DIR}/KWS/tensorflow/tensorflow/lite/micro/kernels/reshape.cc
    ${CMAKE_CURRENT_SOURCE_DIR}/KWS/tensorflow/tensorflow/lite/micro/kernels/resize_bilinear_test.cc
    ${CMAKE_CURRENT_SOURCE_DIR}/KWS/tensorflow/tensorflow/lite/micro/kernels/resize_bilinear.cc
    ${CMAKE_CURRENT_SOURCE_DIR}/KWS/tensorflow/tensorflow/lite/micro/kernels/resize_nearest_neighbor_test.cc
    ${CMAKE_CURRENT_SOURCE_DIR}/KWS/tensorflow/tensorflow/lite/micro/kernels/resize_nearest_neighbor.cc
    ${CMAKE_CURRENT_SOURCE_DIR}/KWS/tensorflow/tensorflow/lite/micro/kernels/round_test.cc
    ${CMAKE_CURRENT_SOURCE_DIR}/KWS/tensorflow/tensorflow/lite/micro/kernels/round.cc
    ${CMAKE_CURRENT_SOURCE_DIR}/KWS/tensorflow/tensorflow/lite/micro/kernels/select_test.cc
    ${CMAKE_CURRENT_SOURCE_DIR}/KWS/tensorflow/tensorflow/lite/micro/kernels/select.cc
    ${CMAKE_CURRENT_SOURCE_DIR}/KWS/tensorflow/tensorflow/lite/micro/kernels/shape_test.cc
    ${CMAKE_CURRENT_SOURCE_DIR}/KWS/tensorflow/tensorflow/lite/micro/kernels/shape.cc
    ${CMAKE_CURRENT_SOURCE_DIR}/KWS/tensorflow/tensorflow/lite/micro/kernels/slice_test.cc
    ${CMAKE_CURRENT_SOURCE_DIR}/KWS/tensorflow/tensorflow/lite/micro/kernels/slice.cc
    ${CMAKE_CURRENT_SOURCE_DIR}/KWS/tensorflow/tensorflow/lite/micro/kernels/softmax_common.cc
    ${CMAKE_CURRENT_SOURCE_DIR}/KWS/tensorflow/tensorflow/lite/micro/kernels/softmax_test.cc
    ${CMAKE_CURRENT_SOURCE_DIR}/KWS/tensorflow/tensorflow/lite/micro/kernels/softmax.cc
    ${CMAKE_CURRENT_SOURCE_DIR}/KWS/tensorflow/tensorflow/lite/micro/kernels/space_to_batch_nd_test.cc
    ${CMAKE_CURRENT_SOURCE_DIR}/KWS/tensorflow/tensorflow/lite/micro/kernels/space_to_batch_nd.cc
    ${CMAKE_CURRENT_SOURCE_DIR}/KWS/tensorflow/tensorflow/lite/micro/kernels/space_to_depth_test.cc
    ${CMAKE_CURRENT_SOURCE_DIR}/KWS/tensorflow/tensorflow/lite/micro/kernels/space_to_depth.cc
    ${CMAKE_CURRENT_SOURCE_DIR}/KWS/tensorflow/tensorflow/lite/micro/kernels/split_test.cc
    ${CMAKE_CURRENT_SOURCE_DIR}/KWS/tensorflow/tensorflow/lite/micro/kernels/split_v_test.cc
    ${CMAKE_CURRENT_SOURCE_DIR}/KWS/tensorflow/tensorflow/lite/micro/kernels/split_v.cc
    ${CMAKE_CURRENT_SOURCE_DIR}/KWS/tensorflow/tensorflow/lite/micro/kernels/split.cc
    ${CMAKE_CURRENT_SOURCE_DIR}/KWS/tensorflow/tensorflow/lite/micro/kernels/squared_difference_test.cc
    ${CMAKE_CURRENT_SOURCE_DIR}/KWS/tensorflow/tensorflow/lite/micro/kernels/squared_difference.cc
    ${CMAKE_CURRENT_SOURCE_DIR}/KWS/tensorflow/tensorflow/lite/micro/kernels/squeeze_test.cc
    ${CMAKE_CURRENT_SOURCE_DIR}/KWS/tensorflow/tensorflow/lite/micro/kernels/squeeze.cc
    ${CMAKE_CURRENT_SOURCE_DIR}/KWS/tensorflow/tensorflow/lite/micro/kernels/strided_slice_test.cc
    ${CMAKE_CURRENT_SOURCE_DIR}/KWS/tensorflow/tensorflow/lite/micro/kernels/strided_slice.cc
    ${CMAKE_CURRENT_SOURCE_DIR}/KWS/tensorflow/tensorflow/lite/micro/kernels/sub_common.cc
    ${CMAKE_CURRENT_SOURCE_DIR}/KWS/tensorflow/tensorflow/lite/micro/kernels/sub_test.cc
    ${CMAKE_CURRENT_SOURCE_DIR}/KWS/tensorflow/tensorflow/lite/micro/kernels/sub.cc
    ${CMAKE_CURRENT_SOURCE_DIR}/KWS/tensorflow/tensorflow/lite/micro/kernels/svdf_common.cc
    ${CMAKE_CURRENT_SOURCE_DIR}/KWS/tensorflow/tensorflow/lite/micro/kernels/svdf_test.cc
    ${CMAKE_CURRENT_SOURCE_DIR}/KWS/tensorflow/tensorflow/lite/micro/kernels/svdf.cc
    ${CMAKE_CURRENT_SOURCE_DIR}/KWS/tensorflow/tensorflow/lite/micro/kernels/tanh_test.cc
    ${CMAKE_CURRENT_SOURCE_DIR}/KWS/tensorflow/tensorflow/lite/micro/kernels/tanh.cc
    ${CMAKE_CURRENT_SOURCE_DIR}/KWS/tensorflow/tensorflow/lite/micro/kernels/transpose_conv_test.cc
    ${CMAKE_CURRENT_SOURCE_DIR}/KWS/tensorflow/tensorflow/lite/micro/kernels/transpose_conv.cc
    ${CMAKE_CURRENT_SOURCE_DIR}/KWS/tensorflow/tensorflow/lite/micro/kernels/transpose_test.cc
    ${CMAKE_CURRENT_SOURCE_DIR}/KWS/tensorflow/tensorflow/lite/micro/kernels/transpose.cc
    ${CMAKE_CURRENT_SOURCE_DIR}/KWS/tensorflow/tensorflow/lite/micro/kernels/unidirectional_sequence_lstm_test.cc
    ${CMAKE_CURRENT_SOURCE_DIR}/KWS/tensorflow/tensorflow/lite/micro/kernels/unidirectional_sequence_lstm.cc
    ${CMAKE_CURRENT_SOURCE_DIR}/KWS/tensorflow/tensorflow/lite/micro/kernels/unpack_test.cc
    ${CMAKE_CURRENT_SOURCE_DIR}/KWS/tensorflow/tensorflow/lite/micro/kernels/unpack.cc
    ${CMAKE_CURRENT_SOURCE_DIR}/KWS/tensorflow/tensorflow/lite/micro/kernels/var_handle.cc
    ${CMAKE_CURRENT_SOURCE_DIR}/KWS/tensorflow/tensorflow/lite/micro/kernels/while_test.cc
    ${CMAKE_CURRENT_SOURCE_DIR}/KWS/tensorflow/tensorflow/lite/micro/kernels/while.cc
    ${CMAKE_CURRENT_SOURCE_DIR}/KWS/tensorflow/tensorflow/lite/micro/kernels/zeros_like_test.cc
    ${CMAKE_CURRENT_SOURCE_DIR}/KWS/tensorflow/tensorflow/lite/micro/kernels/zeros_like.cc

    #micro memory planner
    ${CMAKE_CURRENT_SOURCE_DIR}/KWS/tensorflow/tensorflow/lite/micro/memory_planner/greedy_memory_planner_test.cc
    ${CMAKE_CURRENT_SOURCE_DIR}/KWS/tensorflow/tensorflow/lite/micro/memory_planner/greedy_memory_planner.cc
    ${CMAKE_CURRENT_SOURCE_DIR}/KWS/tensorflow/tensorflow/lite/micro/memory_planner/linear_memory_planner_test.cc
    ${CMAKE_CURRENT_SOURCE_DIR}/KWS/tensorflow/tensorflow/lite/micro/memory_planner/linear_memory_planner.cc
    ${CMAKE_CURRENT_SOURCE_DIR}/KWS/tensorflow/tensorflow/lite/micro/memory_planner/non_persistent_buffer_planner_shim_test.cc
    ${CMAKE_CURRENT_SOURCE_DIR}/KWS/tensorflow/tensorflow/lite/micro/memory_planner/non_persistent_buffer_planner_shim.cc

    #tflite bridge
    ${CMAKE_CURRENT_SOURCE_DIR}/KWS/tensorflow/tensorflow/lite/micro/tflite_bridge/flatbuffer_conversions_bridge.cc
    ${CMAKE_CURRENT_SOURCE_DIR}/KWS/tensorflow/tensorflow/lite/micro/tflite_bridge/micro_error_reporter.cc

    ${CMAKE_CURRENT_SOURCE_DIR}/KWS/tensorflow/tensorflow/lite/micro/tools/tflite_flatbuffer_align.cc
    ${CMAKE_CURRENT_SOURCE_DIR}/KWS/tensorflow/tensorflow/lite/schema/schema_utils.cc)


file(GLOB_RECURSE CMSIS_SOURCES CONFIGURE_DEPENDS
    ${CMAKE_CURRENT_SOURCE_DIR}/KWS/tensorflow/tensorflow/lite/micro/tools/make/downloads/cmsis/CMSIS/NN/Source/*.c)

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

#mike
target_include_directories(${EXECUTABLE} SYSTEM PRIVATE
    ${THIRD_PARTY_INCLUDE_DIRECTORIES})

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
