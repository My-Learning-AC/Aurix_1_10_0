
/**********************************************************************************************************************
 * \file    eth_mii.c
 * \brief
 * \version V1.0.0
 * \date    27.11.2023
 * \author  mysliwid
 *********************************************************************************************************************/



/*********************************************************************************************************************/
/*-----------------------------------------------------Includes------------------------------------------------------*/
/*********************************************************************************************************************/
#include "eth_mii.h"
#include "Ifx_reg.h"
#include "types.h"
#include "hsphy.h"

/*********************************************************************************************************************/
/*-------------------------------------------------Global variables--------------------------------------------------*/
/*********************************************************************************************************************/

/*********************************************************************************************************************/
/*--------------------------------------------Private Variables/Constants--------------------------------------------*/
/*********************************************************************************************************************/

/*********************************************************************************************************************/
/*------------------------------------------------Function Prototypes------------------------------------------------*/
/*********************************************************************************************************************/

/*********************************************************************************************************************/
/*---------------------------------------------Function Implementations----------------------------------------------*/
/*********************************************************************************************************************/
void Mii_initInputPins(ETH_PHY_t *const phyInstance_p)
{
    if (phyInstance_p->ethType == ETH_TYPE_GETH)
    {
        if (phyInstance_p->gethPhyIo.ethPhyInterface == ETH_PHY_INTERFACE_RMII)
        {
            HSPHY_Enable();
            MODULE_HSPHY.ETH[phyInstance_p->hsphyPort_u8].B.EPR = IfxHsphy_EthCtrlExtPhySel_rmii;
            IfxPort_setPinModeInput(phyInstance_p->gethPhyIo.RMII.refclk->pin.port, phyInstance_p->gethPhyIo.RMII.refclk->pin.pinIndex, IfxPort_InputMode_noPullDevice);
            HSPHY_Init_Ethernet_RxClk(phyInstance_p->hsphyPort_u8, (IfxGeth_Rxclk_In*)phyInstance_p->gethPhyIo.RMII.refclk);
            IfxPort_setPinModeInput(phyInstance_p->gethPhyIo.RMII.rxd0->pin.port, phyInstance_p->gethPhyIo.RMII.rxd0->pin.pinIndex, IfxPort_InputMode_noPullDevice);
            HSPHY_Init_Ethernet_RxD0(phyInstance_p->hsphyPort_u8, phyInstance_p->gethPhyIo.RMII.rxd0);
            IfxPort_setPinModeInput(phyInstance_p->gethPhyIo.RMII.rxd1->pin.port, phyInstance_p->gethPhyIo.RMII.rxd1->pin.pinIndex, IfxPort_InputMode_noPullDevice);
            HSPHY_Init_Ethernet_RxD1(phyInstance_p->hsphyPort_u8, phyInstance_p->gethPhyIo.RMII.rxd0);
            IfxPort_setPinModeInput(phyInstance_p->gethPhyIo.RMII.crsdv->pin.port, phyInstance_p->gethPhyIo.RMII.crsdv->pin.pinIndex, IfxPort_InputMode_noPullDevice);
            HSPHY_Init_Ethernet_RxCtl(phyInstance_p->hsphyPort_u8, (IfxGeth_Rxctl_In*)phyInstance_p->gethPhyIo.RMII.crsdv);
        }
    }
    else
    {
        if (phyInstance_p->lethPhyIo.ethPhyInterface == ETH_PHY_INTERFACE_MII)
        {
            IfxPort_setPinControllerSelection(phyInstance_p->lethPhyIo.MII.rxc->pin.port, phyInstance_p->lethPhyIo.MII.rxc->pin.pinIndex);
            IfxPort_setPinControllerSelection(phyInstance_p->lethPhyIo.MII.rxd0->pin.port, phyInstance_p->lethPhyIo.MII.rxd0->pin.pinIndex);
            IfxPort_setPinControllerSelection(phyInstance_p->lethPhyIo.MII.rxd1->pin.port, phyInstance_p->lethPhyIo.MII.rxd1->pin.pinIndex);
            IfxPort_setPinControllerSelection(phyInstance_p->lethPhyIo.MII.rxd2->pin.port, phyInstance_p->lethPhyIo.MII.rxd2->pin.pinIndex);
            IfxPort_setPinControllerSelection(phyInstance_p->lethPhyIo.MII.rxd3->pin.port, phyInstance_p->lethPhyIo.MII.rxd3->pin.pinIndex);
            IfxPort_setPinControllerSelection(phyInstance_p->lethPhyIo.MII.rxdv->pin.port, phyInstance_p->lethPhyIo.MII.rxdv->pin.pinIndex);
            IfxPort_setPinControllerSelection(phyInstance_p->lethPhyIo.MII.rxer->pin.port, phyInstance_p->lethPhyIo.MII.rxer->pin.pinIndex);
            IfxPort_setPinControllerSelection(phyInstance_p->lethPhyIo.MII.crs->pin.port, phyInstance_p->lethPhyIo.MII.crs->pin.pinIndex);
            IfxPort_setPinControllerSelection(phyInstance_p->lethPhyIo.MII.col->pin.port, phyInstance_p->lethPhyIo.MII.col->pin.pinIndex);

            IfxPort_setPinModeInput(phyInstance_p->lethPhyIo.MII.rxc->pin.port, phyInstance_p->lethPhyIo.MII.rxc->pin.pinIndex, IfxPort_InputMode_noPullDevice);
            IfxPort_setPinModeInput(phyInstance_p->lethPhyIo.MII.rxd0->pin.port, phyInstance_p->lethPhyIo.MII.rxd0->pin.pinIndex, IfxPort_InputMode_noPullDevice);
            IfxPort_setPinModeInput(phyInstance_p->lethPhyIo.MII.rxd1->pin.port, phyInstance_p->lethPhyIo.MII.rxd1->pin.pinIndex, IfxPort_InputMode_noPullDevice);
            IfxPort_setPinModeInput(phyInstance_p->lethPhyIo.MII.rxd2->pin.port, phyInstance_p->lethPhyIo.MII.rxd2->pin.pinIndex, IfxPort_InputMode_noPullDevice);
            IfxPort_setPinModeInput(phyInstance_p->lethPhyIo.MII.rxd3->pin.port, phyInstance_p->lethPhyIo.MII.rxd3->pin.pinIndex, IfxPort_InputMode_noPullDevice);
            IfxPort_setPinModeInput(phyInstance_p->lethPhyIo.MII.rxdv->pin.port, phyInstance_p->lethPhyIo.MII.rxdv->pin.pinIndex, IfxPort_InputMode_noPullDevice);
            IfxPort_setPinModeInput(phyInstance_p->lethPhyIo.MII.rxer->pin.port, phyInstance_p->lethPhyIo.MII.rxer->pin.pinIndex, IfxPort_InputMode_noPullDevice);
            IfxPort_setPinModeInput(phyInstance_p->lethPhyIo.MII.crs->pin.port, phyInstance_p->lethPhyIo.MII.crs->pin.pinIndex, IfxPort_InputMode_noPullDevice);
            IfxPort_setPinModeInput(phyInstance_p->lethPhyIo.MII.col->pin.port, phyInstance_p->lethPhyIo.MII.col->pin.pinIndex, IfxPort_InputMode_noPullDevice);

            MODULE_LETH0.P[phyInstance_p->macPort_u8].PORTCTRL0.B.CRS = phyInstance_p->lethPhyIo.MII.crs->select;
            MODULE_LETH0.P[phyInstance_p->macPort_u8].PORTCTRL0.B.COL = phyInstance_p->lethPhyIo.MII.col->select;
            MODULE_LETH0.P[phyInstance_p->macPort_u8].PORTCTRL0.B.REFCLK = phyInstance_p->lethPhyIo.MII.rxc->select;
            MODULE_LETH0.P[phyInstance_p->macPort_u8].PORTCTRL0.B.RXD0 = phyInstance_p->lethPhyIo.MII.rxd0->select;
            MODULE_LETH0.P[phyInstance_p->macPort_u8].PORTCTRL0.B.RXD1 = phyInstance_p->lethPhyIo.MII.rxd1->select;
            MODULE_LETH0.P[phyInstance_p->macPort_u8].PORTCTRL0.B.RXD2 = phyInstance_p->lethPhyIo.MII.rxd2->select;
            MODULE_LETH0.P[phyInstance_p->macPort_u8].PORTCTRL0.B.RXD3 = phyInstance_p->lethPhyIo.MII.rxd3->select;
            MODULE_LETH0.P[phyInstance_p->macPort_u8].PORTCTRL0.B.RXDV = phyInstance_p->lethPhyIo.MII.rxdv->select;
            MODULE_LETH0.P[phyInstance_p->macPort_u8].PORTCTRL0.B.RXER = phyInstance_p->lethPhyIo.MII.rxer->select;
            MODULE_LETH0.P[phyInstance_p->macPort_u8].PORTCTRL0.B.EPR = 0;
        }
        if (phyInstance_p->lethPhyIo.ethPhyInterface == ETH_PHY_INTERFACE_RMII)
        {
            IfxPort_setPinControllerSelection(phyInstance_p->lethPhyIo.RMII.rxclk->pin.port, phyInstance_p->lethPhyIo.RMII.rxclk->pin.pinIndex);
            IfxPort_setPinModeInput(phyInstance_p->lethPhyIo.RMII.rxclk->pin.port, phyInstance_p->lethPhyIo.RMII.rxclk->pin.pinIndex, IfxPort_InputMode_noPullDevice);
            IfxPort_setPinPadDriver(phyInstance_p->lethPhyIo.RMII.rxclk->pin.port, phyInstance_p->lethPhyIo.RMII.rxclk->pin.pinIndex, IfxPort_PadDriver_cmosAutomotiveSpeed1);
            MODULE_LETH0.P[phyInstance_p->macPort_u8].PORTCTRL0.B.REFCLK = phyInstance_p->lethPhyIo.RMII.rxclk->select;

            IfxPort_setPinControllerSelection(phyInstance_p->lethPhyIo.RMII.rxd0->pin.port, phyInstance_p->lethPhyIo.RMII.rxd0->pin.pinIndex);
            IfxPort_setPinModeInput(phyInstance_p->lethPhyIo.RMII.rxd0->pin.port, phyInstance_p->lethPhyIo.RMII.rxd0->pin.pinIndex, IfxPort_InputMode_noPullDevice);
            IfxPort_setPinPadDriver(phyInstance_p->lethPhyIo.RMII.rxd0->pin.port, phyInstance_p->lethPhyIo.RMII.rxd0->pin.pinIndex, IfxPort_PadDriver_cmosAutomotiveSpeed1);
            MODULE_LETH0.P[phyInstance_p->macPort_u8].PORTCTRL0.B.RXD0 = phyInstance_p->lethPhyIo.RMII.rxd0->select;

            IfxPort_setPinControllerSelection(phyInstance_p->lethPhyIo.RMII.rxd1->pin.port, phyInstance_p->lethPhyIo.RMII.rxd1->pin.pinIndex);
            IfxPort_setPinModeInput(phyInstance_p->lethPhyIo.RMII.rxd1->pin.port, phyInstance_p->lethPhyIo.RMII.rxd1->pin.pinIndex, IfxPort_InputMode_noPullDevice);
            IfxPort_setPinPadDriver(phyInstance_p->lethPhyIo.RMII.rxd1->pin.port, phyInstance_p->lethPhyIo.RMII.rxd1->pin.pinIndex, IfxPort_PadDriver_cmosAutomotiveSpeed1);
            MODULE_LETH0.P[phyInstance_p->macPort_u8].PORTCTRL0.B.RXD1 = phyInstance_p->lethPhyIo.RMII.rxd1->select;

            IfxPort_setPinControllerSelection(phyInstance_p->lethPhyIo.RMII.rxdv->pin.port, phyInstance_p->lethPhyIo.RMII.rxdv->pin.pinIndex);
            IfxPort_setPinModeInput(phyInstance_p->lethPhyIo.RMII.rxdv->pin.port, phyInstance_p->lethPhyIo.RMII.rxdv->pin.pinIndex, IfxPort_InputMode_noPullDevice);
            IfxPort_setPinPadDriver(phyInstance_p->lethPhyIo.RMII.rxdv->pin.port, phyInstance_p->lethPhyIo.RMII.rxdv->pin.pinIndex, IfxPort_PadDriver_cmosAutomotiveSpeed1);
            MODULE_LETH0.P[phyInstance_p->macPort_u8].PORTCTRL0.B.RXDV = phyInstance_p->lethPhyIo.RMII.rxdv->select;

            MODULE_LETH0.P[phyInstance_p->macPort_u8].PORTCTRL0.B.EPR = 1;
        }
        if (phyInstance_p->lethPhyIo.ethPhyInterface == ETH_PHY_INTERFACE_TC14)
        {
            IfxPort_setPinControllerSelection(phyInstance_p->lethPhyIo.TC14.rxd->pin.port, phyInstance_p->lethPhyIo.TC14.rxd->pin.pinIndex);
            IfxPort_setPinModeInput(phyInstance_p->lethPhyIo.TC14.rxd->pin.port, phyInstance_p->lethPhyIo.TC14.rxd->pin.pinIndex, IfxPort_InputMode_noPullDevice);
            IfxPort_setPinPadDriver(phyInstance_p->lethPhyIo.TC14.rxd->pin.port, phyInstance_p->lethPhyIo.TC14.rxd->pin.pinIndex, IfxPort_PadDriver_cmosAutomotiveSpeed1);
            MODULE_LETH0.P[phyInstance_p->macPort_u8].PORTCTRL0.B.RXD = phyInstance_p->lethPhyIo.TC14.rxd->select;
            MODULE_LETH0.P[phyInstance_p->macPort_u8].PORTCTRL0.B.RXDEN = 1;

            IfxPort_setPinControllerSelection(phyInstance_p->lethPhyIo.TC14.ed->pin.port, phyInstance_p->lethPhyIo.TC14.ed->pin.pinIndex);
            IfxPort_setPinModeInput(phyInstance_p->lethPhyIo.TC14.ed->pin.port, phyInstance_p->lethPhyIo.TC14.ed->pin.pinIndex, IfxPort_InputMode_noPullDevice);
            IfxPort_setPinPadDriver(phyInstance_p->lethPhyIo.TC14.ed->pin.port, phyInstance_p->lethPhyIo.TC14.ed->pin.pinIndex, IfxPort_PadDriver_cmosAutomotiveSpeed1);
            //MODULE_LETH0.P[phyInstance_p->macPort_u8].PORTCTRL0.B.RXD = phyInstance_p->lethPhyIo.TC14.rxd->select;

            MODULE_LETH0.P[phyInstance_p->macPort_u8].PORTCTRL0.B.EPR = 3;
        }
    }
}

void Mii_initOutputPins(ETH_PHY_t *const phyInstance_p)
{
    if (phyInstance_p->ethType == ETH_TYPE_GETH)
    {
        if (phyInstance_p->gethPhyIo.ethPhyInterface == ETH_PHY_INTERFACE_RMII)
        {
            IfxPort_setPinPadDriver(phyInstance_p->gethPhyIo.RMII.txd0->pin.port , phyInstance_p->gethPhyIo.RMII.txd0->pin.pinIndex, IfxPort_PadDriver_cmosAutomotiveSpeed1);
            IfxPort_setPinModeOutput(phyInstance_p->gethPhyIo.RMII.txd0->pin.port, phyInstance_p->gethPhyIo.RMII.txd0->pin.pinIndex, IfxPort_OutputMode_pushPull           , phyInstance_p->gethPhyIo.RMII.txd0->select);
            IfxPort_resetPinControllerSelection(phyInstance_p->gethPhyIo.RMII.txd0->pin.port, phyInstance_p->gethPhyIo.RMII.txd0->pin.pinIndex);

            IfxPort_setPinPadDriver(phyInstance_p->gethPhyIo.RMII.txd1->pin.port , phyInstance_p->gethPhyIo.RMII.txd1->pin.pinIndex, IfxPort_PadDriver_cmosAutomotiveSpeed1);
            IfxPort_setPinModeOutput(phyInstance_p->gethPhyIo.RMII.txd1->pin.port, phyInstance_p->gethPhyIo.RMII.txd1->pin.pinIndex, IfxPort_OutputMode_pushPull           , phyInstance_p->gethPhyIo.RMII.txd1->select);
            IfxPort_resetPinControllerSelection(phyInstance_p->gethPhyIo.RMII.txd1->pin.port, phyInstance_p->gethPhyIo.RMII.txd1->pin.pinIndex);

            IfxPort_setPinPadDriver(phyInstance_p->gethPhyIo.RMII.txen->pin.port , phyInstance_p->gethPhyIo.RMII.txen->pin.pinIndex, IfxPort_PadDriver_cmosAutomotiveSpeed1);
            IfxPort_setPinModeOutput(phyInstance_p->gethPhyIo.RMII.txen->pin.port, phyInstance_p->gethPhyIo.RMII.txen->pin.pinIndex, IfxPort_OutputMode_pushPull           , phyInstance_p->gethPhyIo.RMII.txen->select);
            IfxPort_resetPinControllerSelection(phyInstance_p->gethPhyIo.RMII.txen->pin.port, phyInstance_p->gethPhyIo.RMII.txen->pin.pinIndex);
        }
    }
    else
    {
        if (phyInstance_p->lethPhyIo.ethPhyInterface == ETH_PHY_INTERFACE_MII)
        {
            IfxPort_setPinPadDriver (phyInstance_p->lethPhyIo.MII.txc->pin.port , phyInstance_p->lethPhyIo.MII.txc->pin.pinIndex , IfxPort_PadDriver_cmosAutomotiveSpeed1);
            IfxPort_setPinModeOutput(phyInstance_p->lethPhyIo.MII.txc->pin.port , phyInstance_p->lethPhyIo.MII.txc->pin.pinIndex , IfxPort_OutputMode_pushPull           , phyInstance_p->lethPhyIo.MII.txd0->select);
            IfxPort_setPinPadDriver (phyInstance_p->lethPhyIo.MII.txd0->pin.port, phyInstance_p->lethPhyIo.MII.txd0->pin.pinIndex, IfxPort_PadDriver_cmosAutomotiveSpeed1);
            IfxPort_setPinModeOutput(phyInstance_p->lethPhyIo.MII.txd0->pin.port, phyInstance_p->lethPhyIo.MII.txd0->pin.pinIndex, IfxPort_OutputMode_pushPull           , phyInstance_p->lethPhyIo.MII.txd0->select);
            IfxPort_setPinPadDriver (phyInstance_p->lethPhyIo.MII.txd1->pin.port, phyInstance_p->lethPhyIo.MII.txd1->pin.pinIndex, IfxPort_PadDriver_cmosAutomotiveSpeed1);
            IfxPort_setPinModeOutput(phyInstance_p->lethPhyIo.MII.txd1->pin.port, phyInstance_p->lethPhyIo.MII.txd1->pin.pinIndex, IfxPort_OutputMode_pushPull           , phyInstance_p->lethPhyIo.MII.txd1->select);
            IfxPort_setPinPadDriver (phyInstance_p->lethPhyIo.MII.txd2->pin.port, phyInstance_p->lethPhyIo.MII.txd2->pin.pinIndex, IfxPort_PadDriver_cmosAutomotiveSpeed1);
            IfxPort_setPinModeOutput(phyInstance_p->lethPhyIo.MII.txd2->pin.port, phyInstance_p->lethPhyIo.MII.txd2->pin.pinIndex, IfxPort_OutputMode_pushPull           , phyInstance_p->lethPhyIo.MII.txd1->select);
            IfxPort_setPinPadDriver (phyInstance_p->lethPhyIo.MII.txd3->pin.port, phyInstance_p->lethPhyIo.MII.txd3->pin.pinIndex, IfxPort_PadDriver_cmosAutomotiveSpeed1);
            IfxPort_setPinModeOutput(phyInstance_p->lethPhyIo.MII.txd3->pin.port, phyInstance_p->lethPhyIo.MII.txd3->pin.pinIndex, IfxPort_OutputMode_pushPull           , phyInstance_p->lethPhyIo.MII.txd1->select);
            IfxPort_setPinPadDriver (phyInstance_p->lethPhyIo.MII.txen->pin.port, phyInstance_p->lethPhyIo.MII.txen->pin.pinIndex, IfxPort_PadDriver_cmosAutomotiveSpeed1);
            IfxPort_setPinModeOutput(phyInstance_p->lethPhyIo.MII.txen->pin.port, phyInstance_p->lethPhyIo.MII.txen->pin.pinIndex, IfxPort_OutputMode_pushPull           , phyInstance_p->lethPhyIo.MII.txen->select);
        }
        if (phyInstance_p->lethPhyIo.ethPhyInterface == ETH_PHY_INTERFACE_RMII)
        {
            IfxPort_setPinModeOutput(phyInstance_p->lethPhyIo.RMII.txd0->pin.port, phyInstance_p->lethPhyIo.RMII.txd0->pin.pinIndex, IfxPort_OutputMode_pushPull, phyInstance_p->lethPhyIo.RMII.txd0->select);
            IfxPort_setPinPadDriver(phyInstance_p->lethPhyIo.RMII.txd0->pin.port, phyInstance_p->lethPhyIo.RMII.txd0->pin.pinIndex, IfxPort_PadDriver_cmosAutomotiveSpeed1);
            IfxPort_resetPinControllerSelection(phyInstance_p->lethPhyIo.RMII.txd0->pin.port, phyInstance_p->lethPhyIo.RMII.txd0->pin.pinIndex);

            IfxPort_setPinModeOutput(phyInstance_p->lethPhyIo.RMII.txd1->pin.port, phyInstance_p->lethPhyIo.RMII.txd1->pin.pinIndex, IfxPort_OutputMode_pushPull, phyInstance_p->lethPhyIo.RMII.txd1->select);
            IfxPort_setPinPadDriver(phyInstance_p->lethPhyIo.RMII.txd1->pin.port, phyInstance_p->lethPhyIo.RMII.txd1->pin.pinIndex, IfxPort_PadDriver_cmosAutomotiveSpeed1);
            IfxPort_resetPinControllerSelection(phyInstance_p->lethPhyIo.RMII.txd1->pin.port, phyInstance_p->lethPhyIo.RMII.txd1->pin.pinIndex);

            IfxPort_setPinModeOutput(phyInstance_p->lethPhyIo.RMII.txen->pin.port, phyInstance_p->lethPhyIo.RMII.txen->pin.pinIndex, IfxPort_OutputMode_pushPull, phyInstance_p->lethPhyIo.RMII.txen->select);
            IfxPort_setPinPadDriver(phyInstance_p->lethPhyIo.RMII.txen->pin.port, phyInstance_p->lethPhyIo.RMII.txen->pin.pinIndex, IfxPort_PadDriver_cmosAutomotiveSpeed1);
            IfxPort_resetPinControllerSelection(phyInstance_p->lethPhyIo.RMII.txen->pin.port, phyInstance_p->lethPhyIo.RMII.txen->pin.pinIndex);
        }
        if (phyInstance_p->lethPhyIo.ethPhyInterface == ETH_PHY_INTERFACE_TC14)
        {
            IfxPort_setPinModeOutput(phyInstance_p->lethPhyIo.TC14.txd->pin.port, phyInstance_p->lethPhyIo.TC14.txd->pin.pinIndex, IfxPort_OutputMode_pushPull, phyInstance_p->lethPhyIo.TC14.txd->select);
            IfxPort_setPinPadDriver(phyInstance_p->lethPhyIo.TC14.txd->pin.port, phyInstance_p->lethPhyIo.TC14.txd->pin.pinIndex, IfxPort_PadDriver_cmosAutomotiveSpeed1);
            IfxPort_resetPinControllerSelection(phyInstance_p->lethPhyIo.TC14.txd->pin.port, phyInstance_p->lethPhyIo.TC14.txd->pin.pinIndex);
        }
    }
}

sint32 Mii_defaultLinkUp(ETH_PHY_t *const phyInstance_p)
{
    return SUCCESS;
}
