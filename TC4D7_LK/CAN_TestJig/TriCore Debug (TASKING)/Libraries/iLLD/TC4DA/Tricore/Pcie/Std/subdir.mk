################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Libraries/iLLD/TC4DA/Tricore/Pcie/Std/IfxPcie.c \
../Libraries/iLLD/TC4DA/Tricore/Pcie/Std/IfxPcieCap.c \
../Libraries/iLLD/TC4DA/Tricore/Pcie/Std/IfxPcieDevice.c \
../Libraries/iLLD/TC4DA/Tricore/Pcie/Std/IfxPcieDma.c \
../Libraries/iLLD/TC4DA/Tricore/Pcie/Std/IfxPcieEp.c \
../Libraries/iLLD/TC4DA/Tricore/Pcie/Std/IfxPcieRc.c 

COMPILED_SRCS += \
Libraries/iLLD/TC4DA/Tricore/Pcie/Std/IfxPcie.src \
Libraries/iLLD/TC4DA/Tricore/Pcie/Std/IfxPcieCap.src \
Libraries/iLLD/TC4DA/Tricore/Pcie/Std/IfxPcieDevice.src \
Libraries/iLLD/TC4DA/Tricore/Pcie/Std/IfxPcieDma.src \
Libraries/iLLD/TC4DA/Tricore/Pcie/Std/IfxPcieEp.src \
Libraries/iLLD/TC4DA/Tricore/Pcie/Std/IfxPcieRc.src 

C_DEPS += \
Libraries/iLLD/TC4DA/Tricore/Pcie/Std/IfxPcie.d \
Libraries/iLLD/TC4DA/Tricore/Pcie/Std/IfxPcieCap.d \
Libraries/iLLD/TC4DA/Tricore/Pcie/Std/IfxPcieDevice.d \
Libraries/iLLD/TC4DA/Tricore/Pcie/Std/IfxPcieDma.d \
Libraries/iLLD/TC4DA/Tricore/Pcie/Std/IfxPcieEp.d \
Libraries/iLLD/TC4DA/Tricore/Pcie/Std/IfxPcieRc.d 

OBJS += \
Libraries/iLLD/TC4DA/Tricore/Pcie/Std/IfxPcie.o \
Libraries/iLLD/TC4DA/Tricore/Pcie/Std/IfxPcieCap.o \
Libraries/iLLD/TC4DA/Tricore/Pcie/Std/IfxPcieDevice.o \
Libraries/iLLD/TC4DA/Tricore/Pcie/Std/IfxPcieDma.o \
Libraries/iLLD/TC4DA/Tricore/Pcie/Std/IfxPcieEp.o \
Libraries/iLLD/TC4DA/Tricore/Pcie/Std/IfxPcieRc.o 


# Each subdirectory must supply rules for building sources it contributes
Libraries/iLLD/TC4DA/Tricore/Pcie/Std/IfxPcie.src: ../Libraries/iLLD/TC4DA/Tricore/Pcie/Std/IfxPcie.c Libraries/iLLD/TC4DA/Tricore/Pcie/Std/subdir.mk
	cctc -cs --dep-file="$(*F).d" --misrac-version=2004 -D__CPU__=tc49x "-fC:/Users/KumarDharani/Documents/Aurix_Projects/Projects/TC4D7_CAN_TestJig/TriCore Debug (TASKING)/TASKING_C_C___Compiler-Include_paths__-I_.opt" --iso=99 --c++14 --language=+volatile --exceptions --anachronisms --fp-model=2 -O0 --tradeoff=4 --compact-max-size=200 -g -Ctc49x -Y0 -N0 -Z0 --user-mode=hypervisor -o "$@" "$<"
Libraries/iLLD/TC4DA/Tricore/Pcie/Std/IfxPcie.o: Libraries/iLLD/TC4DA/Tricore/Pcie/Std/IfxPcie.src Libraries/iLLD/TC4DA/Tricore/Pcie/Std/subdir.mk
	astc -Og -Os --no-warnings= --error-limit=42 --user-mode=hypervisor --core=tc1.8 -o  "$@" "$<"
Libraries/iLLD/TC4DA/Tricore/Pcie/Std/IfxPcieCap.src: ../Libraries/iLLD/TC4DA/Tricore/Pcie/Std/IfxPcieCap.c Libraries/iLLD/TC4DA/Tricore/Pcie/Std/subdir.mk
	cctc -cs --dep-file="$(*F).d" --misrac-version=2004 -D__CPU__=tc49x "-fC:/Users/KumarDharani/Documents/Aurix_Projects/Projects/TC4D7_CAN_TestJig/TriCore Debug (TASKING)/TASKING_C_C___Compiler-Include_paths__-I_.opt" --iso=99 --c++14 --language=+volatile --exceptions --anachronisms --fp-model=2 -O0 --tradeoff=4 --compact-max-size=200 -g -Ctc49x -Y0 -N0 -Z0 --user-mode=hypervisor -o "$@" "$<"
Libraries/iLLD/TC4DA/Tricore/Pcie/Std/IfxPcieCap.o: Libraries/iLLD/TC4DA/Tricore/Pcie/Std/IfxPcieCap.src Libraries/iLLD/TC4DA/Tricore/Pcie/Std/subdir.mk
	astc -Og -Os --no-warnings= --error-limit=42 --user-mode=hypervisor --core=tc1.8 -o  "$@" "$<"
Libraries/iLLD/TC4DA/Tricore/Pcie/Std/IfxPcieDevice.src: ../Libraries/iLLD/TC4DA/Tricore/Pcie/Std/IfxPcieDevice.c Libraries/iLLD/TC4DA/Tricore/Pcie/Std/subdir.mk
	cctc -cs --dep-file="$(*F).d" --misrac-version=2004 -D__CPU__=tc49x "-fC:/Users/KumarDharani/Documents/Aurix_Projects/Projects/TC4D7_CAN_TestJig/TriCore Debug (TASKING)/TASKING_C_C___Compiler-Include_paths__-I_.opt" --iso=99 --c++14 --language=+volatile --exceptions --anachronisms --fp-model=2 -O0 --tradeoff=4 --compact-max-size=200 -g -Ctc49x -Y0 -N0 -Z0 --user-mode=hypervisor -o "$@" "$<"
Libraries/iLLD/TC4DA/Tricore/Pcie/Std/IfxPcieDevice.o: Libraries/iLLD/TC4DA/Tricore/Pcie/Std/IfxPcieDevice.src Libraries/iLLD/TC4DA/Tricore/Pcie/Std/subdir.mk
	astc -Og -Os --no-warnings= --error-limit=42 --user-mode=hypervisor --core=tc1.8 -o  "$@" "$<"
Libraries/iLLD/TC4DA/Tricore/Pcie/Std/IfxPcieDma.src: ../Libraries/iLLD/TC4DA/Tricore/Pcie/Std/IfxPcieDma.c Libraries/iLLD/TC4DA/Tricore/Pcie/Std/subdir.mk
	cctc -cs --dep-file="$(*F).d" --misrac-version=2004 -D__CPU__=tc49x "-fC:/Users/KumarDharani/Documents/Aurix_Projects/Projects/TC4D7_CAN_TestJig/TriCore Debug (TASKING)/TASKING_C_C___Compiler-Include_paths__-I_.opt" --iso=99 --c++14 --language=+volatile --exceptions --anachronisms --fp-model=2 -O0 --tradeoff=4 --compact-max-size=200 -g -Ctc49x -Y0 -N0 -Z0 --user-mode=hypervisor -o "$@" "$<"
Libraries/iLLD/TC4DA/Tricore/Pcie/Std/IfxPcieDma.o: Libraries/iLLD/TC4DA/Tricore/Pcie/Std/IfxPcieDma.src Libraries/iLLD/TC4DA/Tricore/Pcie/Std/subdir.mk
	astc -Og -Os --no-warnings= --error-limit=42 --user-mode=hypervisor --core=tc1.8 -o  "$@" "$<"
Libraries/iLLD/TC4DA/Tricore/Pcie/Std/IfxPcieEp.src: ../Libraries/iLLD/TC4DA/Tricore/Pcie/Std/IfxPcieEp.c Libraries/iLLD/TC4DA/Tricore/Pcie/Std/subdir.mk
	cctc -cs --dep-file="$(*F).d" --misrac-version=2004 -D__CPU__=tc49x "-fC:/Users/KumarDharani/Documents/Aurix_Projects/Projects/TC4D7_CAN_TestJig/TriCore Debug (TASKING)/TASKING_C_C___Compiler-Include_paths__-I_.opt" --iso=99 --c++14 --language=+volatile --exceptions --anachronisms --fp-model=2 -O0 --tradeoff=4 --compact-max-size=200 -g -Ctc49x -Y0 -N0 -Z0 --user-mode=hypervisor -o "$@" "$<"
Libraries/iLLD/TC4DA/Tricore/Pcie/Std/IfxPcieEp.o: Libraries/iLLD/TC4DA/Tricore/Pcie/Std/IfxPcieEp.src Libraries/iLLD/TC4DA/Tricore/Pcie/Std/subdir.mk
	astc -Og -Os --no-warnings= --error-limit=42 --user-mode=hypervisor --core=tc1.8 -o  "$@" "$<"
Libraries/iLLD/TC4DA/Tricore/Pcie/Std/IfxPcieRc.src: ../Libraries/iLLD/TC4DA/Tricore/Pcie/Std/IfxPcieRc.c Libraries/iLLD/TC4DA/Tricore/Pcie/Std/subdir.mk
	cctc -cs --dep-file="$(*F).d" --misrac-version=2004 -D__CPU__=tc49x "-fC:/Users/KumarDharani/Documents/Aurix_Projects/Projects/TC4D7_CAN_TestJig/TriCore Debug (TASKING)/TASKING_C_C___Compiler-Include_paths__-I_.opt" --iso=99 --c++14 --language=+volatile --exceptions --anachronisms --fp-model=2 -O0 --tradeoff=4 --compact-max-size=200 -g -Ctc49x -Y0 -N0 -Z0 --user-mode=hypervisor -o "$@" "$<"
Libraries/iLLD/TC4DA/Tricore/Pcie/Std/IfxPcieRc.o: Libraries/iLLD/TC4DA/Tricore/Pcie/Std/IfxPcieRc.src Libraries/iLLD/TC4DA/Tricore/Pcie/Std/subdir.mk
	astc -Og -Os --no-warnings= --error-limit=42 --user-mode=hypervisor --core=tc1.8 -o  "$@" "$<"

clean: clean-Libraries-2f-iLLD-2f-TC4DA-2f-Tricore-2f-Pcie-2f-Std

clean-Libraries-2f-iLLD-2f-TC4DA-2f-Tricore-2f-Pcie-2f-Std:
	-$(RM) Libraries/iLLD/TC4DA/Tricore/Pcie/Std/IfxPcie.d Libraries/iLLD/TC4DA/Tricore/Pcie/Std/IfxPcie.o Libraries/iLLD/TC4DA/Tricore/Pcie/Std/IfxPcie.src Libraries/iLLD/TC4DA/Tricore/Pcie/Std/IfxPcieCap.d Libraries/iLLD/TC4DA/Tricore/Pcie/Std/IfxPcieCap.o Libraries/iLLD/TC4DA/Tricore/Pcie/Std/IfxPcieCap.src Libraries/iLLD/TC4DA/Tricore/Pcie/Std/IfxPcieDevice.d Libraries/iLLD/TC4DA/Tricore/Pcie/Std/IfxPcieDevice.o Libraries/iLLD/TC4DA/Tricore/Pcie/Std/IfxPcieDevice.src Libraries/iLLD/TC4DA/Tricore/Pcie/Std/IfxPcieDma.d Libraries/iLLD/TC4DA/Tricore/Pcie/Std/IfxPcieDma.o Libraries/iLLD/TC4DA/Tricore/Pcie/Std/IfxPcieDma.src Libraries/iLLD/TC4DA/Tricore/Pcie/Std/IfxPcieEp.d Libraries/iLLD/TC4DA/Tricore/Pcie/Std/IfxPcieEp.o Libraries/iLLD/TC4DA/Tricore/Pcie/Std/IfxPcieEp.src Libraries/iLLD/TC4DA/Tricore/Pcie/Std/IfxPcieRc.d Libraries/iLLD/TC4DA/Tricore/Pcie/Std/IfxPcieRc.o Libraries/iLLD/TC4DA/Tricore/Pcie/Std/IfxPcieRc.src

.PHONY: clean-Libraries-2f-iLLD-2f-TC4DA-2f-Tricore-2f-Pcie-2f-Std

