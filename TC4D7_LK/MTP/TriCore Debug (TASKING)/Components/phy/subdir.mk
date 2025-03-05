################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Components/phy/dp83825i.c \
../Components/phy/eth_mdio.c \
../Components/phy/eth_mii.c \
../Components/phy/eth_phy.c \
../Components/phy/rtl8201f.c 

COMPILED_SRCS += \
Components/phy/dp83825i.src \
Components/phy/eth_mdio.src \
Components/phy/eth_mii.src \
Components/phy/eth_phy.src \
Components/phy/rtl8201f.src 

C_DEPS += \
Components/phy/dp83825i.d \
Components/phy/eth_mdio.d \
Components/phy/eth_mii.d \
Components/phy/eth_phy.d \
Components/phy/rtl8201f.d 

OBJS += \
Components/phy/dp83825i.o \
Components/phy/eth_mdio.o \
Components/phy/eth_mii.o \
Components/phy/eth_phy.o \
Components/phy/rtl8201f.o 


# Each subdirectory must supply rules for building sources it contributes
Components/phy/dp83825i.src: ../Components/phy/dp83825i.c Components/phy/subdir.mk
	cctc -cs --dep-file="$(*F).d" --misrac-version=2004 -D__CPU__=tc49x -DIFX_PIN_PACKAGE_BGA292_COM -DCONFIG_DUT_BOARD -DCONFIG_BOARD_ETH_ENABLE -DCONFIG_BOARD_GETH_ENABLE -DCONFIG_BOARD_SERIALIO_ENABLE -DCONFIG_BOARD_LED_ENABLE -DIFX_SOLUTION_DESIGNER_GETH_ENABLE -DIFX_SOLUTION_DESIGNER_LETH_ENABLE "-fC:/Users/KumarDharani/Documents/Aurix_Projects/Projects/iLLD_TC4D7_COM_ADS_Ethernet_Tx_Rx/TriCore Debug (TASKING)/TASKING_C_C___Compiler-Include_paths__-I_.opt" --iso=99 --c++14 --language=+volatile --exceptions --anachronisms --fp-model=2 -O0 --tradeoff=4 --compact-max-size=200 -g -Ctc49x -Y0 -N0 -Z0 --user-mode=hypervisor -o "$@" "$<"
Components/phy/dp83825i.o: Components/phy/dp83825i.src Components/phy/subdir.mk
	astc -Og -Os --no-warnings= --error-limit=42 --user-mode=hypervisor --core=tc1.8 -o  "$@" "$<"
Components/phy/eth_mdio.src: ../Components/phy/eth_mdio.c Components/phy/subdir.mk
	cctc -cs --dep-file="$(*F).d" --misrac-version=2004 -D__CPU__=tc49x -DIFX_PIN_PACKAGE_BGA292_COM -DCONFIG_DUT_BOARD -DCONFIG_BOARD_ETH_ENABLE -DCONFIG_BOARD_GETH_ENABLE -DCONFIG_BOARD_SERIALIO_ENABLE -DCONFIG_BOARD_LED_ENABLE -DIFX_SOLUTION_DESIGNER_GETH_ENABLE -DIFX_SOLUTION_DESIGNER_LETH_ENABLE "-fC:/Users/KumarDharani/Documents/Aurix_Projects/Projects/iLLD_TC4D7_COM_ADS_Ethernet_Tx_Rx/TriCore Debug (TASKING)/TASKING_C_C___Compiler-Include_paths__-I_.opt" --iso=99 --c++14 --language=+volatile --exceptions --anachronisms --fp-model=2 -O0 --tradeoff=4 --compact-max-size=200 -g -Ctc49x -Y0 -N0 -Z0 --user-mode=hypervisor -o "$@" "$<"
Components/phy/eth_mdio.o: Components/phy/eth_mdio.src Components/phy/subdir.mk
	astc -Og -Os --no-warnings= --error-limit=42 --user-mode=hypervisor --core=tc1.8 -o  "$@" "$<"
Components/phy/eth_mii.src: ../Components/phy/eth_mii.c Components/phy/subdir.mk
	cctc -cs --dep-file="$(*F).d" --misrac-version=2004 -D__CPU__=tc49x -DIFX_PIN_PACKAGE_BGA292_COM -DCONFIG_DUT_BOARD -DCONFIG_BOARD_ETH_ENABLE -DCONFIG_BOARD_GETH_ENABLE -DCONFIG_BOARD_SERIALIO_ENABLE -DCONFIG_BOARD_LED_ENABLE -DIFX_SOLUTION_DESIGNER_GETH_ENABLE -DIFX_SOLUTION_DESIGNER_LETH_ENABLE "-fC:/Users/KumarDharani/Documents/Aurix_Projects/Projects/iLLD_TC4D7_COM_ADS_Ethernet_Tx_Rx/TriCore Debug (TASKING)/TASKING_C_C___Compiler-Include_paths__-I_.opt" --iso=99 --c++14 --language=+volatile --exceptions --anachronisms --fp-model=2 -O0 --tradeoff=4 --compact-max-size=200 -g -Ctc49x -Y0 -N0 -Z0 --user-mode=hypervisor -o "$@" "$<"
Components/phy/eth_mii.o: Components/phy/eth_mii.src Components/phy/subdir.mk
	astc -Og -Os --no-warnings= --error-limit=42 --user-mode=hypervisor --core=tc1.8 -o  "$@" "$<"
Components/phy/eth_phy.src: ../Components/phy/eth_phy.c Components/phy/subdir.mk
	cctc -cs --dep-file="$(*F).d" --misrac-version=2004 -D__CPU__=tc49x -DIFX_PIN_PACKAGE_BGA292_COM -DCONFIG_DUT_BOARD -DCONFIG_BOARD_ETH_ENABLE -DCONFIG_BOARD_GETH_ENABLE -DCONFIG_BOARD_SERIALIO_ENABLE -DCONFIG_BOARD_LED_ENABLE -DIFX_SOLUTION_DESIGNER_GETH_ENABLE -DIFX_SOLUTION_DESIGNER_LETH_ENABLE "-fC:/Users/KumarDharani/Documents/Aurix_Projects/Projects/iLLD_TC4D7_COM_ADS_Ethernet_Tx_Rx/TriCore Debug (TASKING)/TASKING_C_C___Compiler-Include_paths__-I_.opt" --iso=99 --c++14 --language=+volatile --exceptions --anachronisms --fp-model=2 -O0 --tradeoff=4 --compact-max-size=200 -g -Ctc49x -Y0 -N0 -Z0 --user-mode=hypervisor -o "$@" "$<"
Components/phy/eth_phy.o: Components/phy/eth_phy.src Components/phy/subdir.mk
	astc -Og -Os --no-warnings= --error-limit=42 --user-mode=hypervisor --core=tc1.8 -o  "$@" "$<"
Components/phy/rtl8201f.src: ../Components/phy/rtl8201f.c Components/phy/subdir.mk
	cctc -cs --dep-file="$(*F).d" --misrac-version=2004 -D__CPU__=tc49x -DIFX_PIN_PACKAGE_BGA292_COM -DCONFIG_DUT_BOARD -DCONFIG_BOARD_ETH_ENABLE -DCONFIG_BOARD_GETH_ENABLE -DCONFIG_BOARD_SERIALIO_ENABLE -DCONFIG_BOARD_LED_ENABLE -DIFX_SOLUTION_DESIGNER_GETH_ENABLE -DIFX_SOLUTION_DESIGNER_LETH_ENABLE "-fC:/Users/KumarDharani/Documents/Aurix_Projects/Projects/iLLD_TC4D7_COM_ADS_Ethernet_Tx_Rx/TriCore Debug (TASKING)/TASKING_C_C___Compiler-Include_paths__-I_.opt" --iso=99 --c++14 --language=+volatile --exceptions --anachronisms --fp-model=2 -O0 --tradeoff=4 --compact-max-size=200 -g -Ctc49x -Y0 -N0 -Z0 --user-mode=hypervisor -o "$@" "$<"
Components/phy/rtl8201f.o: Components/phy/rtl8201f.src Components/phy/subdir.mk
	astc -Og -Os --no-warnings= --error-limit=42 --user-mode=hypervisor --core=tc1.8 -o  "$@" "$<"

clean: clean-Components-2f-phy

clean-Components-2f-phy:
	-$(RM) Components/phy/dp83825i.d Components/phy/dp83825i.o Components/phy/dp83825i.src Components/phy/eth_mdio.d Components/phy/eth_mdio.o Components/phy/eth_mdio.src Components/phy/eth_mii.d Components/phy/eth_mii.o Components/phy/eth_mii.src Components/phy/eth_phy.d Components/phy/eth_phy.o Components/phy/eth_phy.src Components/phy/rtl8201f.d Components/phy/rtl8201f.o Components/phy/rtl8201f.src

.PHONY: clean-Components-2f-phy

