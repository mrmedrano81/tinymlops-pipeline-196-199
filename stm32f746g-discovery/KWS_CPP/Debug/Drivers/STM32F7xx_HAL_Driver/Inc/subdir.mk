################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (10.3-2021.10)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Drivers/STM32F7xx_HAL_Driver/Inc/stm32f7xx_ll_fmc.c 

C_DEPS += \
./Drivers/STM32F7xx_HAL_Driver/Inc/stm32f7xx_ll_fmc.d 

OBJS += \
./Drivers/STM32F7xx_HAL_Driver/Inc/stm32f7xx_ll_fmc.o 


# Each subdirectory must supply rules for building sources it contributes
Drivers/STM32F7xx_HAL_Driver/Inc/%.o Drivers/STM32F7xx_HAL_Driver/Inc/%.su Drivers/STM32F7xx_HAL_Driver/Inc/%.cyclo: ../Drivers/STM32F7xx_HAL_Driver/Inc/%.c Drivers/STM32F7xx_HAL_Driver/Inc/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m7 -std=gnu11 -g3 -DDEBUG -DUSE_HAL_DRIVER -DSTM32F746xx -c -I../Core/Inc -I../Drivers/STM32F7xx_HAL_Driver/Inc -I../Drivers/STM32F7xx_HAL_Driver/Inc/Legacy -I../Drivers/CMSIS/Device/ST/STM32F7xx/Include -I../Drivers/CMSIS/Include -I"/home/michael/STM32CubeIDE/workspace_1.12.0/KWS_CPP/tensorflow" -I"/home/michael/STM32CubeIDE/workspace_1.12.0/KWS_CPP/third_party" -I"/home/michael/STM32CubeIDE/workspace_1.12.0/KWS_CPP/third_party/flatbuffers/include" -I"/home/michael/STM32CubeIDE/workspace_1.12.0/KWS_CPP/third_party/gemmlowp" -I"/home/michael/STM32CubeIDE/workspace_1.12.0/KWS_CPP/third_party/ruy" -I"/home/michael/STM32CubeIDE/workspace_1.12.0/KWS_CPP/Drivers/BSP/STM32746G_DISCOVERY" -I"/home/michael/STM32CubeIDE/workspace_1.12.0/KWS_CPP/Drivers/BSP/Components" -I"/home/michael/STM32CubeIDE/workspace_1.12.0/KWS_CPP/Core/Startup" -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -fcyclomatic-complexity -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv5-sp-d16 -mfloat-abi=hard -mthumb -o "$@"

clean: clean-Drivers-2f-STM32F7xx_HAL_Driver-2f-Inc

clean-Drivers-2f-STM32F7xx_HAL_Driver-2f-Inc:
	-$(RM) ./Drivers/STM32F7xx_HAL_Driver/Inc/stm32f7xx_ll_fmc.cyclo ./Drivers/STM32F7xx_HAL_Driver/Inc/stm32f7xx_ll_fmc.d ./Drivers/STM32F7xx_HAL_Driver/Inc/stm32f7xx_ll_fmc.o ./Drivers/STM32F7xx_HAL_Driver/Inc/stm32f7xx_ll_fmc.su

.PHONY: clean-Drivers-2f-STM32F7xx_HAL_Driver-2f-Inc

