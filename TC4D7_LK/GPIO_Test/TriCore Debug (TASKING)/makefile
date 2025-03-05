################################################################################
# Automatically-generated file. Do not edit!
################################################################################

-include ../makefile.init

RM := rm -rf

# All of the sources participating in the build are defined here
-include sources.mk
-include Libraries/iLLD/TC4DA/Tricore/_Impl/subdir.mk
-include Libraries/iLLD/TC4DA/Tricore/Wtu/Std/subdir.mk
-include Libraries/iLLD/TC4DA/Tricore/Vmt/Std/subdir.mk
-include Libraries/iLLD/TC4DA/Tricore/Stm/Timer/subdir.mk
-include Libraries/iLLD/TC4DA/Tricore/Stm/Std/subdir.mk
-include Libraries/iLLD/TC4DA/Tricore/Smu/Std/subdir.mk
-include Libraries/iLLD/TC4DA/Tricore/Smm/Std/subdir.mk
-include Libraries/iLLD/TC4DA/Tricore/Pms/Std/subdir.mk
-include Libraries/iLLD/TC4DA/Tricore/Cpu/Trap/subdir.mk
-include Libraries/iLLD/TC4DA/Tricore/Cpu/Std/subdir.mk
-include Libraries/iLLD/TC4DA/CpuGeneric/_PinMap/subdir.mk
-include Libraries/iLLD/TC4DA/CpuGeneric/_Impl/subdir.mk
-include Libraries/iLLD/TC4DA/CpuGeneric/Src/Std/subdir.mk
-include Libraries/iLLD/TC4DA/CpuGeneric/Port/Std/subdir.mk
-include Libraries/iLLD/TC4DA/CpuGeneric/Egtm/Std/subdir.mk
-include Libraries/iLLD/TC4DA/CpuGeneric/Dma/Std/subdir.mk
-include Libraries/iLLD/TC4DA/CpuGeneric/Dma/Dma/subdir.mk
-include Libraries/iLLD/TC4DA/CpuGeneric/Clock/Std/subdir.mk
-include Libraries/iLLD/TC4DA/CpuGeneric/Ap/Std/subdir.mk
-include Libraries/iLLD/TC4DA/CpuGeneric/Adc/Tmadc/subdir.mk
-include Libraries/iLLD/TC4DA/CpuGeneric/Adc/Std/subdir.mk
-include Libraries/Service/CpuGeneric/SysSe/Time/subdir.mk
-include Libraries/Service/CpuGeneric/SysSe/Math/subdir.mk
-include Libraries/Service/CpuGeneric/SysSe/General/subdir.mk
-include Libraries/Service/CpuGeneric/SysSe/Comm/subdir.mk
-include Libraries/Service/CpuGeneric/SysSe/Bsp/subdir.mk
-include Libraries/Service/CpuGeneric/StdIf/subdir.mk
-include Libraries/Service/CpuGeneric/If/subdir.mk
-include Libraries/Infra/Ssw/TC4DA/Tricore/subdir.mk
-include Libraries/Infra/Platform/Tricore/Compilers/subdir.mk
-include Libraries/Infra/Ipc/Tricore/ipc/src/subdir.mk
-include Configurations/subdir.mk
-include subdir.mk
ifneq ($(MAKECMDGOALS),clean)
ifneq ($(strip $(C++_DEPS)),)
-include $(C++_DEPS)
endif
ifneq ($(strip $(CC_DEPS)),)
-include $(CC_DEPS)
endif
ifneq ($(strip $(CPP_DEPS)),)
-include $(CPP_DEPS)
endif
ifneq ($(strip $(CXX_DEPS)),)
-include $(CXX_DEPS)
endif
ifneq ($(strip $(C_DEPS)),)
-include $(C_DEPS)
endif
ifneq ($(strip $(C_UPPER_DEPS)),)
-include $(C_UPPER_DEPS)
endif
endif

-include ../makefile.defs

OPTIONAL_TOOL_DEPS := \
$(wildcard ../makefile.defs) \
$(wildcard ../makefile.init) \
$(wildcard ../makefile.targets) \


BUILD_ARTIFACT_NAME := GPIO_Test_Analog_n_Digital_Both
BUILD_ARTIFACT_EXTENSION := elf
BUILD_ARTIFACT_PREFIX :=
BUILD_ARTIFACT := $(BUILD_ARTIFACT_PREFIX)$(BUILD_ARTIFACT_NAME)$(if $(BUILD_ARTIFACT_EXTENSION),.$(BUILD_ARTIFACT_EXTENSION),)

# Add inputs and outputs from these tool invocations to the build variables 
SECONDARY_SIZE += \
GPIO_Test_Analog_n_Digital_Both.siz \


# All Target
all: main-build

# Main-build Target
main-build: GPIO_Test_Analog_n_Digital_Both.elf secondary-outputs

# Tool invocations
GPIO_Test_Analog_n_Digital_Both.elf: $(OBJS) makefile $(OPTIONAL_TOOL_DEPS)
	@echo 'Building target: $@'
	@echo 'Invoking: TASKING Linker'
	cctc --lsl-file="../Lcf_Tasking_Tricore_Tc.lsl" -Wl-Oc -Wl-OL -Wl-Ot -Wl-Ox -Wl-Oy -Wl--map-file="GPIO_Test_Analog_n_Digital_Both.map" -Wl-mc -Wl-mf -Wl-mi -Wl-mk -Wl-ml -Wl-mm -Wl-md -Wl-mr -Wl-mu --no-warnings= -Wl--error-limit=42 --fp-model=2 -lrt --lsl-core=vtc --exceptions --strict --anachronisms --force-c++ -Ctc49x -o"GPIO_Test_Analog_n_Digital_Both.elf" -Wl-o"GPIO_Test_Analog_n_Digital_Both.hex:IHEX" $(OBJS)
	@echo 'Finished building target: $@'
	@echo ' '

GPIO_Test_Analog_n_Digital_Both.siz: GPIO_Test_Analog_n_Digital_Both.elf makefile $(OPTIONAL_TOOL_DEPS)
	@echo 'Invoking: Print Size'
	elfsize  "GPIO_Test_Analog_n_Digital_Both.elf"
	@echo 'Finished building: $@'
	@echo ' '

# Other Targets
clean:
	-$(RM) GPIO_Test_Analog_n_Digital_Both.siz GPIO_Test_Analog_n_Digital_Both.elf
	-@echo ' '

secondary-outputs: $(SECONDARY_SIZE)

.PHONY: all clean dependents main-build

-include ../makefile.targets
