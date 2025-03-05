################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
"../mtp/Gigabit Ethernet/Board/board.c" 

COMPILED_SRCS += \
"mtp/Gigabit Ethernet/Board/board.src" 

C_DEPS += \
"mtp/Gigabit Ethernet/Board/board.d" 

OBJS += \
"mtp/Gigabit Ethernet/Board/board.o" 


# Each subdirectory must supply rules for building sources it contributes
"mtp/Gigabit Ethernet/Board/board.src": "../mtp/Gigabit Ethernet/Board/board.c" "mtp/Gigabit Ethernet/Board/subdir.mk"
	cctc -cs --dep-file="$(*F).d" --misrac-version=2004 -D__CPU__=tc49x -DIFX_PIN_PACKAGE_BGA292_COM -DCONFIG_DUT_BOARD -DCONFIG_BOARD_ETH_ENABLE -DCONFIG_BOARD_GETH_ENABLE -DCONFIG_BOARD_SERIALIO_ENABLE -DCONFIG_BOARD_LED_ENABLE -DIFX_SOLUTION_DESIGNER_GETH_ENABLE -DIFX_SOLUTION_DESIGNER_LETH_ENABLE "-fC:/Users/KumarDharani/Documents/Aurix_Projects/Projects/Aurix_TC4D7_Lite_Kit_MTP/TriCore Debug (TASKING)/TASKING_C_C___Compiler-Include_paths__-I_.opt" --iso=99 --c++14 --language=+volatile --exceptions --anachronisms --fp-model=2 -O0 --tradeoff=4 --compact-max-size=200 -g -Ctc49x -Y0 -N0 -Z0 --user-mode=hypervisor -o "$@" "$<"
"mtp/Gigabit Ethernet/Board/board.o": "mtp/Gigabit Ethernet/Board/board.src" "mtp/Gigabit Ethernet/Board/subdir.mk"
	astc -Og -Os --no-warnings= --error-limit=42 --user-mode=hypervisor --core=tc1.8 -o  "$@" "$<"

clean: clean-mtp-2f-Gigabit-20-Ethernet-2f-Board

clean-mtp-2f-Gigabit-20-Ethernet-2f-Board:
	-$(RM) "mtp/Gigabit Ethernet/Board/board.d" "mtp/Gigabit Ethernet/Board/board.o" "mtp/Gigabit Ethernet/Board/board.src"

.PHONY: clean-mtp-2f-Gigabit-20-Ethernet-2f-Board

