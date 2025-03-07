/**
 * \file IfxI2c_reg.h
 * \brief
 * \copyright Copyright (c) 2022 Infineon Technologies AG. All rights reserved.
 *
 *
 * Version: MC_ACE_A3G_HSI_I2C/V0.2.1.1.2
 * Specification: latest @ 2022-11-23 instance sheet @ MC_A3G_HWDDSOC_FUNCTIONAL_INSTANCE_SHEET/V13.1.1.1.12
 * MAY BE CHANGED BY USER [yes/no]: No
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
 * \defgroup IfxSfr_I2c_Registers_Cfg I2c address
 * \ingroup IfxSfr_I2c_Registers
 * 
 * \defgroup IfxSfr_I2c_Registers_Cfg_BaseAddress Base address
 * \ingroup IfxSfr_I2c_Registers_Cfg
 *
 * \defgroup IfxSfr_I2c_Registers_Cfg_I2c0 2-I2C0
 * \ingroup IfxSfr_I2c_Registers_Cfg
 *
 * \defgroup IfxSfr_I2c_Registers_Cfg_I2c1 2-I2C1
 * \ingroup IfxSfr_I2c_Registers_Cfg
 *
 * \defgroup IfxSfr_I2c_Registers_Cfg_I2c2 2-I2C2
 * \ingroup IfxSfr_I2c_Registers_Cfg
 *
 *
 */
#ifndef IFXI2C_REG_H
#define IFXI2C_REG_H 1
/******************************************************************************/
#include "IfxI2c_regdef.h"
/******************************************************************************/

/******************************************************************************/

/******************************************************************************/

/** \addtogroup IfxSfr_I2c_Registers_Cfg_BaseAddress
 * \{  */

/** \brief I2C object */
#define MODULE_I2C0 /*lint --e(923, 9078)*/ ((*(Ifx_I2C*)0xF44C0000u))
#define MODULE_I2C1 /*lint --e(923, 9078)*/ ((*(Ifx_I2C*)0xF44E0000u))
#define MODULE_I2C2 /*lint --e(923, 9078)*/ ((*(Ifx_I2C*)0xF4500000u))
/** \}  */


/******************************************************************************/
/******************************************************************************/
/** \addtogroup IfxSfr_I2c_Registers_Cfg_I2c0
 * \{  */
/** \brief 0, Clock control 1 register */
#define I2C0_CLC1 /*lint --e(923, 9078)*/ (*(volatile Ifx_I2C_CLC1*)0xF44C0000u)

/** \brief 8, Module identification register */
#define I2C0_ID1 /*lint --e(923, 9078)*/ (*(volatile Ifx_I2C_ID1*)0xF44C0008u)

/** \brief 10, RUN control register */
#define I2C0_RUNCTRL /*lint --e(923, 9078)*/ (*(volatile Ifx_I2C_RUNCTRL*)0xF44C0010u)

/** \brief 14, End data control register */
#define I2C0_ENDDCTRL /*lint --e(923, 9078)*/ (*(volatile Ifx_I2C_ENDDCTRL*)0xF44C0014u)

/** \brief 18, Fractional divider configuration register */
#define I2C0_FDIVCFG /*lint --e(923, 9078)*/ (*(volatile Ifx_I2C_FDIVCFG*)0xF44C0018u)

/** \brief 1C, Fractional divider high-speed mode configuration register */
#define I2C0_FDIVHIGHCFG /*lint --e(923, 9078)*/ (*(volatile Ifx_I2C_FDIVHIGHCFG*)0xF44C001Cu)

/** \brief 20, Address configuration register */
#define I2C0_ADDRCFG /*lint --e(923, 9078)*/ (*(volatile Ifx_I2C_ADDRCFG*)0xF44C0020u)

/** \brief 24, Bus status register */
#define I2C0_BUSSTAT /*lint --e(923, 9078)*/ (*(volatile Ifx_I2C_BUSSTAT*)0xF44C0024u)

/** \brief 28, FIFO configuration register */
#define I2C0_FIFOCFG /*lint --e(923, 9078)*/ (*(volatile Ifx_I2C_FIFOCFG*)0xF44C0028u)

/** \brief 2C, Maximum received packet size control register */
#define I2C0_MRPSCTRL /*lint --e(923, 9078)*/ (*(volatile Ifx_I2C_MRPSCTRL*)0xF44C002Cu)

/** \brief 30, Received packet size status register */
#define I2C0_RPSSTAT /*lint --e(923, 9078)*/ (*(volatile Ifx_I2C_RPSSTAT*)0xF44C0030u)

/** \brief 34, Transmit packet size control register */
#define I2C0_TPSCTRL /*lint --e(923, 9078)*/ (*(volatile Ifx_I2C_TPSCTRL*)0xF44C0034u)

/** \brief 38, Filled FIFO stages status register */
#define I2C0_FFSSTAT /*lint --e(923, 9078)*/ (*(volatile Ifx_I2C_FFSSTAT*)0xF44C0038u)

/** \brief 40, Timing configuration register */
#define I2C0_TIMCFG /*lint --e(923, 9078)*/ (*(volatile Ifx_I2C_TIMCFG*)0xF44C0040u)

/** \brief 60, Error interrupt request source mask register */
#define I2C0_ERRIRQSM /*lint --e(923, 9078)*/ (*(volatile Ifx_I2C_ERRIRQSM*)0xF44C0060u)

/** \brief 64, Error interrupt request source status register */
#define I2C0_ERRIRQSS /*lint --e(923, 9078)*/ (*(volatile Ifx_I2C_ERRIRQSS*)0xF44C0064u)

/** \brief 68, Error interrupt request source clear register */
#define I2C0_ERRIRQSC /*lint --e(923, 9078)*/ (*(volatile Ifx_I2C_ERRIRQSC*)0xF44C0068u)

/** \brief 70, Protocol interrupt request source mask register */
#define I2C0_PIRQSM /*lint --e(923, 9078)*/ (*(volatile Ifx_I2C_PIRQSM*)0xF44C0070u)

/** \brief 74, Protocol interrupt request source status register */
#define I2C0_PIRQSS /*lint --e(923, 9078)*/ (*(volatile Ifx_I2C_PIRQSS*)0xF44C0074u)

/** \brief 78, Protocol interrupt request source clear register */
#define I2C0_PIRQSC /*lint --e(923, 9078)*/ (*(volatile Ifx_I2C_PIRQSC*)0xF44C0078u)

/** \brief 80, Raw interrupt status register */
#define I2C0_RIS /*lint --e(923, 9078)*/ (*(volatile Ifx_I2C_RIS*)0xF44C0080u)

/** \brief 84, Interrupt mask control register */
#define I2C0_IMSC /*lint --e(923, 9078)*/ (*(volatile Ifx_I2C_IMSC*)0xF44C0084u)

/** \brief 88, Masked interrupt status register */
#define I2C0_MIS /*lint --e(923, 9078)*/ (*(volatile Ifx_I2C_MIS*)0xF44C0088u)

/** \brief 8C, Interrupt clear register */
#define I2C0_ICR /*lint --e(923, 9078)*/ (*(volatile Ifx_I2C_ICR*)0xF44C008Cu)

/** \brief 90, Interrupt set register */
#define I2C0_INTRSET /*lint --e(923, 9078)*/ (*(volatile Ifx_I2C_INTRSET*)0xF44C0090u)

/** \brief 8000, Transmission data register */
#define I2C0_TXD /*lint --e(923, 9078)*/ (*(volatile Ifx_I2C_TXD*)0xF44C8000u)

/** \brief C000, Reception data register */
#define I2C0_RXD /*lint --e(923, 9078)*/ (*(volatile Ifx_I2C_RXD*)0xF44CC000u)

/** \brief 0, Clock Control Register */
#define I2C0_CLC /*lint --e(923, 9078)*/ (*(volatile Ifx_I2C_CLC*)0xF44D0000u)

/** \brief 8, Module Identification Register */
#define I2C0_ID /*lint --e(923, 9078)*/ (*(volatile Ifx_I2C_ID*)0xF44D0008u)

/** \brief C, Reset Control Register A */
#define I2C0_RST_CTRLA /*lint --e(923, 9078)*/ (*(volatile Ifx_I2C_RST_CTRLA*)0xF44D000Cu)

/** \brief 10, Reset Control Register B */
#define I2C0_RST_CTRLB /*lint --e(923, 9078)*/ (*(volatile Ifx_I2C_RST_CTRLB*)0xF44D0010u)

/** \brief 14, Reset Status Register */
#define I2C0_RST_STAT /*lint --e(923, 9078)*/ (*(volatile Ifx_I2C_RST_STAT*)0xF44D0014u)

/** \brief 20, PROT Register Endinit */
#define I2C0_PROTE /*lint --e(923, 9078)*/ (*(volatile Ifx_I2C_PROT*)0xF44D0020u)

/** \brief 24, PROT Register Safe Endinit */
#define I2C0_PROTSE /*lint --e(923, 9078)*/ (*(volatile Ifx_I2C_PROT*)0xF44D0024u)

/** \brief 40, Write access enable register A */
#define I2C0_ACCEN_WRA /*lint --e(923, 9078)*/ (*(volatile Ifx_I2C_ACCEN_WRA*)0xF44D0040u)

/** \brief 44, Write access enable register B */
#define I2C0_ACCEN_WRB /*lint --e(923, 9078)*/ (*(volatile Ifx_I2C_ACCEN_WRB_FPI*)0xF44D0044u)

/** \brief 48, Read access enable register A */
#define I2C0_ACCEN_RDA /*lint --e(923, 9078)*/ (*(volatile Ifx_I2C_ACCEN_RDA*)0xF44D0048u)

/** \brief 4C, Read access enable register B */
#define I2C0_ACCEN_RDB /*lint --e(923, 9078)*/ (*(volatile Ifx_I2C_ACCEN_RDB_FPI*)0xF44D004Cu)

/** \brief 50, VM access enable register */
#define I2C0_ACCEN_VM /*lint --e(923, 9078)*/ (*(volatile Ifx_I2C_ACCEN_VM*)0xF44D0050u)

/** \brief 54, PRS access enable register */
#define I2C0_ACCEN_PRS /*lint --e(923, 9078)*/ (*(volatile Ifx_I2C_ACCEN_PRS*)0xF44D0054u)

/** \brief 60, General purpose control register */
#define I2C0_GPCTL /*lint --e(923, 9078)*/ (*(volatile Ifx_I2C_GPCTL*)0xF44D0060u)

/******************************************************************************/
/******************************************************************************/
/** \addtogroup IfxSfr_I2c_Registers_Cfg_I2c1
 * \{  */
/** \brief 0, Clock control 1 register */
#define I2C1_CLC1 /*lint --e(923, 9078)*/ (*(volatile Ifx_I2C_CLC1*)0xF44E0000u)

/** \brief 8, Module identification register */
#define I2C1_ID1 /*lint --e(923, 9078)*/ (*(volatile Ifx_I2C_ID1*)0xF44E0008u)

/** \brief 10, RUN control register */
#define I2C1_RUNCTRL /*lint --e(923, 9078)*/ (*(volatile Ifx_I2C_RUNCTRL*)0xF44E0010u)

/** \brief 14, End data control register */
#define I2C1_ENDDCTRL /*lint --e(923, 9078)*/ (*(volatile Ifx_I2C_ENDDCTRL*)0xF44E0014u)

/** \brief 18, Fractional divider configuration register */
#define I2C1_FDIVCFG /*lint --e(923, 9078)*/ (*(volatile Ifx_I2C_FDIVCFG*)0xF44E0018u)

/** \brief 1C, Fractional divider high-speed mode configuration register */
#define I2C1_FDIVHIGHCFG /*lint --e(923, 9078)*/ (*(volatile Ifx_I2C_FDIVHIGHCFG*)0xF44E001Cu)

/** \brief 20, Address configuration register */
#define I2C1_ADDRCFG /*lint --e(923, 9078)*/ (*(volatile Ifx_I2C_ADDRCFG*)0xF44E0020u)

/** \brief 24, Bus status register */
#define I2C1_BUSSTAT /*lint --e(923, 9078)*/ (*(volatile Ifx_I2C_BUSSTAT*)0xF44E0024u)

/** \brief 28, FIFO configuration register */
#define I2C1_FIFOCFG /*lint --e(923, 9078)*/ (*(volatile Ifx_I2C_FIFOCFG*)0xF44E0028u)

/** \brief 2C, Maximum received packet size control register */
#define I2C1_MRPSCTRL /*lint --e(923, 9078)*/ (*(volatile Ifx_I2C_MRPSCTRL*)0xF44E002Cu)

/** \brief 30, Received packet size status register */
#define I2C1_RPSSTAT /*lint --e(923, 9078)*/ (*(volatile Ifx_I2C_RPSSTAT*)0xF44E0030u)

/** \brief 34, Transmit packet size control register */
#define I2C1_TPSCTRL /*lint --e(923, 9078)*/ (*(volatile Ifx_I2C_TPSCTRL*)0xF44E0034u)

/** \brief 38, Filled FIFO stages status register */
#define I2C1_FFSSTAT /*lint --e(923, 9078)*/ (*(volatile Ifx_I2C_FFSSTAT*)0xF44E0038u)

/** \brief 40, Timing configuration register */
#define I2C1_TIMCFG /*lint --e(923, 9078)*/ (*(volatile Ifx_I2C_TIMCFG*)0xF44E0040u)

/** \brief 60, Error interrupt request source mask register */
#define I2C1_ERRIRQSM /*lint --e(923, 9078)*/ (*(volatile Ifx_I2C_ERRIRQSM*)0xF44E0060u)

/** \brief 64, Error interrupt request source status register */
#define I2C1_ERRIRQSS /*lint --e(923, 9078)*/ (*(volatile Ifx_I2C_ERRIRQSS*)0xF44E0064u)

/** \brief 68, Error interrupt request source clear register */
#define I2C1_ERRIRQSC /*lint --e(923, 9078)*/ (*(volatile Ifx_I2C_ERRIRQSC*)0xF44E0068u)

/** \brief 70, Protocol interrupt request source mask register */
#define I2C1_PIRQSM /*lint --e(923, 9078)*/ (*(volatile Ifx_I2C_PIRQSM*)0xF44E0070u)

/** \brief 74, Protocol interrupt request source status register */
#define I2C1_PIRQSS /*lint --e(923, 9078)*/ (*(volatile Ifx_I2C_PIRQSS*)0xF44E0074u)

/** \brief 78, Protocol interrupt request source clear register */
#define I2C1_PIRQSC /*lint --e(923, 9078)*/ (*(volatile Ifx_I2C_PIRQSC*)0xF44E0078u)

/** \brief 80, Raw interrupt status register */
#define I2C1_RIS /*lint --e(923, 9078)*/ (*(volatile Ifx_I2C_RIS*)0xF44E0080u)

/** \brief 84, Interrupt mask control register */
#define I2C1_IMSC /*lint --e(923, 9078)*/ (*(volatile Ifx_I2C_IMSC*)0xF44E0084u)

/** \brief 88, Masked interrupt status register */
#define I2C1_MIS /*lint --e(923, 9078)*/ (*(volatile Ifx_I2C_MIS*)0xF44E0088u)

/** \brief 8C, Interrupt clear register */
#define I2C1_ICR /*lint --e(923, 9078)*/ (*(volatile Ifx_I2C_ICR*)0xF44E008Cu)

/** \brief 90, Interrupt set register */
#define I2C1_INTRSET /*lint --e(923, 9078)*/ (*(volatile Ifx_I2C_INTRSET*)0xF44E0090u)

/** \brief 8000, Transmission data register */
#define I2C1_TXD /*lint --e(923, 9078)*/ (*(volatile Ifx_I2C_TXD*)0xF44E8000u)

/** \brief C000, Reception data register */
#define I2C1_RXD /*lint --e(923, 9078)*/ (*(volatile Ifx_I2C_RXD*)0xF44EC000u)

/** \brief 0, Clock Control Register */
#define I2C1_CLC /*lint --e(923, 9078)*/ (*(volatile Ifx_I2C_CLC*)0xF44F0000u)

/** \brief 8, Module Identification Register */
#define I2C1_ID /*lint --e(923, 9078)*/ (*(volatile Ifx_I2C_ID*)0xF44F0008u)

/** \brief C, Reset Control Register A */
#define I2C1_RST_CTRLA /*lint --e(923, 9078)*/ (*(volatile Ifx_I2C_RST_CTRLA*)0xF44F000Cu)

/** \brief 10, Reset Control Register B */
#define I2C1_RST_CTRLB /*lint --e(923, 9078)*/ (*(volatile Ifx_I2C_RST_CTRLB*)0xF44F0010u)

/** \brief 14, Reset Status Register */
#define I2C1_RST_STAT /*lint --e(923, 9078)*/ (*(volatile Ifx_I2C_RST_STAT*)0xF44F0014u)

/** \brief 20, PROT Register Endinit */
#define I2C1_PROTE /*lint --e(923, 9078)*/ (*(volatile Ifx_I2C_PROT*)0xF44F0020u)

/** \brief 24, PROT Register Safe Endinit */
#define I2C1_PROTSE /*lint --e(923, 9078)*/ (*(volatile Ifx_I2C_PROT*)0xF44F0024u)

/** \brief 40, Write access enable register A */
#define I2C1_ACCEN_WRA /*lint --e(923, 9078)*/ (*(volatile Ifx_I2C_ACCEN_WRA*)0xF44F0040u)

/** \brief 44, Write access enable register B */
#define I2C1_ACCEN_WRB /*lint --e(923, 9078)*/ (*(volatile Ifx_I2C_ACCEN_WRB_FPI*)0xF44F0044u)

/** \brief 48, Read access enable register A */
#define I2C1_ACCEN_RDA /*lint --e(923, 9078)*/ (*(volatile Ifx_I2C_ACCEN_RDA*)0xF44F0048u)

/** \brief 4C, Read access enable register B */
#define I2C1_ACCEN_RDB /*lint --e(923, 9078)*/ (*(volatile Ifx_I2C_ACCEN_RDB_FPI*)0xF44F004Cu)

/** \brief 50, VM access enable register */
#define I2C1_ACCEN_VM /*lint --e(923, 9078)*/ (*(volatile Ifx_I2C_ACCEN_VM*)0xF44F0050u)

/** \brief 54, PRS access enable register */
#define I2C1_ACCEN_PRS /*lint --e(923, 9078)*/ (*(volatile Ifx_I2C_ACCEN_PRS*)0xF44F0054u)

/** \brief 60, General purpose control register */
#define I2C1_GPCTL /*lint --e(923, 9078)*/ (*(volatile Ifx_I2C_GPCTL*)0xF44F0060u)

/******************************************************************************/
/******************************************************************************/
/** \addtogroup IfxSfr_I2c_Registers_Cfg_I2c2
 * \{  */
/** \brief 0, Clock control 1 register */
#define I2C2_CLC1 /*lint --e(923, 9078)*/ (*(volatile Ifx_I2C_CLC1*)0xF4500000u)

/** \brief 8, Module identification register */
#define I2C2_ID1 /*lint --e(923, 9078)*/ (*(volatile Ifx_I2C_ID1*)0xF4500008u)

/** \brief 10, RUN control register */
#define I2C2_RUNCTRL /*lint --e(923, 9078)*/ (*(volatile Ifx_I2C_RUNCTRL*)0xF4500010u)

/** \brief 14, End data control register */
#define I2C2_ENDDCTRL /*lint --e(923, 9078)*/ (*(volatile Ifx_I2C_ENDDCTRL*)0xF4500014u)

/** \brief 18, Fractional divider configuration register */
#define I2C2_FDIVCFG /*lint --e(923, 9078)*/ (*(volatile Ifx_I2C_FDIVCFG*)0xF4500018u)

/** \brief 1C, Fractional divider high-speed mode configuration register */
#define I2C2_FDIVHIGHCFG /*lint --e(923, 9078)*/ (*(volatile Ifx_I2C_FDIVHIGHCFG*)0xF450001Cu)

/** \brief 20, Address configuration register */
#define I2C2_ADDRCFG /*lint --e(923, 9078)*/ (*(volatile Ifx_I2C_ADDRCFG*)0xF4500020u)

/** \brief 24, Bus status register */
#define I2C2_BUSSTAT /*lint --e(923, 9078)*/ (*(volatile Ifx_I2C_BUSSTAT*)0xF4500024u)

/** \brief 28, FIFO configuration register */
#define I2C2_FIFOCFG /*lint --e(923, 9078)*/ (*(volatile Ifx_I2C_FIFOCFG*)0xF4500028u)

/** \brief 2C, Maximum received packet size control register */
#define I2C2_MRPSCTRL /*lint --e(923, 9078)*/ (*(volatile Ifx_I2C_MRPSCTRL*)0xF450002Cu)

/** \brief 30, Received packet size status register */
#define I2C2_RPSSTAT /*lint --e(923, 9078)*/ (*(volatile Ifx_I2C_RPSSTAT*)0xF4500030u)

/** \brief 34, Transmit packet size control register */
#define I2C2_TPSCTRL /*lint --e(923, 9078)*/ (*(volatile Ifx_I2C_TPSCTRL*)0xF4500034u)

/** \brief 38, Filled FIFO stages status register */
#define I2C2_FFSSTAT /*lint --e(923, 9078)*/ (*(volatile Ifx_I2C_FFSSTAT*)0xF4500038u)

/** \brief 40, Timing configuration register */
#define I2C2_TIMCFG /*lint --e(923, 9078)*/ (*(volatile Ifx_I2C_TIMCFG*)0xF4500040u)

/** \brief 60, Error interrupt request source mask register */
#define I2C2_ERRIRQSM /*lint --e(923, 9078)*/ (*(volatile Ifx_I2C_ERRIRQSM*)0xF4500060u)

/** \brief 64, Error interrupt request source status register */
#define I2C2_ERRIRQSS /*lint --e(923, 9078)*/ (*(volatile Ifx_I2C_ERRIRQSS*)0xF4500064u)

/** \brief 68, Error interrupt request source clear register */
#define I2C2_ERRIRQSC /*lint --e(923, 9078)*/ (*(volatile Ifx_I2C_ERRIRQSC*)0xF4500068u)

/** \brief 70, Protocol interrupt request source mask register */
#define I2C2_PIRQSM /*lint --e(923, 9078)*/ (*(volatile Ifx_I2C_PIRQSM*)0xF4500070u)

/** \brief 74, Protocol interrupt request source status register */
#define I2C2_PIRQSS /*lint --e(923, 9078)*/ (*(volatile Ifx_I2C_PIRQSS*)0xF4500074u)

/** \brief 78, Protocol interrupt request source clear register */
#define I2C2_PIRQSC /*lint --e(923, 9078)*/ (*(volatile Ifx_I2C_PIRQSC*)0xF4500078u)

/** \brief 80, Raw interrupt status register */
#define I2C2_RIS /*lint --e(923, 9078)*/ (*(volatile Ifx_I2C_RIS*)0xF4500080u)

/** \brief 84, Interrupt mask control register */
#define I2C2_IMSC /*lint --e(923, 9078)*/ (*(volatile Ifx_I2C_IMSC*)0xF4500084u)

/** \brief 88, Masked interrupt status register */
#define I2C2_MIS /*lint --e(923, 9078)*/ (*(volatile Ifx_I2C_MIS*)0xF4500088u)

/** \brief 8C, Interrupt clear register */
#define I2C2_ICR /*lint --e(923, 9078)*/ (*(volatile Ifx_I2C_ICR*)0xF450008Cu)

/** \brief 90, Interrupt set register */
#define I2C2_INTRSET /*lint --e(923, 9078)*/ (*(volatile Ifx_I2C_INTRSET*)0xF4500090u)

/** \brief 8000, Transmission data register */
#define I2C2_TXD /*lint --e(923, 9078)*/ (*(volatile Ifx_I2C_TXD*)0xF4508000u)

/** \brief C000, Reception data register */
#define I2C2_RXD /*lint --e(923, 9078)*/ (*(volatile Ifx_I2C_RXD*)0xF450C000u)

/** \brief 0, Clock Control Register */
#define I2C2_CLC /*lint --e(923, 9078)*/ (*(volatile Ifx_I2C_CLC*)0xF4510000u)

/** \brief 8, Module Identification Register */
#define I2C2_ID /*lint --e(923, 9078)*/ (*(volatile Ifx_I2C_ID*)0xF4510008u)

/** \brief C, Reset Control Register A */
#define I2C2_RST_CTRLA /*lint --e(923, 9078)*/ (*(volatile Ifx_I2C_RST_CTRLA*)0xF451000Cu)

/** \brief 10, Reset Control Register B */
#define I2C2_RST_CTRLB /*lint --e(923, 9078)*/ (*(volatile Ifx_I2C_RST_CTRLB*)0xF4510010u)

/** \brief 14, Reset Status Register */
#define I2C2_RST_STAT /*lint --e(923, 9078)*/ (*(volatile Ifx_I2C_RST_STAT*)0xF4510014u)

/** \brief 20, PROT Register Endinit */
#define I2C2_PROTE /*lint --e(923, 9078)*/ (*(volatile Ifx_I2C_PROT*)0xF4510020u)

/** \brief 24, PROT Register Safe Endinit */
#define I2C2_PROTSE /*lint --e(923, 9078)*/ (*(volatile Ifx_I2C_PROT*)0xF4510024u)

/** \brief 40, Write access enable register A */
#define I2C2_ACCEN_WRA /*lint --e(923, 9078)*/ (*(volatile Ifx_I2C_ACCEN_WRA*)0xF4510040u)

/** \brief 44, Write access enable register B */
#define I2C2_ACCEN_WRB /*lint --e(923, 9078)*/ (*(volatile Ifx_I2C_ACCEN_WRB_FPI*)0xF4510044u)

/** \brief 48, Read access enable register A */
#define I2C2_ACCEN_RDA /*lint --e(923, 9078)*/ (*(volatile Ifx_I2C_ACCEN_RDA*)0xF4510048u)

/** \brief 4C, Read access enable register B */
#define I2C2_ACCEN_RDB /*lint --e(923, 9078)*/ (*(volatile Ifx_I2C_ACCEN_RDB_FPI*)0xF451004Cu)

/** \brief 50, VM access enable register */
#define I2C2_ACCEN_VM /*lint --e(923, 9078)*/ (*(volatile Ifx_I2C_ACCEN_VM*)0xF4510050u)

/** \brief 54, PRS access enable register */
#define I2C2_ACCEN_PRS /*lint --e(923, 9078)*/ (*(volatile Ifx_I2C_ACCEN_PRS*)0xF4510054u)

/** \brief 60, General purpose control register */
#define I2C2_GPCTL /*lint --e(923, 9078)*/ (*(volatile Ifx_I2C_GPCTL*)0xF4510060u)


/** \}  */

/******************************************************************************/

/******************************************************************************/

#endif /* IFXI2C_REG_H */
