################################################################################
# Automatically-generated file. Do not edit!
################################################################################

-include ../makefile.init

RM := rm -rf

# All of the sources participating in the build are defined here
-include sources.mk
-include Startup/subdir.mk
-include Src/subdir.mk
-include subdir.mk
-include objects.mk

ifneq ($(MAKECMDGOALS),clean)
ifneq ($(strip $(C_DEPS)),)
-include $(C_DEPS)
endif
endif

-include ../makefile.defs

# Add inputs and outputs from these tool invocations to the build variables 
EXECUTABLES += \
0001_helloworld.elf \

SIZE_OUTPUT += \
default.size.stdout \

OBJDUMP_LIST += \
0001_helloworld.list \

OBJCOPY_BIN += \
0001_helloworld.bin \


# All Target
all: 0001_helloworld.elf secondary-outputs

# Tool invocations
0001_helloworld.elf: $(OBJS) $(USER_OBJS) /home/optimusprime/Documents/Embedded-C/My_workspace/target/0001_helloworld/STM32F407VGTX_FLASH.ld
	arm-none-eabi-gcc -o "0001_helloworld.elf" @"objects.list" $(USER_OBJS) $(LIBS) -mcpu=cortex-m4 -T"/home/optimusprime/Documents/Embedded-C/My_workspace/target/0001_helloworld/STM32F407VGTX_FLASH.ld" --specs=nosys.specs -Wl,-Map="0001_helloworld.map" -Wl,--gc-sections -static --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -Wl,--start-group -lc -lm -Wl,--end-group
	@echo 'Finished building target: $@'
	@echo ' '

default.size.stdout: $(EXECUTABLES)
	arm-none-eabi-size  $(EXECUTABLES)
	@echo 'Finished building: $@'
	@echo ' '

0001_helloworld.list: $(EXECUTABLES)
	arm-none-eabi-objdump -h -S $(EXECUTABLES) > "0001_helloworld.list"
	@echo 'Finished building: $@'
	@echo ' '

0001_helloworld.bin: $(EXECUTABLES)
	arm-none-eabi-objcopy  -O binary $(EXECUTABLES) "0001_helloworld.bin"
	@echo 'Finished building: $@'
	@echo ' '

# Other Targets
clean:
	-$(RM) *
	-@echo ' '

secondary-outputs: $(SIZE_OUTPUT) $(OBJDUMP_LIST) $(OBJCOPY_BIN)

.PHONY: all clean dependents
.SECONDARY:

-include ../makefile.targets
