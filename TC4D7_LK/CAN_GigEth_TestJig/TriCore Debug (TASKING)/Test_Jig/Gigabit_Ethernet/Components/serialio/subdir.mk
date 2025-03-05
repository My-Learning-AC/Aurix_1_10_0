################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Test_Jig/Gigabit_Ethernet/Components/serialio/serialio.c 

COMPILED_SRCS += \
Test_Jig/Gigabit_Ethernet/Components/serialio/serialio.src 

C_DEPS += \
Test_Jig/Gigabit_Ethernet/Components/serialio/serialio.d 

OBJS += \
Test_Jig/Gigabit_Ethernet/Components/serialio/serialio.o 


# Each subdirectory must supply rules for building sources it contributes
Test_Jig/Gigabit_Ethernet/Components/serialio/serialio.src: ../Test_Jig/Gigabit_Ethernet/Components/serialio/serialio.c Test_Jig/Gigabit_Ethernet/Components/serialio/subdir.mk
	cctc -cs --dep-file="$(*F).d" --misrac-version=2004 -D__CPU__=tc49x -DIFX_PIN_PACKAGE_BGA292_COM -DCONFIG_DUT_BOARD -DCONFIG_BOARD_ETH_ENABLE -DCONFIG_BOARD_GETH_ENABLE -DCONFIG_BOARD_SERIALIO_ENABLE -DCONFIG_BOARD_LED_ENABLE -DIFX_SOLUTION_DESIGNER_GETH_ENABLE -DIFX_SOLUTION_DESIGNER_LETH_ENABLE "-fC:/Users/KumarDharani/Documents/Aurix_Projects/Projects/Aurix_TC4D7_Lite_Kit_CAN_GigEth_TestJig/TriCore Debug (TASKING)/TASKING_C_C___Compiler-Include_paths__-I_.opt" --iso=99 --c++14 --language=+volatile --exceptions --anachronisms --fp-model=2 -O0 --tradeoff=4 --compact-max-size=200 -g -Ctc49x -Y0 -N0 -Z0 --user-mode=hypervisor -o "$@" "$<"
Test_Jig/Gigabit_Ethernet/Components/serialio/serialio.o: Test_Jig/Gigabit_Ethernet/Components/serialio/serialio.src Test_Jig/Gigabit_Ethernet/Components/serialio/subdir.mk
	astc -Og -Os --no-warnings= --error-limit=42 --user-mode=hypervisor --core=tc1.8 -o  "$@" "$<"

clean: clean-Test_Jig-2f-Gigabit_Ethernet-2f-Components-2f-serialio

clean-Test_Jig-2f-Gigabit_Ethernet-2f-Components-2f-serialio:
	-$(RM) Test_Jig/Gigabit_Ethernet/Components/serialio/serialio.d Test_Jig/Gigabit_Ethernet/Components/serialio/serialio.o Test_Jig/Gigabit_Ethernet/Components/serialio/serialio.src

.PHONY: clean-Test_Jig-2f-Gigabit_Ethernet-2f-Components-2f-serialio

