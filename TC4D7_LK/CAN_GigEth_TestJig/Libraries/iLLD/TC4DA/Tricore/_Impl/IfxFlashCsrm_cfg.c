/**
 * \file IfxFlashCsrm_cfg.c
 * \brief FLASHCSRM on-chip implementation data
 *
 * \version iLLD_2_0_1_2_20
 * \copyright Copyright (c) 2021 Infineon Technologies AG. All rights reserved.
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
 */

/******************************************************************************/
/*----------------------------------Includes----------------------------------*/
/******************************************************************************/

#include "IfxFlashCsrm_cfg.h"

/******************************************************************************/
/*-----------------------Exported Variables/Constants-------------------------*/
/******************************************************************************/

IFX_CONST IfxFlashCsrm_flashSector IfxFlashCsrm_dFlashTableCfsLog[IFXFLASHCSRM_DFLASH_NUM_CFS_LOG_SECTORS] = {
    {0xAEE00000, 0xAEE007FF},
    {0xAEE00800, 0xAEE00FFF},
    {0xAEE01000, 0xAEE017FF},
    {0xAEE01800, 0xAEE01FFF},
    {0xAEE02000, 0xAEE027FF},
    {0xAEE02800, 0xAEE02FFF},
    {0xAEE03000, 0xAEE037FF},
    {0xAEE03800, 0xAEE03FFF},
    {0xAEE04000, 0xAEE047FF},
    {0xAEE04800, 0xAEE04FFF},
    {0xAEE05000, 0xAEE057FF},
    {0xAEE05800, 0xAEE05FFF},
    {0xAEE06000, 0xAEE067FF},
    {0xAEE06800, 0xAEE06FFF},
    {0xAEE07000, 0xAEE077FF},
    {0xAEE07800, 0xAEE07FFF},
    {0xAEE08000, 0xAEE087FF},
    {0xAEE08800, 0xAEE08FFF},
    {0xAEE09000, 0xAEE097FF},
    {0xAEE09800, 0xAEE09FFF},
    {0xAEE0A000, 0xAEE0A7FF},
    {0xAEE0A800, 0xAEE0AFFF}
};

IFX_CONST IfxFlashCsrm_flashSector IfxFlashCsrm_dFlashTableLog[IFXFLASHCSRM_DFLASH_NUM_LOG_SECTORS] = {
    {0xAE800000, 0xAE8007FF},
    {0xAE800800, 0xAE800FFF},
    {0xAE801000, 0xAE8017FF},
    {0xAE801800, 0xAE801FFF},
    {0xAE802000, 0xAE8027FF},
    {0xAE802800, 0xAE802FFF},
    {0xAE803000, 0xAE8037FF},
    {0xAE803800, 0xAE803FFF},
    {0xAE804000, 0xAE8047FF},
    {0xAE804800, 0xAE804FFF},
    {0xAE805000, 0xAE8057FF},
    {0xAE805800, 0xAE805FFF},
    {0xAE806000, 0xAE8067FF},
    {0xAE806800, 0xAE806FFF},
    {0xAE807000, 0xAE8077FF},
    {0xAE807800, 0xAE807FFF},
    {0xAE808000, 0xAE8087FF},
    {0xAE808800, 0xAE808FFF},
    {0xAE809000, 0xAE8097FF},
    {0xAE809800, 0xAE809FFF},
    {0xAE80A000, 0xAE80A7FF},
    {0xAE80A800, 0xAE80AFFF},
    {0xAE80B000, 0xAE80B7FF},
    {0xAE80B800, 0xAE80BFFF},
    {0xAE80C000, 0xAE80C7FF},
    {0xAE80C800, 0xAE80CFFF},
    {0xAE80D000, 0xAE80D7FF},
    {0xAE80D800, 0xAE80DFFF},
    {0xAE80E000, 0xAE80E7FF},
    {0xAE80E800, 0xAE80EFFF},
    {0xAE80F000, 0xAE80F7FF},
    {0xAE80F800, 0xAE80FFFF},
    {0xAE810000, 0xAE8107FF},
    {0xAE810800, 0xAE810FFF},
    {0xAE811000, 0xAE8117FF},
    {0xAE811800, 0xAE811FFF},
    {0xAE812000, 0xAE8127FF},
    {0xAE812800, 0xAE812FFF},
    {0xAE813000, 0xAE8137FF},
    {0xAE813800, 0xAE813FFF},
    {0xAE814000, 0xAE8147FF},
    {0xAE814800, 0xAE814FFF},
    {0xAE815000, 0xAE8157FF},
    {0xAE815800, 0xAE815FFF},
    {0xAE816000, 0xAE8167FF},
    {0xAE816800, 0xAE816FFF},
    {0xAE817000, 0xAE8177FF},
    {0xAE817800, 0xAE817FFF},
    {0xAE818000, 0xAE8187FF},
    {0xAE818800, 0xAE818FFF},
    {0xAE819000, 0xAE8197FF},
    {0xAE819800, 0xAE819FFF},
    {0xAE81A000, 0xAE81A7FF},
    {0xAE81A800, 0xAE81AFFF},
    {0xAE81B000, 0xAE81B7FF},
    {0xAE81B800, 0xAE81BFFF},
    {0xAE81C000, 0xAE81C7FF},
    {0xAE81C800, 0xAE81CFFF},
    {0xAE81D000, 0xAE81D7FF},
    {0xAE81D800, 0xAE81DFFF},
    {0xAE81E000, 0xAE81E7FF},
    {0xAE81E800, 0xAE81EFFF},
    {0xAE81F000, 0xAE81F7FF},
    {0xAE81F800, 0xAE81FFFF}
};

IFX_CONST IfxFlashCsrm_flashSector IfxFlashCsrm_dFlashTableUcbLog[IFXFLASHCSRM_DFLASH_NUM_UCB_LOG_SECTORS] = {
    {0xAEC00000, 0xAEC007FF},
    {0xAEC00800, 0xAEC00FFF},
    {0xAEC01000, 0xAEC017FF},
    {0xAEC01800, 0xAEC01FFF},
    {0xAEC02000, 0xAEC027FF},
    {0xAEC02800, 0xAEC02FFF},
    {0xAEC03000, 0xAEC037FF},
    {0xAEC03800, 0xAEC03FFF},
    {0xAEC04000, 0xAEC047FF},
    {0xAEC04800, 0xAEC04FFF},
    {0xAEC05000, 0xAEC057FF},
    {0xAEC05800, 0xAEC05FFF},
    {0xAEC06000, 0xAEC067FF},
    {0xAEC06800, 0xAEC06FFF},
    {0xAEC07000, 0xAEC077FF},
    {0xAEC07800, 0xAEC07FFF},
    {0xAEC08000, 0xAEC087FF},
    {0xAEC08800, 0xAEC08FFF},
    {0xAEC09000, 0xAEC097FF},
    {0xAEC09800, 0xAEC09FFF},
    {0xAEC0A000, 0xAEC0A7FF},
    {0xAEC0A800, 0xAEC0AFFF},
    {0xAEC0B000, 0xAEC0B7FF},
    {0xAEC0B800, 0xAEC0BFFF},
    {0xAEC0C000, 0xAEC0C7FF},
    {0xAEC0C800, 0xAEC0CFFF}
};

IFX_CONST IfxFlashCsrm_flashSector IfxFlashCsrm_pFlashTableLog[IFXFLASHCSRM_PFLASH_NUM_LOG_SECTORS] = {
    {0xA4000000, 0xA4003FFF},
    {0xA4004000, 0xA4007FFF},
    {0xA4008000, 0xA400BFFF},
    {0xA400C000, 0xA400FFFF},
    {0xA4010000, 0xA4013FFF},
    {0xA4014000, 0xA4017FFF},
    {0xA4018000, 0xA401BFFF},
    {0xA401C000, 0xA401FFFF},
    {0xA4020000, 0xA4023FFF},
    {0xA4024000, 0xA4027FFF},
    {0xA4028000, 0xA402BFFF},
    {0xA402C000, 0xA402FFFF},
    {0xA4030000, 0xA4033FFF},
    {0xA4034000, 0xA4037FFF},
    {0xA4038000, 0xA403BFFF},
    {0xA403C000, 0xA403FFFF},
    {0xA4040000, 0xA4043FFF},
    {0xA4044000, 0xA4047FFF},
    {0xA4048000, 0xA404BFFF},
    {0xA404C000, 0xA404FFFF},
    {0xA4050000, 0xA4053FFF},
    {0xA4054000, 0xA4057FFF},
    {0xA4058000, 0xA405BFFF},
    {0xA405C000, 0xA405FFFF},
    {0xA4060000, 0xA4063FFF},
    {0xA4064000, 0xA4067FFF},
    {0xA4068000, 0xA406BFFF},
    {0xA406C000, 0xA406FFFF},
    {0xA4070000, 0xA4073FFF},
    {0xA4074000, 0xA4077FFF},
    {0xA4078000, 0xA407BFFF},
    {0xA407C000, 0xA407FFFF},
    {0xA4080000, 0xA4083FFF},
    {0xA4084000, 0xA4087FFF},
    {0xA4088000, 0xA408BFFF},
    {0xA408C000, 0xA408FFFF},
    {0xA4090000, 0xA4093FFF},
    {0xA4094000, 0xA4097FFF},
    {0xA4098000, 0xA409BFFF},
    {0xA409C000, 0xA409FFFF},
    {0xA40A0000, 0xA40A3FFF},
    {0xA40A4000, 0xA40A7FFF},
    {0xA40A8000, 0xA40ABFFF},
    {0xA40AC000, 0xA40AFFFF},
    {0xA40B0000, 0xA40B3FFF},
    {0xA40B4000, 0xA40B7FFF},
    {0xA40B8000, 0xA40BBFFF},
    {0xA40BC000, 0xA40BFFFF},
    {0xA40C0000, 0xA40C3FFF},
    {0xA40C4000, 0xA40C7FFF},
    {0xA40C8000, 0xA40CBFFF},
    {0xA40CC000, 0xA40CFFFF},
    {0xA40D0000, 0xA40D3FFF},
    {0xA40D4000, 0xA40D7FFF},
    {0xA40D8000, 0xA40DBFFF},
    {0xA40DC000, 0xA40DFFFF},
    {0xA40E0000, 0xA40E3FFF},
    {0xA40E4000, 0xA40E7FFF},
    {0xA40E8000, 0xA40EBFFF},
    {0xA40EC000, 0xA40EFFFF},
    {0xA40F0000, 0xA40F3FFF},
    {0xA40F4000, 0xA40F7FFF},
    {0xA40F8000, 0xA40FBFFF},
    {0xA40FC000, 0xA40FFFFF}
};

IFX_CONST IfxFlashCsrm_flashSector IfxFlashCsrm_pFlashTablePhys[IFXFLASHCSRM_PFLASH_NUM_PHYSICAL_SECTORS] = {
    {0xA4000000, 0xA407FFFF},
    {0xA4080000, 0xA40FFFFF}
};
