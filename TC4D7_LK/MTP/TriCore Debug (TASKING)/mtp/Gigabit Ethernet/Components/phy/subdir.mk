################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
"../mtp/Gigabit Ethernet/Components/phy/dp83825i.c" \
"../mtp/Gigabit Ethernet/Components/phy/eth_mdio.c" \
"../mtp/Gigabit Ethernet/Components/phy/eth_mii.c" \
"../mtp/Gigabit Ethernet/Components/phy/eth_phy.c" \
"../mtp/Gigabit Ethernet/Components/phy/rtl8201f.c" 

COMPILED_SRCS += \
"mtp/Gigabit Ethernet/Components/phy/dp83825i.src" \
"mtp/Gigabit Ethernet/Components/phy/eth_mdio.src" \
"mtp/Gigabit Ethernet/Components/phy/eth_mii.src" \
"mtp/Gigabit Ethernet/Components/phy/eth_phy.src" \
"mtp/Gigabit Ethernet/Components/phy/rtl8201f.src" 

C_DEPS += \
"mtp/Gigabit Ethernet/Components/phy/dp83825i.d" \
"mtp/Gigabit Ethernet/Components/phy/eth_mdio.d" \
"mtp/Gigabit Ethernet/Components/phy/eth_mii.d" \
"mtp/Gigabit Ethernet/Components/phy/eth_phy.d" \
"mtp/Gigabit Ethernet/Components/phy/rtl8201f.d" 

OBJS += \
"mtp/Gigabit Ethernet/Components/phy/dp83825i.o" \
"mtp/Gigabit Ethernet/Components/phy/eth_mdio.o" \
"mtp/Gigabit Ethernet/Components/phy/eth_mii.o" \
"mtp/Gigabit Ethernet/Components/phy/eth_phy.o" \
"mtp/Gigabit Ethernet/Components/phy/rtl8201f.o" 


# Each subdirectory must supply rules for building sources it contributes
"mtp/Gigabit Ethernet/Components/phy/dp83825i.src": "../mtp/Gigabit Ethernet/Components/phy/dp83825i.c" "mtp/Gigabit Ethernet/Components/phy/subdir.mk"
	cctc -cs --dep-file="$(*F).d" --misrac-version=2004 -D__CPU__=tc49x -DIFX_PIN_PACKAGE_BGA292_COM -DCONFIG_DUT_BOARD -DCONFIG_BOARD_ETH_ENABLE -DCONFIG_BOARD_GETH_ENABLE -DCONFIG_BOARD_SERIALIO_ENABLE -DCONFIG_BOARD_LED_ENABLE -DIFX_SOLUTION_DESIGNER_GETH_ENABLE -DIFX_SOLUTION_DESIGNER_LETH_ENABLE "-fC:/Users/KumarDharani/Documents/Aurix_Projects/Projects/Aurix_TC4D7_Lite_Kit_MTP/TriCore Debug (TASKING)/TASKING_C_C___Compiler-Include_paths__-I_.opt" --iso=99 --c++14 --language=+volatile --exceptions --anachronisms --fp-model=2 -O0 --tradeoff=4 --compact-max-size=200 -g -Ctc49x -Y0 -N0 -Z0 --user-mode=hypervisor -o "$@" "$<"
"mtp/Gigabit Ethernet/Components/phy/dp83825i.o": "mtp/Gigabit Ethernet/Components/phy/dp83825i.src" "mtp/Gigabit Ethernet/Components/phy/subdir.mk"
	astc -Og -Os --no-warnings= --error-limit=42 --user-mode=hypervisor --core=tc1.8 -o  "$@" "$<"
"mtp/Gigabit Ethernet/Components/phy/eth_mdio.src": "../mtp/Gigabit Ethernet/Components/phy/eth_mdio.c" "mtp/Gigabit Ethernet/Components/phy/subdir.mk"
	cctc -cs --dep-file="$(*F).d" --misrac-version=2004 -D__CPU__=tc49x -DIFX_PIN_PACKAGE_BGA292_COM -DCONFIG_DUT_BOARD -DCONFIG_BOARD_ETH_ENABLE -DCONFIG_BOARD_GETH_ENABLE -DCONFIG_BOARD_SERIALIO_ENABLE -DCONFIG_BOARD_LED_ENABLE -DIFX_SOLUTION_DESIGNER_GETH_ENABLE -DIFX_SOLUTION_DESIGNER_LETH_ENABLE "-fC:/Users/KumarDharani/Documents/Aurix_Projects/Projects/Aurix_TC4D7_Lite_Kit_MTP/TriCore Debug (TASKING)/TASKING_C_C___Compiler-Include_paths__-I_.opt" --iso=99 --c++14 --language=+volatile --exceptions --anachronisms --fp-model=2 -O0 --tradeoff=4 --compact-max-size=200 -g -Ctc49x -Y0 -N0 -Z0 --user-mode=hypervisor -o "$@" "$<"
"mtp/Gigabit Ethernet/Components/phy/eth_mdio.o": "mtp/Gigabit Ethernet/Components/phy/eth_mdio.src" "mtp/Gigabit Ethernet/Components/phy/subdir.mk"
	astc -Og -Os --no-warnings= --error-limit=42 --user-mode=hypervisor --core=tc1.8 -o  "$@" "$<"
"mtp/Gigabit Ethernet/Components/phy/eth_mii.src": "../mtp/Gigabit Ethernet/Components/phy/eth_mii.c" "mtp/Gigabit Ethernet/Components/phy/subdir.mk"
	cctc -cs --dep-file="$(*F).d" --misrac-version=2004 -D__CPU__=tc49x -DIFX_PIN_PACKAGE_BGA292_COM -DCONFIG_DUT_BOARD -DCONFIG_BOARD_ETH_ENABLE -DCONFIG_BOARD_GETH_ENABLE -DCONFIG_BOARD_SERIALIO_ENABLE -DCONFIG_BOARD_LED_ENABLE -DIFX_SOLUTION_DESIGNER_GETH_ENABLE -DIFX_SOLUTION_DESIGNER_LETH_ENABLE "-fC:/Users/KumarDharani/Documents/Aurix_Projects/Projects/Aurix_TC4D7_Lite_Kit_MTP/TriCore Debug (TASKING)/TASKING_C_C___Compiler-Include_paths__-I_.opt" --iso=99 --c++14 --language=+volatile --exceptions --anachronisms --fp-model=2 -O0 --tradeoff=4 --compact-max-size=200 -g -Ctc49x -Y0 -N0 -Z0 --user-mode=hypervisor -o "$@" "$<"
"mtp/Gigabit Ethernet/Components/phy/eth_mii.o": "mtp/Gigabit Ethernet/Components/phy/eth_mii.src" "mtp/Gigabit Ethernet/Components/phy/subdir.mk"
	astc -Og -Os --no-warnings= --error-limit=42 --user-mode=hypervisor --core=tc1.8 -o  "$@" "$<"
"mtp/Gigabit Ethernet/Components/phy/eth_phy.src": "../mtp/Gigabit Ethernet/Components/phy/eth_phy.c" "mtp/Gigabit Ethernet/Components/phy/subdir.mk"
	cctc -cs --dep-file="$(*F).d" --misrac-version=2004 -D__CPU__=tc49x -DIFX_PIN_PACKAGE_BGA292_COM -DCONFIG_DUT_BOARD -DCONFIG_BOARD_ETH_ENABLE -DCONFIG_BOARD_GETH_ENABLE -DCONFIG_BOARD_SERIALIO_ENABLE -DCONFIG_BOARD_LED_ENABLE -DIFX_SOLUTION_DESIGNER_GETH_ENABLE -DIFX_SOLUTION_DESIGNER_LETH_ENABLE "-fC:/Users/KumarDharani/Documents/Aurix_Projects/Projects/Aurix_TC4D7_Lite_Kit_MTP/TriCore Debug (TASKING)/TASKING_C_C___Compiler-Include_paths__-I_.opt" --iso=99 --c++14 --language=+volatile --exceptions --anachronisms --fp-model=2 -O0 --tradeoff=4 --compact-max-size=200 -g -Ctc49x -Y0 -N0 -Z0 --user-mode=hypervisor -o "$@" "$<"
"mtp/Gigabit Ethernet/Components/phy/eth_phy.o": "mtp/Gigabit Ethernet/Components/phy/eth_phy.src" "mtp/Gigabit Ethernet/Components/phy/subdir.mk"
	astc -Og -Os --no-warnings= --error-limit=42 --user-mode=hypervisor --core=tc1.8 -o  "$@" "$<"
"mtp/Gigabit Ethernet/Components/phy/rtl8201f.src": "../mtp/Gigabit Ethernet/Components/phy/rtl8201f.c" "mtp/Gigabit Ethernet/Components/phy/subdir.mk"
	cctc -cs --dep-file="$(*F).d" --misrac-version=2004 -D__CPU__=tc49x -DIFX_PIN_PACKAGE_BGA292_COM -DCONFIG_DUT_BOARD -DCONFIG_BOARD_ETH_ENABLE -DCONFIG_BOARD_GETH_ENABLE -DCONFIG_BOARD_SERIALIO_ENABLE -DCONFIG_BOARD_LED_ENABLE -DIFX_SOLUTION_DESIGNER_GETH_ENABLE -DIFX_SOLUTION_DESIGNER_LETH_ENABLE "-fC:/Users/KumarDharani/Documents/Aurix_Projects/Projects/Aurix_TC4D7_Lite_Kit_MTP/TriCore Debug (TASKING)/TASKING_C_C___Compiler-Include_paths__-I_.opt" --iso=99 --c++14 --language=+volatile --exceptions --anachronisms --fp-model=2 -O0 --tradeoff=4 --compact-max-size=200 -g -Ctc49x -Y0 -N0 -Z0 --user-mode=hypervisor -o "$@" "$<"
"mtp/Gigabit Ethernet/Components/phy/rtl8201f.o": "mtp/Gigabit Ethernet/Components/phy/rtl8201f.src" "mtp/Gigabit Ethernet/Components/phy/subdir.mk"
	astc -Og -Os --no-warnings= --error-limit=42 --user-mode=hypervisor --core=tc1.8 -o  "$@" "$<"

clean: clean-mtp-2f-Gigabit-20-Ethernet-2f-Components-2f-phy

clean-mtp-2f-Gigabit-20-Ethernet-2f-Components-2f-phy:
	-$(RM) "mtp/Gigabit Ethernet/Components/phy/dp83825i.d" "mtp/Gigabit Ethernet/Components/phy/dp83825i.o" "mtp/Gigabit Ethernet/Components/phy/dp83825i.src" "mtp/Gigabit Ethernet/Components/phy/eth_mdio.d" "mtp/Gigabit Ethernet/Components/phy/eth_mdio.o" "mtp/Gigabit Ethernet/Components/phy/eth_mdio.src" "mtp/Gigabit Ethernet/Components/phy/eth_mii.d" "mtp/Gigabit Ethernet/Components/phy/eth_mii.o" "mtp/Gigabit Ethernet/Components/phy/eth_mii.src" "mtp/Gigabit Ethernet/Components/phy/eth_phy.d" "mtp/Gigabit Ethernet/Components/phy/eth_phy.o" "mtp/Gigabit Ethernet/Components/phy/eth_phy.src" "mtp/Gigabit Ethernet/Components/phy/rtl8201f.d" "mtp/Gigabit Ethernet/Components/phy/rtl8201f.o" "mtp/Gigabit Ethernet/Components/phy/rtl8201f.src"

.PHONY: clean-mtp-2f-Gigabit-20-Ethernet-2f-Components-2f-phy

