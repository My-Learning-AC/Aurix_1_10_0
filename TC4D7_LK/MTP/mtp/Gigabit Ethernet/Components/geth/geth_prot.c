/**
 * \file geth_prot.c
 * \brief Functions to interface to the Geth MAC
 *
 * \version see header file
 * \copyright Copyright (c) 2019-2020 Infineon Technologies AG. All rights reserved.
 *
 *
 *                                 IMPORTANT NOTICE
 *
 *
 * Use of this file is subject to the terms of use agreed between (i) you or
 * the company in which ordinary course of business you are acting and (ii)
 * Infineon Technologies AG or its licensees. If and as long as no such
 * terms of use are agreed, use of this file is subject to following:


 * Boost Software License - Version 1.0 - August 17th, 2003

 * Permission is hereby granted, free of charge, to any person or
 * organization obtaining a copy of the software and accompanying
 * documentation covered by this license (the "Software") to use, reproduce,
 * display, distribute, execute, and transmit the Software, and to prepare
 * derivative works of the Software, and to permit third-parties to whom the
 * Software is furnished to do so, all subject to the following:

 * The copyright notices in the Software and this entire statement, including
 * the above license grant, this restriction and the following disclaimer, must
 * be included in all copies of the Software, in whole or in part, and all
 * derivative works of the Software, unless such copies or derivative works are
 * solely in the form of machine-executable object code generated by a source
 * language processor.

 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE, TITLE AND NON-INFRINGEMENT. IN NO EVENT
 * SHALL THE COPYRIGHT HOLDERS OR ANYONE DISTRIBUTING THE SOFTWARE BE LIABLE
 * FOR ANY DAMAGES OR OTHER LIABILITY, WHETHER IN CONTRACT, TORT OR OTHERWISE,
 * ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER
 * DEALINGS IN THE SOFTWARE.
 *
 */
#include "geth_prot.h"
#ifdef IFX_SOLUTION_DESIGNER_GETH_ENABLE
#include "geth_prot_a.h"
#endif

void Geth_AccessRights_Init(Ifx_GETH *const gethInstance_p)
{
    /* set access protection for DMA channels */
    for (int i_u8 = 0; i_u8 < 8; i_u8++)
    {
#ifdef IFX_SOLUTION_DESIGNER_GETH_ENABLE
        gethInstance_p->ACCENCH[i_u8].WRA.U = GETH_ACCENn_WRA[i_u8];
        gethInstance_p->ACCENCH[i_u8].WRB.U = GETH_ACCENn_WRB[i_u8];
        gethInstance_p->ACCENCH[i_u8].RDA.U = GETH_ACCENn_RDA[i_u8];
        gethInstance_p->ACCENCH[i_u8].RDB.U = GETH_ACCENn_RDB[i_u8];
#endif
    }
}
