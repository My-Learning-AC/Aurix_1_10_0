################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Libraries/iLLD/TC4DA/Tricore/Pcie/Lib/Dma/IfxPcieLib_Dma.c 

COMPILED_SRCS += \
Libraries/iLLD/TC4DA/Tricore/Pcie/Lib/Dma/IfxPcieLib_Dma.src 

C_DEPS += \
Libraries/iLLD/TC4DA/Tricore/Pcie/Lib/Dma/IfxPcieLib_Dma.d 

OBJS += \
Libraries/iLLD/TC4DA/Tricore/Pcie/Lib/Dma/IfxPcieLib_Dma.o 


# Each subdirectory must supply rules for building sources it contributes
Libraries/iLLD/TC4DA/Tricore/Pcie/Lib/Dma/IfxPcieLib_Dma.src: ../Libraries/iLLD/TC4DA/Tricore/Pcie/Lib/Dma/IfxPcieLib_Dma.c Libraries/iLLD/TC4DA/Tricore/Pcie/Lib/Dma/subdir.mk
	cctc -cs --dep-file="$(*F).d" --misrac-version=2004 -D__CPU__=tc49x "-fC:/Users/KumarDharani/Documents/Aurix_Projects/Projects/Silicon_Details_TC4D7_Lite_Kit/TriCore Debug (TASKING)/TASKING_C_C___Compiler-Include_paths__-I_.opt" --iso=99 --c++14 --language=+volatile --exceptions --anachronisms --fp-model=2 -O0 --tradeoff=4 --compact-max-size=200 -g -Ctc49x -Y0 -N0 -Z0 --user-mode=hypervisor -o "$@" "$<"
Libraries/iLLD/TC4DA/Tricore/Pcie/Lib/Dma/IfxPcieLib_Dma.o: Libraries/iLLD/TC4DA/Tricore/Pcie/Lib/Dma/IfxPcieLib_Dma.src Libraries/iLLD/TC4DA/Tricore/Pcie/Lib/Dma/subdir.mk
	astc -Og -Os --no-warnings= --error-limit=42 --user-mode=hypervisor --core=tc1.8 -o  "$@" "$<"

clean: clean-Libraries-2f-iLLD-2f-TC4DA-2f-Tricore-2f-Pcie-2f-Lib-2f-Dma

clean-Libraries-2f-iLLD-2f-TC4DA-2f-Tricore-2f-Pcie-2f-Lib-2f-Dma:
	-$(RM) Libraries/iLLD/TC4DA/Tricore/Pcie/Lib/Dma/IfxPcieLib_Dma.d Libraries/iLLD/TC4DA/Tricore/Pcie/Lib/Dma/IfxPcieLib_Dma.o Libraries/iLLD/TC4DA/Tricore/Pcie/Lib/Dma/IfxPcieLib_Dma.src

.PHONY: clean-Libraries-2f-iLLD-2f-TC4DA-2f-Tricore-2f-Pcie-2f-Lib-2f-Dma

