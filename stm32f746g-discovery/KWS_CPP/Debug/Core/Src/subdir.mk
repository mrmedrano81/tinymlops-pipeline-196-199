################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (10.3-2021.10)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Core/Src/debug_log.c \
../Core/Src/stm32f7xx_hal_msp.c \
../Core/Src/stm32f7xx_it.c \
../Core/Src/syscalls.c \
../Core/Src/sysmem.c \
../Core/Src/system_stm32f7xx.c 

CPP_SRCS += \
../Core/Src/ds_cnn_quantized_data.cpp \
../Core/Src/main.cpp 

C_DEPS += \
./Core/Src/debug_log.d \
./Core/Src/stm32f7xx_hal_msp.d \
./Core/Src/stm32f7xx_it.d \
./Core/Src/syscalls.d \
./Core/Src/sysmem.d \
./Core/Src/system_stm32f7xx.d 

OBJS += \
./Core/Src/debug_log.o \
./Core/Src/ds_cnn_quantized_data.o \
./Core/Src/main.o \
./Core/Src/stm32f7xx_hal_msp.o \
./Core/Src/stm32f7xx_it.o \
./Core/Src/syscalls.o \
./Core/Src/sysmem.o \
./Core/Src/system_stm32f7xx.o 

CPP_DEPS += \
./Core/Src/ds_cnn_quantized_data.d \
./Core/Src/main.d 


# Each subdirectory must supply rules for building sources it contributes
Core/Src/%.o Core/Src/%.su Core/Src/%.cyclo: ../Core/Src/%.c Core/Src/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m7 -std=gnu11 -g3 -DDEBUG -DUSE_HAL_DRIVER -DSTM32F746xx -c -I../Core/Inc -I../Drivers/STM32F7xx_HAL_Driver/Inc -I../Drivers/STM32F7xx_HAL_Driver/Inc/Legacy -I../Drivers/CMSIS/Device/ST/STM32F7xx/Include -I../Drivers/CMSIS/Include -I"/home/michael/STM32CubeIDE/workspace_1.12.0/KWS_CPP/tensorflow" -I"/home/michael/STM32CubeIDE/workspace_1.12.0/KWS_CPP/third_party" -I"/home/michael/STM32CubeIDE/workspace_1.12.0/KWS_CPP/third_party/flatbuffers/include" -I"/home/michael/STM32CubeIDE/workspace_1.12.0/KWS_CPP/third_party/gemmlowp" -I"/home/michael/STM32CubeIDE/workspace_1.12.0/KWS_CPP/third_party/ruy" -I"/home/michael/STM32CubeIDE/workspace_1.12.0/KWS_CPP/Core/Startup" -I"/home/michael/STM32CubeIDE/workspace_1.12.0/KWS_CPP/Drivers/BSP" -I"/home/michael/STM32CubeIDE/workspace_1.12.0/KWS_CPP/Drivers/BSP/STM32746G-Discovery" -I"/home/michael/STM32CubeIDE/workspace_1.12.0/KWS_CPP/Drivers/BSP/Components/Common" -I"/home/michael/STM32CubeIDE/workspace_1.12.0/KWS_CPP/Drivers/BSP/Components" -I"/home/michael/STM32CubeIDE/workspace_1.12.0/KWS_CPP/Utilities/Fonts" -I"/home/michael/STM32CubeIDE/workspace_1.12.0/KWS_CPP/Utilities" -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -fcyclomatic-complexity -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv5-sp-d16 -mfloat-abi=hard -mthumb -o "$@"
Core/Src/%.o Core/Src/%.su Core/Src/%.cyclo: ../Core/Src/%.cpp Core/Src/subdir.mk
	arm-none-eabi-g++ "$<" -mcpu=cortex-m7 -std=gnu++14 -g3 -DDEBUG -DUSE_HAL_DRIVER -DSTM32F746xx -c -I../Core/Inc -I../Drivers/STM32F7xx_HAL_Driver/Inc -I../Drivers/STM32F7xx_HAL_Driver/Inc/Legacy -I../Drivers/CMSIS/Device/ST/STM32F7xx/Include -I../Drivers/CMSIS/Include -I"/home/michael/STM32CubeIDE/workspace_1.12.0/KWS_CPP/tensorflow" -I"/home/michael/STM32CubeIDE/workspace_1.12.0/KWS_CPP/third_party" -I"/home/michael/STM32CubeIDE/workspace_1.12.0/KWS_CPP/third_party/flatbuffers/include" -I"/home/michael/STM32CubeIDE/workspace_1.12.0/KWS_CPP/third_party/gemmlowp" -I"/home/michael/STM32CubeIDE/workspace_1.12.0/KWS_CPP/third_party/ruy" -I"/home/michael/STM32CubeIDE/workspace_1.12.0/KWS_CPP/Core/Startup" -I"/home/michael/STM32CubeIDE/workspace_1.12.0/KWS_CPP/Drivers/BSP" -I"/home/michael/STM32CubeIDE/workspace_1.12.0/KWS_CPP/Drivers/BSP/STM32746G-Discovery" -I"/home/michael/STM32CubeIDE/workspace_1.12.0/KWS_CPP/Drivers/BSP/Components/Common" -I"/home/michael/STM32CubeIDE/workspace_1.12.0/KWS_CPP/Drivers/BSP/Components" -I"/home/michael/STM32CubeIDE/workspace_1.12.0/KWS_CPP/Utilities/Fonts" -I"/home/michael/STM32CubeIDE/workspace_1.12.0/KWS_CPP/Utilities" -O0 -ffunction-sections -fdata-sections -fno-exceptions -fno-rtti -fno-use-cxa-atexit -Wall -fstack-usage -fcyclomatic-complexity -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv5-sp-d16 -mfloat-abi=hard -mthumb -o "$@"

clean: clean-Core-2f-Src

clean-Core-2f-Src:
	-$(RM) ./Core/Src/debug_log.cyclo ./Core/Src/debug_log.d ./Core/Src/debug_log.o ./Core/Src/debug_log.su ./Core/Src/ds_cnn_quantized_data.cyclo ./Core/Src/ds_cnn_quantized_data.d ./Core/Src/ds_cnn_quantized_data.o ./Core/Src/ds_cnn_quantized_data.su ./Core/Src/main.cyclo ./Core/Src/main.d ./Core/Src/main.o ./Core/Src/main.su ./Core/Src/stm32f7xx_hal_msp.cyclo ./Core/Src/stm32f7xx_hal_msp.d ./Core/Src/stm32f7xx_hal_msp.o ./Core/Src/stm32f7xx_hal_msp.su ./Core/Src/stm32f7xx_it.cyclo ./Core/Src/stm32f7xx_it.d ./Core/Src/stm32f7xx_it.o ./Core/Src/stm32f7xx_it.su ./Core/Src/syscalls.cyclo ./Core/Src/syscalls.d ./Core/Src/syscalls.o ./Core/Src/syscalls.su ./Core/Src/sysmem.cyclo ./Core/Src/sysmem.d ./Core/Src/sysmem.o ./Core/Src/sysmem.su ./Core/Src/system_stm32f7xx.cyclo ./Core/Src/system_stm32f7xx.d ./Core/Src/system_stm32f7xx.o ./Core/Src/system_stm32f7xx.su

.PHONY: clean-Core-2f-Src

