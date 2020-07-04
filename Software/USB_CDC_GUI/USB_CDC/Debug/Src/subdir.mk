################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Src/gpio.c \
../Src/main.c \
../Src/stm32l4xx_hal_msp.c \
../Src/stm32l4xx_it.c \
../Src/sys.c \
../Src/syscalls.c \
../Src/system_stm32l4xx.c \
../Src/tim.c \
../Src/usart.c \
../Src/usb_device.c \
../Src/usbd_cdc_if.c \
../Src/usbd_conf.c \
../Src/usbd_desc.c 

OBJS += \
./Src/gpio.o \
./Src/main.o \
./Src/stm32l4xx_hal_msp.o \
./Src/stm32l4xx_it.o \
./Src/sys.o \
./Src/syscalls.o \
./Src/system_stm32l4xx.o \
./Src/tim.o \
./Src/usart.o \
./Src/usb_device.o \
./Src/usbd_cdc_if.o \
./Src/usbd_conf.o \
./Src/usbd_desc.o 

C_DEPS += \
./Src/gpio.d \
./Src/main.d \
./Src/stm32l4xx_hal_msp.d \
./Src/stm32l4xx_it.d \
./Src/sys.d \
./Src/syscalls.d \
./Src/system_stm32l4xx.d \
./Src/tim.d \
./Src/usart.d \
./Src/usb_device.d \
./Src/usbd_cdc_if.d \
./Src/usbd_conf.d \
./Src/usbd_desc.d 


# Each subdirectory must supply rules for building sources it contributes
Src/%.o: ../Src/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: MCU GCC Compiler'
	@echo $(PWD)
	arm-none-eabi-gcc -mcpu=cortex-m4 -mthumb -mfloat-abi=hard -mfpu=fpv4-sp-d16 '-D__weak=__attribute__((weak))' '-D__packed=__attribute__((__packed__))' -DUSE_HAL_DRIVER -DSTM32L4R5xx -I"C:/Users/PC/Desktop/New folder/STM32/USB_CDC/Inc" -I"C:/Users/PC/Desktop/New folder/STM32/USB_CDC/Drivers/STM32L4xx_HAL_Driver/Inc" -I"C:/Users/PC/Desktop/New folder/STM32/USB_CDC/Drivers/STM32L4xx_HAL_Driver/Inc/Legacy" -I"C:/Users/PC/Desktop/New folder/STM32/USB_CDC/Middlewares/ST/STM32_USB_Device_Library/Core/Inc" -I"C:/Users/PC/Desktop/New folder/STM32/USB_CDC/Middlewares/ST/STM32_USB_Device_Library/Class/CDC/Inc" -I"C:/Users/PC/Desktop/New folder/STM32/USB_CDC/Drivers/CMSIS/Device/ST/STM32L4xx/Include" -I"C:/Users/PC/Desktop/New folder/STM32/USB_CDC/Drivers/CMSIS/Include"  -Og -g3 -Wall -fmessage-length=0 -ffunction-sections -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


