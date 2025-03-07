/**
 * \file IfxCscu_PinMap_BGA292_COM.h
 * \brief CSCU  details
 * \ingroup IfxLld_Cscu
 *
 * \version iLLD_2_0_1_2_20
 * \copyright Copyright (c) 2023 Infineon Technologies AG. All rights reserved.
 *
 *
 *
 *                                 IMPORTANT NOTICE
 *
 * Use of this file is subject to the terms of use agreed between (i) you or
 * the company in which ordinary course of business you are acting and (ii)
 * Infineon Technologies AG or its licensees. If and as long as no such terms
 * of use are agreed, use of this file is subject to following:
 *
 * Boost Software License - Version 1.0 - August 17th, 2003
 *
 * Permission is hereby granted, free of charge, to any person or organization
 * obtaining a copy of the software and accompanying documentation covered by
 * this license (the "Software") to use, reproduce, display, distribute,
 * execute, and transmit the Software, and to prepare derivative works of the
 * Software, and to permit third-parties to whom the Software is furnished to
 * do so, all subject to the following:
 *
 * The copyright notices in the Software and this entire statement, including
 * the above license grant, this restriction and the following disclaimer, must
 * be included in all copies of the Software, in whole or in part, and all
 * derivative works of the Software, unless such copies or derivative works are
 * solely in the form of machine-executable object code generated by a source
 * language processor.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE, TITLE AND NON-INFRINGEMENT. IN NO EVENT
 * SHALL THE COPYRIGHT HOLDERS OR ANYONE DISTRIBUTING THE SOFTWARE BE LIABLE
 * FOR ANY DAMAGES OR OTHER LIABILITY, WHETHER IN CONTRACT, TORT OR OTHERWISE,
 * ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER
 * DEALINGS IN THE SOFTWARE.
 *
 *
 * Version: MC_ACE_A3G_HWA_Ports/Unknown
 * Document: TC4Dx_Pin_Assignment_v0.45_LETH_patched.xls
 *
 * \defgroup IfxLld_Cscu_
 * \ingroup IfxLld_Cscu
 * \defgroup IfxLld_Cscu__Pinmap Variables Pinmap Variables
 * \ingroup IfxLld_Cscu_
 * \defgroup IfxLld_Cscu__PinTables PinTables
 * \ingroup IfxLld_Cscu_
 */

#ifndef IFXCSCU_PINMAP_BGA292_COM_H
#define IFXCSCU_PINMAP_BGA292_COM_H 1

/******************************************************************************/
/*----------------------------------Includes----------------------------------*/
/******************************************************************************/

#include "IfxCscu_PinMap.h"

/******************************************************************************/
/*-----------------------------------Macros-----------------------------------*/
/******************************************************************************/

#define IFXCSCU_PINMAP_NUM_MODULES        1

#define IFXCSCU_PINMAP_CSRM_OUT_NUM_ITEMS 2

/******************************************************************************/
/*-------------------Global Exported Variables/Constants----------------------*/
/******************************************************************************/
/** \brief Pin Output Value
 */
IFX_EXTERN IfxCscu_Csrm_Out IfxCscu_CSRM1_P21_0_OUT;

/** \brief Pin Output Value
 */
IFX_EXTERN IfxCscu_Csrm_Out IfxCscu_CSRM2_P21_1_OUT;

/** \addtogroup IfxLld_Cscu__PinTables
 * \{ */

/******************************************************************************/
/*-------------------Global Exported Variables/Constants----------------------*/
/******************************************************************************/
/** \brief IfxCscu_Csrm_Out Table
 */
IFX_EXTERN IFX_CONST IfxCscu_Csrm_Out *IfxCscu_Csrm_Out_pinTable[IFXCSCU_PINMAP_NUM_MODULES][IFXCSCU_PINMAP_CSRM_OUT_NUM_ITEMS];

/** \} */

#endif /* IFXCSCU_PINMAP_BGA292_COM_H */
