################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Libraries/iLLD/TC4DA/Tricore/Hsphy/Hsphy/IfxHsphy_Hsphy.c 

COMPILED_SRCS += \
Libraries/iLLD/TC4DA/Tricore/Hsphy/Hsphy/IfxHsphy_Hsphy.src 

C_DEPS += \
Libraries/iLLD/TC4DA/Tricore/Hsphy/Hsphy/IfxHsphy_Hsphy.d 

OBJS += \
Libraries/iLLD/TC4DA/Tricore/Hsphy/Hsphy/IfxHsphy_Hsphy.o 


# Each subdirectory must supply rules for building sources it contributes
Libraries/iLLD/TC4DA/Tricore/Hsphy/Hsphy/IfxHsphy_Hsphy.src: ../Libraries/iLLD/TC4DA/Tricore/Hsphy/Hsphy/IfxHsphy_Hsphy.c Libraries/iLLD/TC4DA/Tricore/Hsphy/Hsphy/subdir.mk
	cctc -cs --dep-file="$(*F).d" --misrac-version=2004 -D__CPU__=tc49x "-fC:/Users/KumarDharani/Documents/Aurix_Projects/Projects/TC4D7_CAN_TestJig/TriCore Debug (TASKING)/TASKING_C_C___Compiler-Include_paths__-I_.opt" --iso=99 --c++14 --language=+volatile --exceptions --anachronisms --fp-model=2 -O0 --tradeoff=4 --compact-max-size=200 -g -Ctc49x -Y0 -N0 -Z0 --user-mode=hypervisor -o "$@" "$<"
Libraries/iLLD/TC4DA/Tricore/Hsphy/Hsphy/IfxHsphy_Hsphy.o: Libraries/iLLD/TC4DA/Tricore/Hsphy/Hsphy/IfxHsphy_Hsphy.src Libraries/iLLD/TC4DA/Tricore/Hsphy/Hsphy/subdir.mk
	astc -Og -Os --no-warnings= --error-limit=42 --user-mode=hypervisor --core=tc1.8 -o  "$@" "$<"

clean: clean-Libraries-2f-iLLD-2f-TC4DA-2f-Tricore-2f-Hsphy-2f-Hsphy

clean-Libraries-2f-iLLD-2f-TC4DA-2f-Tricore-2f-Hsphy-2f-Hsphy:
	-$(RM) Libraries/iLLD/TC4DA/Tricore/Hsphy/Hsphy/IfxHsphy_Hsphy.d Libraries/iLLD/TC4DA/Tricore/Hsphy/Hsphy/IfxHsphy_Hsphy.o Libraries/iLLD/TC4DA/Tricore/Hsphy/Hsphy/IfxHsphy_Hsphy.src

.PHONY: clean-Libraries-2f-iLLD-2f-TC4DA-2f-Tricore-2f-Hsphy-2f-Hsphy

