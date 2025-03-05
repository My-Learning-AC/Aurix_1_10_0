################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
"../mtp/Gigabit Ethernet/Components/geth/geth_brdg.c" \
"../mtp/Gigabit Ethernet/Components/geth/geth_dma.c" \
"../mtp/Gigabit Ethernet/Components/geth/geth_init.c" \
"../mtp/Gigabit Ethernet/Components/geth/geth_mac.c" \
"../mtp/Gigabit Ethernet/Components/geth/geth_mac_fp.c" \
"../mtp/Gigabit Ethernet/Components/geth/geth_mdio.c" \
"../mtp/Gigabit Ethernet/Components/geth/geth_prot.c" 

COMPILED_SRCS += \
"mtp/Gigabit Ethernet/Components/geth/geth_brdg.src" \
"mtp/Gigabit Ethernet/Components/geth/geth_dma.src" \
"mtp/Gigabit Ethernet/Components/geth/geth_init.src" \
"mtp/Gigabit Ethernet/Components/geth/geth_mac.src" \
"mtp/Gigabit Ethernet/Components/geth/geth_mac_fp.src" \
"mtp/Gigabit Ethernet/Components/geth/geth_mdio.src" \
"mtp/Gigabit Ethernet/Components/geth/geth_prot.src" 

C_DEPS += \
"mtp/Gigabit Ethernet/Components/geth/geth_brdg.d" \
"mtp/Gigabit Ethernet/Components/geth/geth_dma.d" \
"mtp/Gigabit Ethernet/Components/geth/geth_init.d" \
"mtp/Gigabit Ethernet/Components/geth/geth_mac.d" \
"mtp/Gigabit Ethernet/Components/geth/geth_mac_fp.d" \
"mtp/Gigabit Ethernet/Components/geth/geth_mdio.d" \
"mtp/Gigabit Ethernet/Components/geth/geth_prot.d" 

OBJS += \
"mtp/Gigabit Ethernet/Components/geth/geth_brdg.o" \
"mtp/Gigabit Ethernet/Components/geth/geth_dma.o" \
"mtp/Gigabit Ethernet/Components/geth/geth_init.o" \
"mtp/Gigabit Ethernet/Components/geth/geth_mac.o" \
"mtp/Gigabit Ethernet/Components/geth/geth_mac_fp.o" \
"mtp/Gigabit Ethernet/Components/geth/geth_mdio.o" \
"mtp/Gigabit Ethernet/Components/geth/geth_prot.o" 


# Each subdirectory must supply rules for building sources it contributes
"mtp/Gigabit Ethernet/Components/geth/geth_brdg.src": "../mtp/Gigabit Ethernet/Components/geth/geth_brdg.c" "mtp/Gigabit Ethernet/Components/geth/subdir.mk"
	cctc -cs --dep-file="$(*F).d" --misrac-version=2004 -D__CPU__=tc49x -DIFX_PIN_PACKAGE_BGA292_COM -DCONFIG_DUT_BOARD -DCONFIG_BOARD_ETH_ENABLE -DCONFIG_BOARD_GETH_ENABLE -DCONFIG_BOARD_SERIALIO_ENABLE -DCONFIG_BOARD_LED_ENABLE -DIFX_SOLUTION_DESIGNER_GETH_ENABLE -DIFX_SOLUTION_DESIGNER_LETH_ENABLE "-fC:/Users/KumarDharani/Documents/Aurix_Projects/Projects/Aurix_TC4D7_Lite_Kit_MTP/TriCore Debug (TASKING)/TASKING_C_C___Compiler-Include_paths__-I_.opt" --iso=99 --c++14 --language=+volatile --exceptions --anachronisms --fp-model=2 -O0 --tradeoff=4 --compact-max-size=200 -g -Ctc49x -Y0 -N0 -Z0 --user-mode=hypervisor -o "$@" "$<"
"mtp/Gigabit Ethernet/Components/geth/geth_brdg.o": "mtp/Gigabit Ethernet/Components/geth/geth_brdg.src" "mtp/Gigabit Ethernet/Components/geth/subdir.mk"
	astc -Og -Os --no-warnings= --error-limit=42 --user-mode=hypervisor --core=tc1.8 -o  "$@" "$<"
"mtp/Gigabit Ethernet/Components/geth/geth_dma.src": "../mtp/Gigabit Ethernet/Components/geth/geth_dma.c" "mtp/Gigabit Ethernet/Components/geth/subdir.mk"
	cctc -cs --dep-file="$(*F).d" --misrac-version=2004 -D__CPU__=tc49x -DIFX_PIN_PACKAGE_BGA292_COM -DCONFIG_DUT_BOARD -DCONFIG_BOARD_ETH_ENABLE -DCONFIG_BOARD_GETH_ENABLE -DCONFIG_BOARD_SERIALIO_ENABLE -DCONFIG_BOARD_LED_ENABLE -DIFX_SOLUTION_DESIGNER_GETH_ENABLE -DIFX_SOLUTION_DESIGNER_LETH_ENABLE "-fC:/Users/KumarDharani/Documents/Aurix_Projects/Projects/Aurix_TC4D7_Lite_Kit_MTP/TriCore Debug (TASKING)/TASKING_C_C___Compiler-Include_paths__-I_.opt" --iso=99 --c++14 --language=+volatile --exceptions --anachronisms --fp-model=2 -O0 --tradeoff=4 --compact-max-size=200 -g -Ctc49x -Y0 -N0 -Z0 --user-mode=hypervisor -o "$@" "$<"
"mtp/Gigabit Ethernet/Components/geth/geth_dma.o": "mtp/Gigabit Ethernet/Components/geth/geth_dma.src" "mtp/Gigabit Ethernet/Components/geth/subdir.mk"
	astc -Og -Os --no-warnings= --error-limit=42 --user-mode=hypervisor --core=tc1.8 -o  "$@" "$<"
"mtp/Gigabit Ethernet/Components/geth/geth_init.src": "../mtp/Gigabit Ethernet/Components/geth/geth_init.c" "mtp/Gigabit Ethernet/Components/geth/subdir.mk"
	cctc -cs --dep-file="$(*F).d" --misrac-version=2004 -D__CPU__=tc49x -DIFX_PIN_PACKAGE_BGA292_COM -DCONFIG_DUT_BOARD -DCONFIG_BOARD_ETH_ENABLE -DCONFIG_BOARD_GETH_ENABLE -DCONFIG_BOARD_SERIALIO_ENABLE -DCONFIG_BOARD_LED_ENABLE -DIFX_SOLUTION_DESIGNER_GETH_ENABLE -DIFX_SOLUTION_DESIGNER_LETH_ENABLE "-fC:/Users/KumarDharani/Documents/Aurix_Projects/Projects/Aurix_TC4D7_Lite_Kit_MTP/TriCore Debug (TASKING)/TASKING_C_C___Compiler-Include_paths__-I_.opt" --iso=99 --c++14 --language=+volatile --exceptions --anachronisms --fp-model=2 -O0 --tradeoff=4 --compact-max-size=200 -g -Ctc49x -Y0 -N0 -Z0 --user-mode=hypervisor -o "$@" "$<"
"mtp/Gigabit Ethernet/Components/geth/geth_init.o": "mtp/Gigabit Ethernet/Components/geth/geth_init.src" "mtp/Gigabit Ethernet/Components/geth/subdir.mk"
	astc -Og -Os --no-warnings= --error-limit=42 --user-mode=hypervisor --core=tc1.8 -o  "$@" "$<"
"mtp/Gigabit Ethernet/Components/geth/geth_mac.src": "../mtp/Gigabit Ethernet/Components/geth/geth_mac.c" "mtp/Gigabit Ethernet/Components/geth/subdir.mk"
	cctc -cs --dep-file="$(*F).d" --misrac-version=2004 -D__CPU__=tc49x -DIFX_PIN_PACKAGE_BGA292_COM -DCONFIG_DUT_BOARD -DCONFIG_BOARD_ETH_ENABLE -DCONFIG_BOARD_GETH_ENABLE -DCONFIG_BOARD_SERIALIO_ENABLE -DCONFIG_BOARD_LED_ENABLE -DIFX_SOLUTION_DESIGNER_GETH_ENABLE -DIFX_SOLUTION_DESIGNER_LETH_ENABLE "-fC:/Users/KumarDharani/Documents/Aurix_Projects/Projects/Aurix_TC4D7_Lite_Kit_MTP/TriCore Debug (TASKING)/TASKING_C_C___Compiler-Include_paths__-I_.opt" --iso=99 --c++14 --language=+volatile --exceptions --anachronisms --fp-model=2 -O0 --tradeoff=4 --compact-max-size=200 -g -Ctc49x -Y0 -N0 -Z0 --user-mode=hypervisor -o "$@" "$<"
"mtp/Gigabit Ethernet/Components/geth/geth_mac.o": "mtp/Gigabit Ethernet/Components/geth/geth_mac.src" "mtp/Gigabit Ethernet/Components/geth/subdir.mk"
	astc -Og -Os --no-warnings= --error-limit=42 --user-mode=hypervisor --core=tc1.8 -o  "$@" "$<"
"mtp/Gigabit Ethernet/Components/geth/geth_mac_fp.src": "../mtp/Gigabit Ethernet/Components/geth/geth_mac_fp.c" "mtp/Gigabit Ethernet/Components/geth/subdir.mk"
	cctc -cs --dep-file="$(*F).d" --misrac-version=2004 -D__CPU__=tc49x -DIFX_PIN_PACKAGE_BGA292_COM -DCONFIG_DUT_BOARD -DCONFIG_BOARD_ETH_ENABLE -DCONFIG_BOARD_GETH_ENABLE -DCONFIG_BOARD_SERIALIO_ENABLE -DCONFIG_BOARD_LED_ENABLE -DIFX_SOLUTION_DESIGNER_GETH_ENABLE -DIFX_SOLUTION_DESIGNER_LETH_ENABLE "-fC:/Users/KumarDharani/Documents/Aurix_Projects/Projects/Aurix_TC4D7_Lite_Kit_MTP/TriCore Debug (TASKING)/TASKING_C_C___Compiler-Include_paths__-I_.opt" --iso=99 --c++14 --language=+volatile --exceptions --anachronisms --fp-model=2 -O0 --tradeoff=4 --compact-max-size=200 -g -Ctc49x -Y0 -N0 -Z0 --user-mode=hypervisor -o "$@" "$<"
"mtp/Gigabit Ethernet/Components/geth/geth_mac_fp.o": "mtp/Gigabit Ethernet/Components/geth/geth_mac_fp.src" "mtp/Gigabit Ethernet/Components/geth/subdir.mk"
	astc -Og -Os --no-warnings= --error-limit=42 --user-mode=hypervisor --core=tc1.8 -o  "$@" "$<"
"mtp/Gigabit Ethernet/Components/geth/geth_mdio.src": "../mtp/Gigabit Ethernet/Components/geth/geth_mdio.c" "mtp/Gigabit Ethernet/Components/geth/subdir.mk"
	cctc -cs --dep-file="$(*F).d" --misrac-version=2004 -D__CPU__=tc49x -DIFX_PIN_PACKAGE_BGA292_COM -DCONFIG_DUT_BOARD -DCONFIG_BOARD_ETH_ENABLE -DCONFIG_BOARD_GETH_ENABLE -DCONFIG_BOARD_SERIALIO_ENABLE -DCONFIG_BOARD_LED_ENABLE -DIFX_SOLUTION_DESIGNER_GETH_ENABLE -DIFX_SOLUTION_DESIGNER_LETH_ENABLE "-fC:/Users/KumarDharani/Documents/Aurix_Projects/Projects/Aurix_TC4D7_Lite_Kit_MTP/TriCore Debug (TASKING)/TASKING_C_C___Compiler-Include_paths__-I_.opt" --iso=99 --c++14 --language=+volatile --exceptions --anachronisms --fp-model=2 -O0 --tradeoff=4 --compact-max-size=200 -g -Ctc49x -Y0 -N0 -Z0 --user-mode=hypervisor -o "$@" "$<"
"mtp/Gigabit Ethernet/Components/geth/geth_mdio.o": "mtp/Gigabit Ethernet/Components/geth/geth_mdio.src" "mtp/Gigabit Ethernet/Components/geth/subdir.mk"
	astc -Og -Os --no-warnings= --error-limit=42 --user-mode=hypervisor --core=tc1.8 -o  "$@" "$<"
"mtp/Gigabit Ethernet/Components/geth/geth_prot.src": "../mtp/Gigabit Ethernet/Components/geth/geth_prot.c" "mtp/Gigabit Ethernet/Components/geth/subdir.mk"
	cctc -cs --dep-file="$(*F).d" --misrac-version=2004 -D__CPU__=tc49x -DIFX_PIN_PACKAGE_BGA292_COM -DCONFIG_DUT_BOARD -DCONFIG_BOARD_ETH_ENABLE -DCONFIG_BOARD_GETH_ENABLE -DCONFIG_BOARD_SERIALIO_ENABLE -DCONFIG_BOARD_LED_ENABLE -DIFX_SOLUTION_DESIGNER_GETH_ENABLE -DIFX_SOLUTION_DESIGNER_LETH_ENABLE "-fC:/Users/KumarDharani/Documents/Aurix_Projects/Projects/Aurix_TC4D7_Lite_Kit_MTP/TriCore Debug (TASKING)/TASKING_C_C___Compiler-Include_paths__-I_.opt" --iso=99 --c++14 --language=+volatile --exceptions --anachronisms --fp-model=2 -O0 --tradeoff=4 --compact-max-size=200 -g -Ctc49x -Y0 -N0 -Z0 --user-mode=hypervisor -o "$@" "$<"
"mtp/Gigabit Ethernet/Components/geth/geth_prot.o": "mtp/Gigabit Ethernet/Components/geth/geth_prot.src" "mtp/Gigabit Ethernet/Components/geth/subdir.mk"
	astc -Og -Os --no-warnings= --error-limit=42 --user-mode=hypervisor --core=tc1.8 -o  "$@" "$<"

clean: clean-mtp-2f-Gigabit-20-Ethernet-2f-Components-2f-geth

clean-mtp-2f-Gigabit-20-Ethernet-2f-Components-2f-geth:
	-$(RM) "mtp/Gigabit Ethernet/Components/geth/geth_brdg.d" "mtp/Gigabit Ethernet/Components/geth/geth_brdg.o" "mtp/Gigabit Ethernet/Components/geth/geth_brdg.src" "mtp/Gigabit Ethernet/Components/geth/geth_dma.d" "mtp/Gigabit Ethernet/Components/geth/geth_dma.o" "mtp/Gigabit Ethernet/Components/geth/geth_dma.src" "mtp/Gigabit Ethernet/Components/geth/geth_init.d" "mtp/Gigabit Ethernet/Components/geth/geth_init.o" "mtp/Gigabit Ethernet/Components/geth/geth_init.src" "mtp/Gigabit Ethernet/Components/geth/geth_mac.d" "mtp/Gigabit Ethernet/Components/geth/geth_mac.o" "mtp/Gigabit Ethernet/Components/geth/geth_mac.src" "mtp/Gigabit Ethernet/Components/geth/geth_mac_fp.d" "mtp/Gigabit Ethernet/Components/geth/geth_mac_fp.o" "mtp/Gigabit Ethernet/Components/geth/geth_mac_fp.src" "mtp/Gigabit Ethernet/Components/geth/geth_mdio.d" "mtp/Gigabit Ethernet/Components/geth/geth_mdio.o" "mtp/Gigabit Ethernet/Components/geth/geth_mdio.src" "mtp/Gigabit Ethernet/Components/geth/geth_prot.d" "mtp/Gigabit Ethernet/Components/geth/geth_prot.o" "mtp/Gigabit Ethernet/Components/geth/geth_prot.src"

.PHONY: clean-mtp-2f-Gigabit-20-Ethernet-2f-Components-2f-geth

