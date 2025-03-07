/**
 * \file serialio.c
 * \brief Functions to interface to the virtual COM port
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

/*********************************************************************************************************************/
/*-----------------------------------------------------Includes------------------------------------------------------*/
/*********************************************************************************************************************/
#include "serialio.h"
#include "IfxAsclin_bf.h"

/*********************************************************************************************************************/
/*---------------------------------------------Function Implementations----------------------------------------------*/
/*********************************************************************************************************************/
#if defined(CONFIG_BOARD_SERIALIO_ENABLE)

void SERIALIO_Init(sint32 baudrate)
{
    /* Initialize an instance of IfxAsclin_Asc_Config with default values */
    IfxAsclin_Asc_Config ascConfig;
    IfxAsclin_Asc_initModuleConfig(&ascConfig, SERIALIO.asclin);

    ascConfig.baudrate.baudrate = (float32)baudrate;                            /* Set the desired baud rate         */
    ascConfig.baudrate.oversampling = IfxAsclin_OversamplingFactor_16;          /* Set the oversampling factor       */

    /* Configure the sampling mode */
    ascConfig.bitTiming.medianFilter = IfxAsclin_SamplesPerBit_three;           /* Set the number of samples per bit */
    ascConfig.bitTiming.samplePointPosition = IfxAsclin_SamplePointPosition_8;  /* Set the first sample position     */

    /* Pin configuration */
    const IfxAsclin_Asc_Pins pins = {
        NULL_PTR, IfxPort_InputMode_pullUp,                                     /* CTS pin not used                  */
        SERIALIO.rx_pin, IfxPort_InputMode_pullUp,                              /* RX pin                            */
        NULL_PTR, IfxPort_OutputMode_pushPull,                                  /* RTS pin not used                  */
        SERIALIO.tx_pin, IfxPort_OutputMode_pushPull,                           /* TX pin                            */
        IfxPort_PadDriver_cmosAutomotiveSpeed1};
    ascConfig.pins = &pins;

    /* Create an instance of the ASC handle */
    IfxAsclin_Asc ascHandle;

    /* Initialize module with above parameters */
    IfxAsclin_Asc_initModule(&ascHandle, &ascConfig);

    /* Set the Transmit FIFO Level Flag (TFL) via the FLAGSSET register to start the transmission */
    SERIALIO.asclin->FLAGSSET.B.TFLS = 1;

    SERIALIO.asclin->ACCEN.WRA.B.EN00 = 1; /* CPU0 */
    SERIALIO.asclin->ACCEN.WRA.B.EN02 = 1; /* CPU1 */
    SERIALIO.asclin->ACCEN.WRA.B.EN04 = 1; /* CPU2 */
    SERIALIO.asclin->ACCEN.WRA.B.EN06 = 1; /* CPU3 */
    SERIALIO.asclin->ACCEN.WRA.B.EN08 = 1; /* CPU4 */
    SERIALIO.asclin->ACCEN.WRA.B.EN10 = 1; /* CPU5 */
    SERIALIO.asclin->ACCEN.WRA.B.EN28 = 1; /* DAP */

    SERIALIO.asclin->ACCEN.RDA.B.EN00 = 1; /* CPU0 */
    SERIALIO.asclin->ACCEN.RDA.B.EN02 = 1; /* CPU1 */
    SERIALIO.asclin->ACCEN.RDA.B.EN04 = 1; /* CPU2 */
    SERIALIO.asclin->ACCEN.RDA.B.EN06 = 1; /* CPU3 */
    SERIALIO.asclin->ACCEN.RDA.B.EN08 = 1; /* CPU4 */
    SERIALIO.asclin->ACCEN.RDA.B.EN10 = 1; /* CPU5 */
    SERIALIO.asclin->ACCEN.RDA.B.EN28 = 1; /* DAP */
}

#ifdef __TASKING__
#include <io.h>

/* Retarget for Tasking compiler */
void _io_putc (int c, struct _io *io)
{
    if (io->fp == NULL)
    {
        /* Called on print on string */
        if (io->ptr < io->end) /* If we still have enough space in the string */
        {
	    *(io->ptr++) = (char)c;
	}
    }
    else
    {
        while (IfxAsclin_getTxFifoFillLevelFlagStatus(SERIALIO.asclin) != TRUE)
        {
        }

        IfxAsclin_clearTxFifoFillLevelFlag(SERIALIO.asclin);

        /* Send the character */
        IfxAsclin_writeTxData(SERIALIO.asclin, c);
    }
}

#endif /* __TASKING__ */

#endif
