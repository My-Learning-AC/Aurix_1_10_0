################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Libraries/iLLD/TC4DA/Tricore/Can/Can/IfxCan_Can.c 

COMPILED_SRCS += \
Libraries/iLLD/TC4DA/Tricore/Can/Can/IfxCan_Can.src 

C_DEPS += \
Libraries/iLLD/TC4DA/Tricore/Can/Can/IfxCan_Can.d 

OBJS += \
Libraries/iLLD/TC4DA/Tricore/Can/Can/IfxCan_Can.o 


# Each subdirectory must supply rules for building sources it contributes
Libraries/iLLD/TC4DA/Tricore/Can/Can/IfxCan_Can.src: ../Libraries/iLLD/TC4DA/Tricore/Can/Can/IfxCan_Can.c Libraries/iLLD/TC4DA/Tricore/Can/Can/subdir.mk
	cctc -cs --dep-file="$(*F).d" --misrac-version=2004 -D__CPU__=tc49x "-fC:/Users/KumarDharani/Documents/Aurix_Projects/Projects/TC4D7_CAN/TriCore Debug (TASKING)/TASKING_C_C___Compiler-Include_paths__-I_.opt" --iso=99 --c++14 --language=+volatile --exceptions --anachronisms --fp-model=2 -O0 --tradeoff=4 --compact-max-size=200 -g -Ctc49x -Y0 -N0 -Z0 --user-mode=hypervisor -o "$@" "$<"
Libraries/iLLD/TC4DA/Tricore/Can/Can/IfxCan_Can.o: Libraries/iLLD/TC4DA/Tricore/Can/Can/IfxCan_Can.src Libraries/iLLD/TC4DA/Tricore/Can/Can/subdir.mk
	astc -Og -Os --no-warnings= --error-limit=42 --user-mode=hypervisor --core=tc1.8 -o  "$@" "$<"

clean: clean-Libraries-2f-iLLD-2f-TC4DA-2f-Tricore-2f-Can-2f-Can

clean-Libraries-2f-iLLD-2f-TC4DA-2f-Tricore-2f-Can-2f-Can:
	-$(RM) Libraries/iLLD/TC4DA/Tricore/Can/Can/IfxCan_Can.d Libraries/iLLD/TC4DA/Tricore/Can/Can/IfxCan_Can.o Libraries/iLLD/TC4DA/Tricore/Can/Can/IfxCan_Can.src

.PHONY: clean-Libraries-2f-iLLD-2f-TC4DA-2f-Tricore-2f-Can-2f-Can

