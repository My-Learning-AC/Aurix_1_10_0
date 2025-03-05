
/**********************************************************************************************************************
 * \file    eth_mdio.c
 * \brief
 * \version V1.0.0
 * \date    27.11.2023
 * \author  mysliwid
 *********************************************************************************************************************/



/*********************************************************************************************************************/
/*-----------------------------------------------------Includes------------------------------------------------------*/
/*********************************************************************************************************************/
#include <stdio.h>
#include "IfxPort_PinMap.h"
#include "IfxGeth_PinMap.h"
#include "eth_mii.h"
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
void Eth_initMdioPins(ETH_PHY_t *const phyInstance_p)
{
    if (phyInstance_p->mdioType == ETH_TYPE_GETH)
    {
        MODULE_GETH0.PORT[phyInstance_p->mdioPort_u8].CORE.MDIO.CLAUSE_22_PORT.B.PTR0CL22 = phyInstance_p->phyClause45_u8 ^ 1;

        if (phyInstance_p->gethPhyIo.MDIO.intb != NULL)
        {
            IfxPort_setPinModeInput(phyInstance_p->gethPhyIo.MDIO.intb->port, phyInstance_p->gethPhyIo.MDIO.intb->pinIndex, IfxPort_InputMode_noPullDevice);
        }
        IfxPort_setPinModeInput(phyInstance_p->gethPhyIo.MDIO.mdio->pin.port, phyInstance_p->gethPhyIo.MDIO.mdio->pin.pinIndex, IfxPort_InputMode_noPullDevice);

        HSPHY_Enable();
        HSPHY_Init_Ethernet_Mdio(phyInstance_p->mdioPort_u8, phyInstance_p->gethPhyIo.MDIO.mdio);

        IfxPort_setPinModeOutput(phyInstance_p->gethPhyIo.MDIO.mdc->pin.port, phyInstance_p->gethPhyIo.MDIO.mdc->pin.pinIndex, IfxPort_OutputMode_pushPull, phyInstance_p->gethPhyIo.MDIO.mdc->select);
        P21_PCSRSEL.U = 0x0;
    }
    else
    {
        MODULE_LETH0.P[phyInstance_p->mdioPort_u8].PORTCTRL1.B.MDIOEN = 1;
        MODULE_LETH0.P[phyInstance_p->mdioPort_u8].PORTCTRL1.B.MDIO = phyInstance_p->lethPhyIo.MDIO.mdio->inSelect;

        if (phyInstance_p->lethPhyIo.MDIO.intb != NULL)
        {
            IfxPort_setPinModeInput(phyInstance_p->lethPhyIo.MDIO.intb->port, phyInstance_p->lethPhyIo.MDIO.intb->pinIndex, IfxPort_InputMode_noPullDevice);
        }
        IfxPort_setPinControllerSelection(phyInstance_p->lethPhyIo.MDIO.mdio->pin.port, phyInstance_p->lethPhyIo.MDIO.mdio->pin.pinIndex);
        IfxPort_setPinModeInput(phyInstance_p->lethPhyIo.MDIO.mdio->pin.port, phyInstance_p->lethPhyIo.MDIO.mdio->pin.pinIndex, IfxPort_InputMode_noPullDevice);
        IfxPort_setPinPadDriver(phyInstance_p->lethPhyIo.MDIO.mdio->pin.port, phyInstance_p->lethPhyIo.MDIO.mdio->pin.pinIndex, IfxPort_PadDriver_ttlSpeed1);

        IfxPort_setPinMode(phyInstance_p->lethPhyIo.MDIO.mdc->pin.port, phyInstance_p->lethPhyIo.MDIO.mdc->pin.pinIndex, (IfxPort_Mode)phyInstance_p->lethPhyIo.MDIO.mdc->select);
        IfxPort_setPinPadDriver(phyInstance_p->lethPhyIo.MDIO.mdc->pin.port, phyInstance_p->lethPhyIo.MDIO.mdc->pin.pinIndex, IfxPort_PadDriver_ttlSpeed1);

        P14_PCSRSEL.U = 0x0;
    }
}
