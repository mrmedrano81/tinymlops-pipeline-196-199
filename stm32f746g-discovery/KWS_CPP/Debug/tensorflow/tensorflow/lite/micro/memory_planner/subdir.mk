################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (10.3-2021.10)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CC_SRCS += \
../tensorflow/tensorflow/lite/micro/memory_planner/greedy_memory_planner.cc \
../tensorflow/tensorflow/lite/micro/memory_planner/linear_memory_planner.cc 

CC_DEPS += \
./tensorflow/tensorflow/lite/micro/memory_planner/greedy_memory_planner.d \
./tensorflow/tensorflow/lite/micro/memory_planner/linear_memory_planner.d 

OBJS += \
./tensorflow/tensorflow/lite/micro/memory_planner/greedy_memory_planner.o \
./tensorflow/tensorflow/lite/micro/memory_planner/linear_memory_planner.o 


# Each subdirectory must supply rules for building sources it contributes
tensorflow/tensorflow/lite/micro/memory_planner/%.o tensorflow/tensorflow/lite/micro/memory_planner/%.su tensorflow/tensorflow/lite/micro/memory_planner/%.cyclo: ../tensorflow/tensorflow/lite/micro/memory_planner/%.cc tensorflow/tensorflow/lite/micro/memory_planner/subdir.mk
	arm-none-eabi-g++ "$<" -mcpu=cortex-m7 -std=gnu++14 -g3 -DDEBUG -DUSE_HAL_DRIVER -DSTM32F746xx -c -I../Core/Inc -I../Drivers/STM32F7xx_HAL_Driver/Inc -I../Drivers/STM32F7xx_HAL_Driver/Inc/Legacy -I../Drivers/CMSIS/Device/ST/STM32F7xx/Include -I../Drivers/CMSIS/Include -I"/home/michael/STM32CubeIDE/workspace_1.12.0/KWS_CPP/tensorflow" -I"/home/michael/STM32CubeIDE/workspace_1.12.0/KWS_CPP/third_party" -I"/home/michael/STM32CubeIDE/workspace_1.12.0/KWS_CPP/third_party/flatbuffers/include" -I"/home/michael/STM32CubeIDE/workspace_1.12.0/KWS_CPP/third_party/gemmlowp" -I"/home/michael/STM32CubeIDE/workspace_1.12.0/KWS_CPP/third_party/ruy" -I"/home/michael/STM32CubeIDE/workspace_1.12.0/KWS_CPP/Core/Startup" -I"/home/michael/STM32CubeIDE/workspace_1.12.0/KWS_CPP/Drivers/BSP" -I"/home/michael/STM32CubeIDE/workspace_1.12.0/KWS_CPP/Drivers/BSP/STM32746G-Discovery" -I"/home/michael/STM32CubeIDE/workspace_1.12.0/KWS_CPP/Drivers/BSP/Components/Common" -I"/home/michael/STM32CubeIDE/workspace_1.12.0/KWS_CPP/Drivers/BSP/Components" -I"/home/michael/STM32CubeIDE/workspace_1.12.0/KWS_CPP/Utilities/Fonts" -I"/home/michael/STM32CubeIDE/workspace_1.12.0/KWS_CPP/Utilities" -O0 -ffunction-sections -fdata-sections -fno-exceptions -fno-rtti -fno-use-cxa-atexit -Wall -fstack-usage -fcyclomatic-complexity -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv5-sp-d16 -mfloat-abi=hard -mthumb -o "$@"

clean: clean-tensorflow-2f-tensorflow-2f-lite-2f-micro-2f-memory_planner

clean-tensorflow-2f-tensorflow-2f-lite-2f-micro-2f-memory_planner:
	-$(RM) ./tensorflow/tensorflow/lite/micro/memory_planner/greedy_memory_planner.cyclo ./tensorflow/tensorflow/lite/micro/memory_planner/greedy_memory_planner.d ./tensorflow/tensorflow/lite/micro/memory_planner/greedy_memory_planner.o ./tensorflow/tensorflow/lite/micro/memory_planner/greedy_memory_planner.su ./tensorflow/tensorflow/lite/micro/memory_planner/linear_memory_planner.cyclo ./tensorflow/tensorflow/lite/micro/memory_planner/linear_memory_planner.d ./tensorflow/tensorflow/lite/micro/memory_planner/linear_memory_planner.o ./tensorflow/tensorflow/lite/micro/memory_planner/linear_memory_planner.su

.PHONY: clean-tensorflow-2f-tensorflow-2f-lite-2f-micro-2f-memory_planner

