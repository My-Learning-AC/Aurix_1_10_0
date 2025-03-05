################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Libraries/iLLD/TC4DA/CpuGeneric/Egtm/Atom/Pwm/IfxEgtm_Atom_Pwm.c 

COMPILED_SRCS += \
Libraries/iLLD/TC4DA/CpuGeneric/Egtm/Atom/Pwm/IfxEgtm_Atom_Pwm.src 

C_DEPS += \
Libraries/iLLD/TC4DA/CpuGeneric/Egtm/Atom/Pwm/IfxEgtm_Atom_Pwm.d 

OBJS += \
Libraries/iLLD/TC4DA/CpuGeneric/Egtm/Atom/Pwm/IfxEgtm_Atom_Pwm.o 


# Each subdirectory must supply rules for building sources it contributes
Libraries/iLLD/TC4DA/CpuGeneric/Egtm/Atom/Pwm/IfxEgtm_Atom_Pwm.src: ../Libraries/iLLD/TC4DA/CpuGeneric/Egtm/Atom/Pwm/IfxEgtm_Atom_Pwm.c Libraries/iLLD/TC4DA/CpuGeneric/Egtm/Atom/Pwm/subdir.mk
	cctc -cs --dep-file="$(*F).d" --misrac-version=2004 -D__CPU__=tc49x "-fC:/Users/KumarDharani/Documents/Aurix_Projects/Projects/Silicon_Details_TC4D7_Lite_Kit/TriCore Debug (TASKING)/TASKING_C_C___Compiler-Include_paths__-I_.opt" --iso=99 --c++14 --language=+volatile --exceptions --anachronisms --fp-model=2 -O0 --tradeoff=4 --compact-max-size=200 -g -Ctc49x -Y0 -N0 -Z0 --user-mode=hypervisor -o "$@" "$<"
Libraries/iLLD/TC4DA/CpuGeneric/Egtm/Atom/Pwm/IfxEgtm_Atom_Pwm.o: Libraries/iLLD/TC4DA/CpuGeneric/Egtm/Atom/Pwm/IfxEgtm_Atom_Pwm.src Libraries/iLLD/TC4DA/CpuGeneric/Egtm/Atom/Pwm/subdir.mk
	astc -Og -Os --no-warnings= --error-limit=42 --user-mode=hypervisor --core=tc1.8 -o  "$@" "$<"

clean: clean-Libraries-2f-iLLD-2f-TC4DA-2f-CpuGeneric-2f-Egtm-2f-Atom-2f-Pwm

clean-Libraries-2f-iLLD-2f-TC4DA-2f-CpuGeneric-2f-Egtm-2f-Atom-2f-Pwm:
	-$(RM) Libraries/iLLD/TC4DA/CpuGeneric/Egtm/Atom/Pwm/IfxEgtm_Atom_Pwm.d Libraries/iLLD/TC4DA/CpuGeneric/Egtm/Atom/Pwm/IfxEgtm_Atom_Pwm.o Libraries/iLLD/TC4DA/CpuGeneric/Egtm/Atom/Pwm/IfxEgtm_Atom_Pwm.src

.PHONY: clean-Libraries-2f-iLLD-2f-TC4DA-2f-CpuGeneric-2f-Egtm-2f-Atom-2f-Pwm

