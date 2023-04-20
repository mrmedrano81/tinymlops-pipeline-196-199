################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (10.3-2021.10)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CC_SRCS += \
../tensorflow/tensorflow/lite/micro/memory_helpers.cc \
../tensorflow/tensorflow/lite/micro/micro_allocator.cc \
../tensorflow/tensorflow/lite/micro/micro_error_reporter.cc \
../tensorflow/tensorflow/lite/micro/micro_interpreter.cc \
../tensorflow/tensorflow/lite/micro/micro_optional_debug_tools.cc \
../tensorflow/tensorflow/lite/micro/micro_string.cc \
../tensorflow/tensorflow/lite/micro/micro_time.cc \
../tensorflow/tensorflow/lite/micro/micro_utils.cc \
../tensorflow/tensorflow/lite/micro/simple_memory_allocator.cc \
../tensorflow/tensorflow/lite/micro/test_helpers.cc 

CC_DEPS += \
./tensorflow/tensorflow/lite/micro/memory_helpers.d \
./tensorflow/tensorflow/lite/micro/micro_allocator.d \
./tensorflow/tensorflow/lite/micro/micro_error_reporter.d \
./tensorflow/tensorflow/lite/micro/micro_interpreter.d \
./tensorflow/tensorflow/lite/micro/micro_optional_debug_tools.d \
./tensorflow/tensorflow/lite/micro/micro_string.d \
./tensorflow/tensorflow/lite/micro/micro_time.d \
./tensorflow/tensorflow/lite/micro/micro_utils.d \
./tensorflow/tensorflow/lite/micro/simple_memory_allocator.d \
./tensorflow/tensorflow/lite/micro/test_helpers.d 

OBJS += \
./tensorflow/tensorflow/lite/micro/memory_helpers.o \
./tensorflow/tensorflow/lite/micro/micro_allocator.o \
./tensorflow/tensorflow/lite/micro/micro_error_reporter.o \
./tensorflow/tensorflow/lite/micro/micro_interpreter.o \
./tensorflow/tensorflow/lite/micro/micro_optional_debug_tools.o \
./tensorflow/tensorflow/lite/micro/micro_string.o \
./tensorflow/tensorflow/lite/micro/micro_time.o \
./tensorflow/tensorflow/lite/micro/micro_utils.o \
./tensorflow/tensorflow/lite/micro/simple_memory_allocator.o \
./tensorflow/tensorflow/lite/micro/test_helpers.o 


# Each subdirectory must supply rules for building sources it contributes
tensorflow/tensorflow/lite/micro/%.o tensorflow/tensorflow/lite/micro/%.su tensorflow/tensorflow/lite/micro/%.cyclo: ../tensorflow/tensorflow/lite/micro/%.cc tensorflow/tensorflow/lite/micro/subdir.mk
	arm-none-eabi-g++ "$<" -mcpu=cortex-m7 -std=gnu++14 -g3 -DDEBUG -DUSE_HAL_DRIVER -DSTM32F746xx -c -I../Core/Inc -I../Drivers/STM32F7xx_HAL_Driver/Inc -I../Drivers/STM32F7xx_HAL_Driver/Inc/Legacy -I../Drivers/CMSIS/Device/ST/STM32F7xx/Include -I../Drivers/CMSIS/Include -I"/home/michael/STM32CubeIDE/workspace_1.12.0/KWS_CPP/tensorflow" -I"/home/michael/STM32CubeIDE/workspace_1.12.0/KWS_CPP/third_party" -I"/home/michael/STM32CubeIDE/workspace_1.12.0/KWS_CPP/third_party/flatbuffers/include" -I"/home/michael/STM32CubeIDE/workspace_1.12.0/KWS_CPP/third_party/gemmlowp" -I"/home/michael/STM32CubeIDE/workspace_1.12.0/KWS_CPP/third_party/ruy" -I"/home/michael/STM32CubeIDE/workspace_1.12.0/KWS_CPP/Core/Startup" -I"/home/michael/STM32CubeIDE/workspace_1.12.0/KWS_CPP/Drivers/BSP" -I"/home/michael/STM32CubeIDE/workspace_1.12.0/KWS_CPP/Drivers/BSP/STM32746G-Discovery" -I"/home/michael/STM32CubeIDE/workspace_1.12.0/KWS_CPP/Drivers/BSP/Components/Common" -I"/home/michael/STM32CubeIDE/workspace_1.12.0/KWS_CPP/Drivers/BSP/Components" -I"/home/michael/STM32CubeIDE/workspace_1.12.0/KWS_CPP/Utilities/Fonts" -I"/home/michael/STM32CubeIDE/workspace_1.12.0/KWS_CPP/Utilities" -O0 -ffunction-sections -fdata-sections -fno-exceptions -fno-rtti -fno-use-cxa-atexit -Wall -fstack-usage -fcyclomatic-complexity -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv5-sp-d16 -mfloat-abi=hard -mthumb -o "$@"

clean: clean-tensorflow-2f-tensorflow-2f-lite-2f-micro

clean-tensorflow-2f-tensorflow-2f-lite-2f-micro:
	-$(RM) ./tensorflow/tensorflow/lite/micro/memory_helpers.cyclo ./tensorflow/tensorflow/lite/micro/memory_helpers.d ./tensorflow/tensorflow/lite/micro/memory_helpers.o ./tensorflow/tensorflow/lite/micro/memory_helpers.su ./tensorflow/tensorflow/lite/micro/micro_allocator.cyclo ./tensorflow/tensorflow/lite/micro/micro_allocator.d ./tensorflow/tensorflow/lite/micro/micro_allocator.o ./tensorflow/tensorflow/lite/micro/micro_allocator.su ./tensorflow/tensorflow/lite/micro/micro_error_reporter.cyclo ./tensorflow/tensorflow/lite/micro/micro_error_reporter.d ./tensorflow/tensorflow/lite/micro/micro_error_reporter.o ./tensorflow/tensorflow/lite/micro/micro_error_reporter.su ./tensorflow/tensorflow/lite/micro/micro_interpreter.cyclo ./tensorflow/tensorflow/lite/micro/micro_interpreter.d ./tensorflow/tensorflow/lite/micro/micro_interpreter.o ./tensorflow/tensorflow/lite/micro/micro_interpreter.su ./tensorflow/tensorflow/lite/micro/micro_optional_debug_tools.cyclo ./tensorflow/tensorflow/lite/micro/micro_optional_debug_tools.d ./tensorflow/tensorflow/lite/micro/micro_optional_debug_tools.o ./tensorflow/tensorflow/lite/micro/micro_optional_debug_tools.su ./tensorflow/tensorflow/lite/micro/micro_string.cyclo ./tensorflow/tensorflow/lite/micro/micro_string.d ./tensorflow/tensorflow/lite/micro/micro_string.o ./tensorflow/tensorflow/lite/micro/micro_string.su ./tensorflow/tensorflow/lite/micro/micro_time.cyclo ./tensorflow/tensorflow/lite/micro/micro_time.d ./tensorflow/tensorflow/lite/micro/micro_time.o ./tensorflow/tensorflow/lite/micro/micro_time.su ./tensorflow/tensorflow/lite/micro/micro_utils.cyclo ./tensorflow/tensorflow/lite/micro/micro_utils.d ./tensorflow/tensorflow/lite/micro/micro_utils.o ./tensorflow/tensorflow/lite/micro/micro_utils.su ./tensorflow/tensorflow/lite/micro/simple_memory_allocator.cyclo ./tensorflow/tensorflow/lite/micro/simple_memory_allocator.d ./tensorflow/tensorflow/lite/micro/simple_memory_allocator.o ./tensorflow/tensorflow/lite/micro/simple_memory_allocator.su ./tensorflow/tensorflow/lite/micro/test_helpers.cyclo ./tensorflow/tensorflow/lite/micro/test_helpers.d ./tensorflow/tensorflow/lite/micro/test_helpers.o ./tensorflow/tensorflow/lite/micro/test_helpers.su

.PHONY: clean-tensorflow-2f-tensorflow-2f-lite-2f-micro

