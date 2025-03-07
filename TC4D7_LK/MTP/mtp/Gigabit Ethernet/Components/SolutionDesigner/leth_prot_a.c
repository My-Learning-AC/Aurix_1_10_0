/**
 * \file leth_prot_a.c
 * \brief Functions to interface to the Geth MAC
 *
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
 */

#include "types.h"
#include "tc4d_leth_prot_cfg.h"
#include "leth_prot_a.h"

/* MAC/DMA Access Protection */
const uint32 LETH_ACCENn_WRA[] = {LETH_ACCENCH0_WRA, LETH_ACCENCH1_WRA, LETH_ACCENCH2_WRA, LETH_ACCENCH3_WRA, LETH_ACCENCH4_WRA, LETH_ACCENCH5_WRA, LETH_ACCENCH6_WRA, LETH_ACCENCH7_WRA};
const uint32 LETH_ACCENn_WRB[] = {LETH_ACCENCH0_WRB, LETH_ACCENCH1_WRB, LETH_ACCENCH2_WRB, LETH_ACCENCH3_WRB, LETH_ACCENCH4_WRB, LETH_ACCENCH5_WRB, LETH_ACCENCH6_WRB, LETH_ACCENCH7_WRB};
const uint32 LETH_ACCENn_RDA[] = {LETH_ACCENCH0_RDA, LETH_ACCENCH1_RDA, LETH_ACCENCH2_RDA, LETH_ACCENCH3_RDA, LETH_ACCENCH4_RDA, LETH_ACCENCH5_RDA, LETH_ACCENCH6_RDA, LETH_ACCENCH7_RDA};
const uint32 LETH_ACCENn_RDB[] = {LETH_ACCENCH0_RDB, LETH_ACCENCH1_RDB, LETH_ACCENCH2_RDB, LETH_ACCENCH3_RDB, LETH_ACCENCH4_RDB, LETH_ACCENCH5_RDB, LETH_ACCENCH6_RDB, LETH_ACCENCH7_RDB};

