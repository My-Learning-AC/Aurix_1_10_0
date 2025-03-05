################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Components/geth/geth_brdg.c \
../Components/geth/geth_dma.c \
../Components/geth/geth_init.c \
../Components/geth/geth_mac.c \
../Components/geth/geth_mac_fp.c \
../Components/geth/geth_mdio.c \
../Components/geth/geth_prot.c 

COMPILED_SRCS += \
Components/geth/geth_brdg.src \
Components/geth/geth_dma.src \
Components/geth/geth_init.src \
Components/geth/geth_mac.src \
Components/geth/geth_mac_fp.src \
Components/geth/geth_mdio.src \
Components/geth/geth_prot.src 

C_DEPS += \
Components/geth/geth_brdg.d \
Components/geth/geth_dma.d \
Components/geth/geth_init.d \
Components/geth/geth_mac.d \
Components/geth/geth_mac_fp.d \
Components/geth/geth_mdio.d \
Components/geth/geth_prot.d 

OBJS += \
Components/geth/geth_brdg.o \
Components/geth/geth_dma.o \
Components/geth/geth_init.o \
Components/geth/geth_mac.o \
Components/geth/geth_mac_fp.o \
Components/geth/geth_mdio.o \
Components/geth/geth_prot.o 


# Each subdirectory must supply rules for building sources it contributes
Components/geth/geth_brdg.src: ../Components/geth/geth_brdg.c Components/geth/subdir.mk
	cctc -cs --dep-file="$(*F).d" --misrac-version=2004 -D__CPU__=tc49x -DIFX_PIN_PACKAGE_BGA292_COM -DCONFIG_DUT_BOARD -DCONFIG_BOARD_ETH_ENABLE -DCONFIG_BOARD_GETH_ENABLE -DCONFIG_BOARD_SERIALIO_ENABLE -DCONFIG_BOARD_LED_ENABLE -DIFX_SOLUTION_DESIGNER_GETH_ENABLE -DIFX_SOLUTION_DESIGNER_LETH_ENABLE "-fC:/Users/KumarDharani/Documents/Aurix_Projects/Projects/iLLD_TC4D7_COM_ADS_Ethernet_Tx_Rx/TriCore Debug (TASKING)/TASKING_C_C___Compiler-Include_paths__-I_.opt" --iso=99 --c++14 --language=+volatile --exceptions --anachronisms --fp-model=2 -O0 --tradeoff=4 --compact-max-size=200 -g -Ctc49x -Y0 -N0 -Z0 --user-mode=hypervisor -o "$@" "$<"
Components/geth/geth_brdg.o: Components/geth/geth_brdg.src Components/geth/subdir.mk
	astc -Og -Os --no-warnings= --error-limit=42 --user-mode=hypervisor --core=tc1.8 -o  "$@" "$<"
Components/geth/geth_dma.src: ../Components/geth/geth_dma.c Components/geth/subdir.mk
	cctc -cs --dep-file="$(*F).d" --misrac-version=2004 -D__CPU__=tc49x -DIFX_PIN_PACKAGE_BGA292_COM -DCONFIG_DUT_BOARD -DCONFIG_BOARD_ETH_ENABLE -DCONFIG_BOARD_GETH_ENABLE -DCONFIG_BOARD_SERIALIO_ENABLE -DCONFIG_BOARD_LED_ENABLE -DIFX_SOLUTION_DESIGNER_GETH_ENABLE -DIFX_SOLUTION_DESIGNER_LETH_ENABLE "-fC:/Users/KumarDharani/Documents/Aurix_Projects/Projects/iLLD_TC4D7_COM_ADS_Ethernet_Tx_Rx/TriCore Debug (TASKING)/TASKING_C_C___Compiler-Include_paths__-I_.opt" --iso=99 --c++14 --language=+volatile --exceptions --anachronisms --fp-model=2 -O0 --tradeoff=4 --compact-max-size=200 -g -Ctc49x -Y0 -N0 -Z0 --user-mode=hypervisor -o "$@" "$<"
Components/geth/geth_dma.o: Components/geth/geth_dma.src Components/geth/subdir.mk
	astc -Og -Os --no-warnings= --error-limit=42 --user-mode=hypervisor --core=tc1.8 -o  "$@" "$<"
Components/geth/geth_init.src: ../Components/geth/geth_init.c Components/geth/subdir.mk
	cctc -cs --dep-file="$(*F).d" --misrac-version=2004 -D__CPU__=tc49x -DIFX_PIN_PACKAGE_BGA292_COM -DCONFIG_DUT_BOARD -DCONFIG_BOARD_ETH_ENABLE -DCONFIG_BOARD_GETH_ENABLE -DCONFIG_BOARD_SERIALIO_ENABLE -DCONFIG_BOARD_LED_ENABLE -DIFX_SOLUTION_DESIGNER_GETH_ENABLE -DIFX_SOLUTION_DESIGNER_LETH_ENABLE "-fC:/Users/KumarDharani/Documents/Aurix_Projects/Projects/iLLD_TC4D7_COM_ADS_Ethernet_Tx_Rx/TriCore Debug (TASKING)/TASKING_C_C___Compiler-Include_paths__-I_.opt" --iso=99 --c++14 --language=+volatile --exceptions --anachronisms --fp-model=2 -O0 --tradeoff=4 --compact-max-size=200 -g -Ctc49x -Y0 -N0 -Z0 --user-mode=hypervisor -o "$@" "$<"
Components/geth/geth_init.o: Components/geth/geth_init.src Components/geth/subdir.mk
	astc -Og -Os --no-warnings= --error-limit=42 --user-mode=hypervisor --core=tc1.8 -o  "$@" "$<"
Components/geth/geth_mac.src: ../Components/geth/geth_mac.c Components/geth/subdir.mk
	cctc -cs --dep-file="$(*F).d" --misrac-version=2004 -D__CPU__=tc49x -DIFX_PIN_PACKAGE_BGA292_COM -DCONFIG_DUT_BOARD -DCONFIG_BOARD_ETH_ENABLE -DCONFIG_BOARD_GETH_ENABLE -DCONFIG_BOARD_SERIALIO_ENABLE -DCONFIG_BOARD_LED_ENABLE -DIFX_SOLUTION_DESIGNER_GETH_ENABLE -DIFX_SOLUTION_DESIGNER_LETH_ENABLE "-fC:/Users/KumarDharani/Documents/Aurix_Projects/Projects/iLLD_TC4D7_COM_ADS_Ethernet_Tx_Rx/TriCore Debug (TASKING)/TASKING_C_C___Compiler-Include_paths__-I_.opt" --iso=99 --c++14 --language=+volatile --exceptions --anachronisms --fp-model=2 -O0 --tradeoff=4 --compact-max-size=200 -g -Ctc49x -Y0 -N0 -Z0 --user-mode=hypervisor -o "$@" "$<"
Components/geth/geth_mac.o: Components/geth/geth_mac.src Components/geth/subdir.mk
	astc -Og -Os --no-warnings= --error-limit=42 --user-mode=hypervisor --core=tc1.8 -o  "$@" "$<"
Components/geth/geth_mac_fp.src: ../Components/geth/geth_mac_fp.c Components/geth/subdir.mk
	cctc -cs --dep-file="$(*F).d" --misrac-version=2004 -D__CPU__=tc49x -DIFX_PIN_PACKAGE_BGA292_COM -DCONFIG_DUT_BOARD -DCONFIG_BOARD_ETH_ENABLE -DCONFIG_BOARD_GETH_ENABLE -DCONFIG_BOARD_SERIALIO_ENABLE -DCONFIG_BOARD_LED_ENABLE -DIFX_SOLUTION_DESIGNER_GETH_ENABLE -DIFX_SOLUTION_DESIGNER_LETH_ENABLE "-fC:/Users/KumarDharani/Documents/Aurix_Projects/Projects/iLLD_TC4D7_COM_ADS_Ethernet_Tx_Rx/TriCore Debug (TASKING)/TASKING_C_C___Compiler-Include_paths__-I_.opt" --iso=99 --c++14 --language=+volatile --exceptions --anachronisms --fp-model=2 -O0 --tradeoff=4 --compact-max-size=200 -g -Ctc49x -Y0 -N0 -Z0 --user-mode=hypervisor -o "$@" "$<"
Components/geth/geth_mac_fp.o: Components/geth/geth_mac_fp.src Components/geth/subdir.mk
	astc -Og -Os --no-warnings= --error-limit=42 --user-mode=hypervisor --core=tc1.8 -o  "$@" "$<"
Components/geth/geth_mdio.src: ../Components/geth/geth_mdio.c Components/geth/subdir.mk
	cctc -cs --dep-file="$(*F).d" --misrac-version=2004 -D__CPU__=tc49x -DIFX_PIN_PACKAGE_BGA292_COM -DCONFIG_DUT_BOARD -DCONFIG_BOARD_ETH_ENABLE -DCONFIG_BOARD_GETH_ENABLE -DCONFIG_BOARD_SERIALIO_ENABLE -DCONFIG_BOARD_LED_ENABLE -DIFX_SOLUTION_DESIGNER_GETH_ENABLE -DIFX_SOLUTION_DESIGNER_LETH_ENABLE "-fC:/Users/KumarDharani/Documents/Aurix_Projects/Projects/iLLD_TC4D7_COM_ADS_Ethernet_Tx_Rx/TriCore Debug (TASKING)/TASKING_C_C___Compiler-Include_paths__-I_.opt" --iso=99 --c++14 --language=+volatile --exceptions --anachronisms --fp-model=2 -O0 --tradeoff=4 --compact-max-size=200 -g -Ctc49x -Y0 -N0 -Z0 --user-mode=hypervisor -o "$@" "$<"
Components/geth/geth_mdio.o: Components/geth/geth_mdio.src Components/geth/subdir.mk
	astc -Og -Os --no-warnings= --error-limit=42 --user-mode=hypervisor --core=tc1.8 -o  "$@" "$<"
Components/geth/geth_prot.src: ../Components/geth/geth_prot.c Components/geth/subdir.mk
	cctc -cs --dep-file="$(*F).d" --misrac-version=2004 -D__CPU__=tc49x -DIFX_PIN_PACKAGE_BGA292_COM -DCONFIG_DUT_BOARD -DCONFIG_BOARD_ETH_ENABLE -DCONFIG_BOARD_GETH_ENABLE -DCONFIG_BOARD_SERIALIO_ENABLE -DCONFIG_BOARD_LED_ENABLE -DIFX_SOLUTION_DESIGNER_GETH_ENABLE -DIFX_SOLUTION_DESIGNER_LETH_ENABLE "-fC:/Users/KumarDharani/Documents/Aurix_Projects/Projects/iLLD_TC4D7_COM_ADS_Ethernet_Tx_Rx/TriCore Debug (TASKING)/TASKING_C_C___Compiler-Include_paths__-I_.opt" --iso=99 --c++14 --language=+volatile --exceptions --anachronisms --fp-model=2 -O0 --tradeoff=4 --compact-max-size=200 -g -Ctc49x -Y0 -N0 -Z0 --user-mode=hypervisor -o "$@" "$<"
Components/geth/geth_prot.o: Components/geth/geth_prot.src Components/geth/subdir.mk
	astc -Og -Os --no-warnings= --error-limit=42 --user-mode=hypervisor --core=tc1.8 -o  "$@" "$<"

clean: clean-Components-2f-geth

clean-Components-2f-geth:
	-$(RM) Components/geth/geth_brdg.d Components/geth/geth_brdg.o Components/geth/geth_brdg.src Components/geth/geth_dma.d Components/geth/geth_dma.o Components/geth/geth_dma.src Components/geth/geth_init.d Components/geth/geth_init.o Components/geth/geth_init.src Components/geth/geth_mac.d Components/geth/geth_mac.o Components/geth/geth_mac.src Components/geth/geth_mac_fp.d Components/geth/geth_mac_fp.o Components/geth/geth_mac_fp.src Components/geth/geth_mdio.d Components/geth/geth_mdio.o Components/geth/geth_mdio.src Components/geth/geth_prot.d Components/geth/geth_prot.o Components/geth/geth_prot.src

.PHONY: clean-Components-2f-geth

