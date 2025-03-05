################################################################################
# Automatically-generated file. Do not edit!
################################################################################

-include ../makefile.init

RM := rm -rf

# All of the sources participating in the build are defined here
-include sources.mk
-include Test_Jig/Gigabit_Ethernet/Components/stm/subdir.mk
-include Test_Jig/Gigabit_Ethernet/Components/simio/subdir.mk
-include Test_Jig/Gigabit_Ethernet/Components/serialio/subdir.mk
-include Test_Jig/Gigabit_Ethernet/Components/phy/subdir.mk
-include Test_Jig/Gigabit_Ethernet/Components/led/subdir.mk
-include Test_Jig/Gigabit_Ethernet/Components/hsphy/subdir.mk
-include Test_Jig/Gigabit_Ethernet/Components/geth/subdir.mk
-include Test_Jig/Gigabit_Ethernet/Components/SolutionDesigner/subdir.mk
-include Test_Jig/Gigabit_Ethernet/Components/subdir.mk
-include Test_Jig/Gigabit_Ethernet/Board/subdir.mk
-include Test_Jig/subdir.mk
-include Libraries/iLLD/TC4DA/Tricore/_PinMap/subdir.mk
-include Libraries/iLLD/TC4DA/Tricore/_Lib/DataHandling/subdir.mk
-include Libraries/iLLD/TC4DA/Tricore/_Impl/subdir.mk
-include Libraries/iLLD/TC4DA/Tricore/Wtu/Std/subdir.mk
-include Libraries/iLLD/TC4DA/Tricore/Stm/Timer/subdir.mk
-include Libraries/iLLD/TC4DA/Tricore/Stm/Std/subdir.mk
-include Libraries/iLLD/TC4DA/Tricore/Smu/Std/subdir.mk
-include Libraries/iLLD/TC4DA/Tricore/Hsphy/Std/subdir.mk
-include Libraries/iLLD/TC4DA/Tricore/Hsphy/Hsphy/subdir.mk
-include Libraries/iLLD/TC4DA/Tricore/Geth/Std/subdir.mk
-include Libraries/iLLD/TC4DA/Tricore/Geth/Eth/subdir.mk
-include Libraries/iLLD/TC4DA/Tricore/Cpu/Trap/subdir.mk
-include Libraries/iLLD/TC4DA/Tricore/Cpu/Std/subdir.mk
-include Libraries/iLLD/TC4DA/Tricore/Cpu/Irq/subdir.mk
-include Libraries/iLLD/TC4DA/Tricore/Can/Std/subdir.mk
-include Libraries/iLLD/TC4DA/Tricore/Can/Can/subdir.mk
-include Libraries/iLLD/TC4DA/CpuGeneric/_PinMap/subdir.mk
-include Libraries/iLLD/TC4DA/CpuGeneric/_Impl/subdir.mk
-include Libraries/iLLD/TC4DA/CpuGeneric/Src/Std/subdir.mk
-include Libraries/iLLD/TC4DA/CpuGeneric/Port/Std/subdir.mk
-include Libraries/iLLD/TC4DA/CpuGeneric/Egtm/Std/subdir.mk
-include Libraries/iLLD/TC4DA/CpuGeneric/Clock/Std/subdir.mk
-include Libraries/iLLD/TC4DA/CpuGeneric/Asclin/Std/subdir.mk
-include Libraries/iLLD/TC4DA/CpuGeneric/Asclin/Asc/subdir.mk
-include Libraries/iLLD/TC4DA/CpuGeneric/Ap/Std/subdir.mk
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


BUILD_ARTIFACT_NAME := Aurix_TC4D7_Lite_Kit_CAN_GigEth_TestJig
BUILD_ARTIFACT_EXTENSION := elf
BUILD_ARTIFACT_PREFIX :=
BUILD_ARTIFACT := $(BUILD_ARTIFACT_PREFIX)$(BUILD_ARTIFACT_NAME)$(if $(BUILD_ARTIFACT_EXTENSION),.$(BUILD_ARTIFACT_EXTENSION),)

# Add inputs and outputs from these tool invocations to the build variables 
SECONDARY_SIZE += \
Aurix_TC4D7_Lite_Kit_CAN_GigEth_TestJig.siz \


# All Target
all: main-build

# Main-build Target
main-build: Aurix_TC4D7_Lite_Kit_CAN_GigEth_TestJig.elf secondary-outputs

# Tool invocations
Aurix_TC4D7_Lite_Kit_CAN_GigEth_TestJig.elf: $(OBJS) makefile $(OPTIONAL_TOOL_DEPS)
	@echo 'Building target: $@'
	@echo 'Invoking: TASKING Linker'
	cctc --lsl-file="../Lcf_Tasking_Tricore_Tc.lsl" -Wl-Oc -Wl-OL -Wl-Ot -Wl-Ox -Wl-Oy -Wl--map-file="Aurix_TC4D7_Lite_Kit_CAN_GigEth_TestJig.map" -Wl-mc -Wl-mf -Wl-mi -Wl-mk -Wl-ml -Wl-mm -Wl-md -Wl-mr -Wl-mu --no-warnings= -Wl--error-limit=42 --fp-model=2 -lrt --lsl-core=vtc --exceptions --strict --anachronisms --force-c++ -Ctc49x -o"Aurix_TC4D7_Lite_Kit_CAN_GigEth_TestJig.elf" -Wl-o"Aurix_TC4D7_Lite_Kit_CAN_GigEth_TestJig.hex:IHEX" $(OBJS)
	@echo 'Finished building target: $@'
	@echo ' '

Aurix_TC4D7_Lite_Kit_CAN_GigEth_TestJig.siz: Aurix_TC4D7_Lite_Kit_CAN_GigEth_TestJig.elf makefile $(OPTIONAL_TOOL_DEPS)
	@echo 'Invoking: Print Size'
	elfsize  "Aurix_TC4D7_Lite_Kit_CAN_GigEth_TestJig.elf"
	@echo 'Finished building: $@'
	@echo ' '

# Other Targets
clean:
	-$(RM) Aurix_TC4D7_Lite_Kit_CAN_GigEth_TestJig.siz Aurix_TC4D7_Lite_Kit_CAN_GigEth_TestJig.elf
	-@echo ' '

secondary-outputs: $(SECONDARY_SIZE)

.PHONY: all clean dependents main-build

-include ../makefile.targets
