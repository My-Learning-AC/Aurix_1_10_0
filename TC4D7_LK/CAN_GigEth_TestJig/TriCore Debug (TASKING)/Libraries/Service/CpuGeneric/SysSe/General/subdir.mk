################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Libraries/Service/CpuGeneric/SysSe/General/Ifx_GlobalResources.c 

COMPILED_SRCS += \
Libraries/Service/CpuGeneric/SysSe/General/Ifx_GlobalResources.src 

C_DEPS += \
Libraries/Service/CpuGeneric/SysSe/General/Ifx_GlobalResources.d 

OBJS += \
Libraries/Service/CpuGeneric/SysSe/General/Ifx_GlobalResources.o 


# Each subdirectory must supply rules for building sources it contributes
Libraries/Service/CpuGeneric/SysSe/General/Ifx_GlobalResources.src: ../Libraries/Service/CpuGeneric/SysSe/General/Ifx_GlobalResources.c Libraries/Service/CpuGeneric/SysSe/General/subdir.mk
	cctc -cs --dep-file="$(*F).d" --misrac-version=2004 -D__CPU__=tc49x -DIFX_PIN_PACKAGE_BGA292_COM -DCONFIG_DUT_BOARD -DCONFIG_BOARD_ETH_ENABLE -DCONFIG_BOARD_GETH_ENABLE -DCONFIG_BOARD_SERIALIO_ENABLE -DCONFIG_BOARD_LED_ENABLE -DIFX_SOLUTION_DESIGNER_GETH_ENABLE -DIFX_SOLUTION_DESIGNER_LETH_ENABLE "-fC:/Users/KumarDharani/Documents/Aurix_Projects/Projects/Aurix_TC4D7_Lite_Kit_CAN_GigEth_TestJig/TriCore Debug (TASKING)/TASKING_C_C___Compiler-Include_paths__-I_.opt" --iso=99 --c++14 --language=+volatile --exceptions --anachronisms --fp-model=2 -O0 --tradeoff=4 --compact-max-size=200 -g -Ctc49x -Y0 -N0 -Z0 --user-mode=hypervisor -o "$@" "$<"
Libraries/Service/CpuGeneric/SysSe/General/Ifx_GlobalResources.o: Libraries/Service/CpuGeneric/SysSe/General/Ifx_GlobalResources.src Libraries/Service/CpuGeneric/SysSe/General/subdir.mk
	astc -Og -Os --no-warnings= --error-limit=42 --user-mode=hypervisor --core=tc1.8 -o  "$@" "$<"

clean: clean-Libraries-2f-Service-2f-CpuGeneric-2f-SysSe-2f-General

clean-Libraries-2f-Service-2f-CpuGeneric-2f-SysSe-2f-General:
	-$(RM) Libraries/Service/CpuGeneric/SysSe/General/Ifx_GlobalResources.d Libraries/Service/CpuGeneric/SysSe/General/Ifx_GlobalResources.o Libraries/Service/CpuGeneric/SysSe/General/Ifx_GlobalResources.src

.PHONY: clean-Libraries-2f-Service-2f-CpuGeneric-2f-SysSe-2f-General

