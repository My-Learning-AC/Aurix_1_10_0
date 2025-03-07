/**
 * \file geth_dma_dscr.h
 * \brief Geth DMA descriptor definitions
 *
 * \author Daniel Mysliwitz
 * \version V0.1.0
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

/*******************************************************************************
**                             Author(s) Identity                             **
********************************************************************************
** Initials     Name                                                          **
** ---------------------------------------------------------------------------**
** DM           Daniel Mysliwitz                                              **
*******************************************************************************/

/*******************************************************************************
**                          Revision Control History                          **
********************************************************************************
** V0.1.0: 2021-05-11, DM:   Initial version                                  **
*******************************************************************************/

#ifndef GETH_DMA_DESCRIPTORS_H
#define GETH_DMA_DESCRIPTORS_H

#include "Cpu/Std/Ifx_Types.h"

typedef struct 
{
  struct
  {
    uint32 BUF1AP; /* Buffer 1 address pointer (31..0) */
  } dscr0;
  struct
  {
    uint32 BUF2AP; /* Buffer 2 address pointer */
  } dscr1;
  union
  {
    uint32 U;
    struct
    {
      uint32 B1L : 14; /* 13..0: Buffer 1 length, max. 16KB */
      uint32 VTIR: 2;  /* 15..14: VLAN Tag insertion/Replacement */
      uint32 B2L : 14; /* 29..16: Buffer 2 length, max. 16KB */
      uint32 TTSE: 1;  /* 30: Transmit Timestamp Enable */
      uint32 IOC : 1;  /* 31: Interrupt on completion */
    } B;
  } dscr2;
  union
  {
    uint32 U;
    struct
    {
      uint32 FL     : 15; /* 14..0 */
      uint32        : 1; /* 15: reserved */
      uint32 CIC    : 2; /* 17..16: checksum insertion control */
      uint32        : 1; /* 18: reserved */
      uint32 SLOTNUM: 4; /* 22..19: slot number in AV mode */
      uint32 SAIC   : 3; /* 25..23: source address insertion control */
      uint32 CPC    : 2; /* 27..26: CRC pad control */
      uint32 LD     : 1; /* 28: last descriptor */
      uint32 FD     : 1; /* 29: first descriptor */
      uint32 CTXT   : 1; /* 30: context type: for normal frame it must be 0 */
      uint32 OWN    : 1; /* 31: indicates that the DMA owns the descriptor */
    } B;
  } dscr3;
} GethTxReadDescriptor;

typedef struct
{
    union
    {
        uint32 U;
        struct
        {
          uint32 LT : 8;  /* 7..0: Launch time 31..24 */
          uint32 GSN: 4;  /* 11..8: GCL slot number */
          uint32    : 19; /* 30..9 */
          uint32 LTV: 1;  /* 31: Interrupt on completion */
        } B;
    } edscr4;
    union
    {
        uint32 U;
        struct
        {
          uint32    : 8;  /* 7..0 */
          uint32 LT : 24; /* 31..8: Launch time 23..0 */
        } B;
    } edscr5;
    uint32 edscr6;
    uint32 edscr7;
} GethTxEnhReadDescriptor;

typedef struct
{
  struct
  {
    uint32 reserved;
  } dscr0;
  struct
  {
    uint32 reserved;
  } dscr1;
  struct
  {
    uint32 reserved;
  } dscr2;
  union
  {
    uint32 U;
    struct
    {
      uint32              : 27; /* 26..0: reserved */
      uint32 DERR         : 1;  /* 27: Descriptor Error */
      uint32 LD           : 1;  /* 28: last descriptor */
      uint32 FD           : 1;  /* 29: first descriptor */
      uint32 CTXT         : 1;  /* 30: context type: for normal frame it must be 0 */
      uint32 OWN          : 1;  /* 31: indicates that the DMA owns the descriptor */
    } B;
  } dscr3;
} GethTxWriteBackDescriptor;

typedef struct
{
  struct
  {
    uint32 TTSL; /* Transmit Packet Timestamp Low */
  } dscr0;
  struct
  {
    uint32 TTSH; /* Transmit Packet Timestamp High */
  } dscr1;
  union
  {
    uint32 U;
    struct
    {
      uint32              : 16; /* 0..13: reserved */
      uint32 IVT          : 16; /* 31..16: inner VLAN tag */
    } B;
  } dscr2;
  union
  {
    uint32 U;
    struct
    {
      uint32 VT           : 16; /* 0..15: VLAN tag */
      uint32 VLTV         : 1;  /* 16: VLAN tag valid */
      uint32 IVLTV        : 1;  /* 17: inner VLAN tag valid */
      uint32 IVTIR        : 2;  /* 19..18: Inner VLAN Tag Insert or Replace, 0 = do not add inner VLAN tag, 1 = remove inner VLAN tag, 2 = insert inner VLAN tag, 3 = replace inner VLAN tag */
      uint32              : 5;  /* 24..20: reserved  */
      uint32 PIDV         : 1;  /* 25: Packet ID valid */
      uint32 TCMSSV       : 1;  /* 26: One-Step Timestamp Correction */
      uint32 OSTC         : 1;  /* 27: One-Step Timestamp Correction Enable */
      uint32              : 1;  /* 28: reserved */
      uint32 CDE          : 1;  /* 29: Context Descriptor Error */
      uint32 CTXT         : 1;  /* 30: context type: for context frame it must be 1 */
      uint32 OWN          : 1;  /* 31: indicates that the DMA owns the descriptor */
    } B;
  } dscr3;
} GethTxContextDescriptor;

typedef union
{
     GethTxReadDescriptor readDscr;           /**< DMA Rx Read descriptors */
     GethTxWriteBackDescriptor writeBackDscr; /**< DMA Rx Write Back descriptors */
} GethTxDescriptor;

typedef struct
{
     GethTxContextDescriptor txContextDscr;
     GethTxDescriptor txDscr;
} GethTxCombiDescriptor;

typedef struct
{
     GethTxEnhReadDescriptor txEnhDscr;
     GethTxDescriptor txDscr;
} GethTxEnhDescriptor;

typedef struct
{
  struct
  {
    uint32 BUF1AP; /* Header or Buffer 1 Address Pointer */
  } dscr0;
  struct
  {
    uint32 reserved; /* reserved */
  } dscr1;
  struct
  {
    uint32 BUF2AP; /* Buffer 2 Address Pointer */
  } dscr2;
  union
  {
    uint32 U;
    struct
    {
      uint32       : 30; /* 29..0 */
      uint32 IOC   :  1; /* 30: Interrupt Enabled on Completion */
      uint32 OWN   :  1; /* 31: indicates that the DMA owns the descriptor */ 
    } B;
  } dscr3;
} GethRxReadDescriptor;

typedef struct
{
  struct
  {
    uint32 OVT: 16; /* 15..0: Outer VLAN Tag */
    uint32 IVT: 16; /* 31..16: Inner VLAN Tag */
  } dscr0;
  struct
  {
    uint32 FRPLI; /* Flexible Receive Parser last instruction */
  } dscr1;
  union
  {
    uint32 U;
    struct
    {
      uint32 AVTCP :  1; /* 0: AV tagged control packet */
      uint32 AVTDP :  1; /* 1: AV tagged data packet */
      uint32 HL    :  8; /* 9..2: L3/L4 Header Length */
      uint32 FPS1  :  1; /* 10: Flexible Receive Parser Status 1 */
      uint32       :  1; /* 11: reserved */
      uint32 FSP2  :  1; /* 12: Flexible Receive Parser Status 2 */
      uint32       :  2; /* 14..13: reserved */
      uint32 VF    :  1; /* 15: VLAN Filter Status */
      uint32 SAF   :  1; /* 16: Source Address Filter Fail */
      uint32 DAF   :  1; /* 17: Destination Address Filter Fail */
      uint32       :  1; /* 18: reserved */
      uint32 MADRM :  8; /* 26..19: MAC Address Match or Hash Value */
      uint32 L3FM  :  1; /* 27: Layer 3 filter match */
      uint32 L4FM  :  1; /* 28: Layer 4 filter match */
      uint32 L3L4FM:  3; /* 31..29: Layer 3 and Layer 4 Filter Number Matched */
    } B;
  } dscr2;
  union
  {
    uint32 U;
    struct
    {
      uint32 PL   : 14; /* 13..0: Packet Length */
      uint32 FPS0 : 1;  /* 14: Flexible Receive Parser Status 0 */
      uint32 ES   : 1;  /* 15: Error Summary */
      uint32 ET_LT: 4;  /* 19..16: Error Type / L2 Type Field */
      uint32 L34T : 4;  /* 23..20: Layer3 / Layer4 Packet Type */
      uint32 ETM  : 1;  /* 24: Ether Type Match */
      uint32      : 2;  /* 26..25: reserved */
      uint32 CDA  : 1;  /* 27: Context Descriptor available */
      uint32 LD   : 1;  /* 28: last descriptor */
      uint32 FD   : 1;  /* 29: first descriptor */
      uint32 CTXT : 1;  /* 30: context type: for normal frame it must be 0 */
      uint32 OWN  : 1;  /* 31: indicates that the DMA owns the descriptor */
    } B;
  } dscr3;
} GethRxWriteBackDescriptor;

typedef struct
{
  struct
  {
    uint32 RTSL; /* Receive Packet Timestamp Low */
  } dscr0;
  union
  {
    uint32 RTSH; /* Receive Packet Timestamp High */
  } dscr1;
  union
  {
    uint32 reserved;
  } dscr2;
  union
  {
    uint32 U;
    struct
    {
      uint32 res0: 29; /* 28..0 */
      uint32 DE  : 1;  /* 29: Descriptor Error */
      uint32 CTXT: 1;  /* 30: context type: for normal frame it must be 0 */
      uint32 OWN : 1;  /* 31: indicates that the DMA owns the descriptor */ 
    } B;
  } dscr3;
} GethRxContextDescriptor;

typedef union
{
     GethRxReadDescriptor readDscr;           /**< DMA Rx Read descriptors */
     GethRxWriteBackDescriptor writeBackDscr; /**< DMA Rx Write Back descriptors */
} GethRxDescriptor;

typedef struct
{
    GethRxDescriptor rxDscr;
    GethRxContextDescriptor rxContextDscr;
} GethRxCombiDescriptor;


#endif /* GETH_DMA_DESCRIPTORS_H */
