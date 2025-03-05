
/**********************************************************************************************************************
 * \file    geth_init.c
 * \brief
 * \version V1.0.0
 * \date    27.11.2023
 * \author  mysliwid
 *********************************************************************************************************************/


/*********************************************************************************************************************/
/*-----------------------------------------------------Includes------------------------------------------------------*/
/*********************************************************************************************************************/
#include <stdio.h>
#include "geth_init.h"
#include "types.h"
#include "IfxHsphy.h"
#include "IfxHsphy_hsphy.h"
#include "Ifx_reg.h"
#include "geth_prot.h"
#include "geth_mac.h"
#include "eth_mdio.h"
#include "eth_phy.h"
#include "geth_brdg.h"
#include "geth_dma.h"
#include "hsphy.h"
#include "eth_mii.h"
#include "IfxPort_PinMap.h"

/*********************************************************************************************************************/
/*-------------------------------------------------Global variables--------------------------------------------------*/
/*********************************************************************************************************************/
extern ETH_PHY_t *ethPhy0_p;
/*********************************************************************************************************************/
/*--------------------------------------------Private Variables/Constants--------------------------------------------*/
/*********************************************************************************************************************/

/*********************************************************************************************************************/
/*------------------------------------------------Function Prototypes------------------------------------------------*/
/*********************************************************************************************************************/

/*********************************************************************************************************************/
/*---------------------------------------------Function Implementations----------------------------------------------*/
/*********************************************************************************************************************/
sint32 Geth_Init_Phase1(Ifx_GETH *const gethInstance_p, const uint32 moduleToInit_u32)
{
    boolean enabled_b;

    /*********************************************************************************************************************************************/
    /* set up module structs                                                                                                                     */
    /*********************************************************************************************************************************************/
    Geth_Mac_initStruct(gethInstance_p);
    Geth_Dma_initStruct(gethInstance_p);

    /*********************************************************************************************************************************************/
    /* enable GETH0 module                                                                                                                       */
    /*********************************************************************************************************************************************/
    if (Geth_isModuleEnabled(gethInstance_p, &enabled_b) == SUCCESS)
    {
        if (enabled_b == FALSE)
        {
            /* Enables the MAC and waits until it is enabled *
             * MODULE_GETH0.CLC.B.DISR = 0u;                 */
            printf("MODULE_GETH0 enable");
            IfxGeth_enableModule(gethInstance_p);
            printf(" - done"EOL);

            /* Resets the MAC and waits until it is finished *
             * MODULE_GETH0.RST.CTRLA.B.KRST = 1u;           *
             * MODULE_GETH0.RST.CTRLB.B.KRST = 1u;           */
            printf("MODULE_GETH0 reset ");
            IfxGeth_resetModule(gethInstance_p);
            printf(" - done"EOL);
        }
    }

    /*********************************************************************************************************************************************/
    /* set Access Rights                                                                                                                         */
    /*********************************************************************************************************************************************/
    Geth_AccessRights_Init(gethInstance_p);

    /*********************************************************************************************************************************************/
    /* enable HSPHY module                                                                                                                       */
    /*********************************************************************************************************************************************/
    if (IfxHsphy_isModuleEnabled(&MODULE_HSPHY) == FALSE)
    {
        printf("MODULE_HSPHY enable");
        IfxHsphy_enableModule(&MODULE_HSPHY);
        printf(" - done"EOL);

        printf("MODULE_HSPHY reset");
        IfxHsphy_resetModule(&MODULE_HSPHY);
        printf(" - done"EOL);
    }

    if (Geth_Mac_enablePort(((moduleToInit_u32 & GETH1_INIT) == GETH1_INIT ? (GETH_MAC1_MASK | GETH_MAC0_MASK) : GETH_MAC0_MASK) ) == FAILURE)
    {
        printf("Geth_Mac_PortEnable() = FAIL"EOL);
        return FAILURE;
    }

    return SUCCESS;
}

sint32 Geth_Init_Phy(const uint32 moduleToInit_u32)
{
    uint16 linkSpeed_u16;
    if (((moduleToInit_u32 & GETH0_INIT) != 0) && (ethPhy0_p != NULL))
    {
        Eth_initMdioPins(ethPhy0_p);
    }
    if (((moduleToInit_u32 & GETH0_INIT) != 0) && (ethPhy0_p != NULL))
    {
        if (ethPhy0_p->ethPhyFunc.phy_init(ethPhy0_p) == FAILURE)
        {
            return FAILURE;
        }

        if (ethPhy0_p->ethPhyFunc.phy_ethLinkUp(ethPhy0_p, &linkSpeed_u16) == FAILURE)
        {
            return FAILURE;
        }
        Mii_initInputPins(ethPhy0_p);
        Mii_initOutputPins(ethPhy0_p);
    }
    return SUCCESS;
}

sint32 Geth_Init_Phase2(const uint32 moduleToInit_u32,  uint16 linkSpeed)
{
    /*********************************************************************************************************************************************/
    /* init MACs                                                                                                                                 */
    /*********************************************************************************************************************************************/
    if (((moduleToInit_u32 & GETH0_INIT) != 0) && (ethPhy0_p != NULL))
    {
        printf("Geth.MAC0 init          ");
        if (Geth_Mac0_Init() == SUCCESS)
        {
            printf(" - SUCCESS"EOL);
        }
        else
        {
            printf(" - FAIL"EOL);
            return FAILURE;
        }

        if (Geth_Mac_setLinkSpeed(GETH_MAC0, linkSpeed) == FAILURE)
        {
            return FAILURE;
        }
    }
    return SUCCESS;
}
