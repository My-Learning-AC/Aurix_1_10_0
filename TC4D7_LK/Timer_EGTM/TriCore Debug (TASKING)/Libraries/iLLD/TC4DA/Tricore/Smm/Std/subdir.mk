################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Libraries/iLLD/TC4DA/Tricore/Smm/Std/IfxSmm.c \
../Libraries/iLLD/TC4DA/Tricore/Smm/Std/IfxSmmRst.c \
../Libraries/iLLD/TC4DA/Tricore/Smm/Std/IfxSmmSysMode.c 

COMPILED_SRCS += \
Libraries/iLLD/TC4DA/Tricore/Smm/Std/IfxSmm.src \
Libraries/iLLD/TC4DA/Tricore/Smm/Std/IfxSmmRst.src \
Libraries/iLLD/TC4DA/Tricore/Smm/Std/IfxSmmSysMode.src 

C_DEPS += \
Libraries/iLLD/TC4DA/Tricore/Smm/Std/IfxSmm.d \
Libraries/iLLD/TC4DA/Tricore/Smm/Std/IfxSmmRst.d \
Libraries/iLLD/TC4DA/Tricore/Smm/Std/IfxSmmSysMode.d 

OBJS += \
Libraries/iLLD/TC4DA/Tricore/Smm/Std/IfxSmm.o \
Libraries/iLLD/TC4DA/Tricore/Smm/Std/IfxSmmRst.o \
Libraries/iLLD/TC4DA/Tricore/Smm/Std/IfxSmmSysMode.o 


# Each subdirectory must supply rules for building sources it contributes
Libraries/iLLD/TC4DA/Tricore/Smm/Std/IfxSmm.src: ../Libraries/iLLD/TC4DA/Tricore/Smm/Std/IfxSmm.c Libraries/iLLD/TC4DA/Tricore/Smm/Std/subdir.mk
	cctc -cs --dep-file="$(*F).d" --misrac-version=2004 -D__CPU__=tc49x "-fC:/Users/KumarDharani/Documents/Aurix_Projects/Projects/EGTM_TC4D7/TriCore Debug (TASKING)/TASKING_C_C___Compiler-Include_paths__-I_.opt" --iso=99 --c++14 --language=+volatile --exceptions --anachronisms --fp-model=2 -O0 --tradeoff=4 --compact-max-size=200 -g -Ctc49x -Y0 -N0 -Z0 --user-mode=hypervisor -o "$@" "$<"
Libraries/iLLD/TC4DA/Tricore/Smm/Std/IfxSmm.o: Libraries/iLLD/TC4DA/Tricore/Smm/Std/IfxSmm.src Libraries/iLLD/TC4DA/Tricore/Smm/Std/subdir.mk
	astc -Og -Os --no-warnings= --error-limit=42 --user-mode=hypervisor --core=tc1.8 -o  "$@" "$<"
Libraries/iLLD/TC4DA/Tricore/Smm/Std/IfxSmmRst.src: ../Libraries/iLLD/TC4DA/Tricore/Smm/Std/IfxSmmRst.c Libraries/iLLD/TC4DA/Tricore/Smm/Std/subdir.mk
	cctc -cs --dep-file="$(*F).d" --misrac-version=2004 -D__CPU__=tc49x "-fC:/Users/KumarDharani/Documents/Aurix_Projects/Projects/EGTM_TC4D7/TriCore Debug (TASKING)/TASKING_C_C___Compiler-Include_paths__-I_.opt" --iso=99 --c++14 --language=+volatile --exceptions --anachronisms --fp-model=2 -O0 --tradeoff=4 --compact-max-size=200 -g -Ctc49x -Y0 -N0 -Z0 --user-mode=hypervisor -o "$@" "$<"
Libraries/iLLD/TC4DA/Tricore/Smm/Std/IfxSmmRst.o: Libraries/iLLD/TC4DA/Tricore/Smm/Std/IfxSmmRst.src Libraries/iLLD/TC4DA/Tricore/Smm/Std/subdir.mk
	astc -Og -Os --no-warnings= --error-limit=42 --user-mode=hypervisor --core=tc1.8 -o  "$@" "$<"
Libraries/iLLD/TC4DA/Tricore/Smm/Std/IfxSmmSysMode.src: ../Libraries/iLLD/TC4DA/Tricore/Smm/Std/IfxSmmSysMode.c Libraries/iLLD/TC4DA/Tricore/Smm/Std/subdir.mk
	cctc -cs --dep-file="$(*F).d" --misrac-version=2004 -D__CPU__=tc49x "-fC:/Users/KumarDharani/Documents/Aurix_Projects/Projects/EGTM_TC4D7/TriCore Debug (TASKING)/TASKING_C_C___Compiler-Include_paths__-I_.opt" --iso=99 --c++14 --language=+volatile --exceptions --anachronisms --fp-model=2 -O0 --tradeoff=4 --compact-max-size=200 -g -Ctc49x -Y0 -N0 -Z0 --user-mode=hypervisor -o "$@" "$<"
Libraries/iLLD/TC4DA/Tricore/Smm/Std/IfxSmmSysMode.o: Libraries/iLLD/TC4DA/Tricore/Smm/Std/IfxSmmSysMode.src Libraries/iLLD/TC4DA/Tricore/Smm/Std/subdir.mk
	astc -Og -Os --no-warnings= --error-limit=42 --user-mode=hypervisor --core=tc1.8 -o  "$@" "$<"

clean: clean-Libraries-2f-iLLD-2f-TC4DA-2f-Tricore-2f-Smm-2f-Std

clean-Libraries-2f-iLLD-2f-TC4DA-2f-Tricore-2f-Smm-2f-Std:
	-$(RM) Libraries/iLLD/TC4DA/Tricore/Smm/Std/IfxSmm.d Libraries/iLLD/TC4DA/Tricore/Smm/Std/IfxSmm.o Libraries/iLLD/TC4DA/Tricore/Smm/Std/IfxSmm.src Libraries/iLLD/TC4DA/Tricore/Smm/Std/IfxSmmRst.d Libraries/iLLD/TC4DA/Tricore/Smm/Std/IfxSmmRst.o Libraries/iLLD/TC4DA/Tricore/Smm/Std/IfxSmmRst.src Libraries/iLLD/TC4DA/Tricore/Smm/Std/IfxSmmSysMode.d Libraries/iLLD/TC4DA/Tricore/Smm/Std/IfxSmmSysMode.o Libraries/iLLD/TC4DA/Tricore/Smm/Std/IfxSmmSysMode.src

.PHONY: clean-Libraries-2f-iLLD-2f-TC4DA-2f-Tricore-2f-Smm-2f-Std

