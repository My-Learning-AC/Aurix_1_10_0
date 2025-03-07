/**
 * \file IfxPkc.c
 * \brief PKC  basic functionality
 *
 * \version iLLD_2_0_1_2_20
 * \copyright Copyright (c) 2022 Infineon Technologies AG. All rights reserved.
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
 *
 */

/******************************************************************************/
/*----------------------------------Includes----------------------------------*/
/******************************************************************************/

#include "IfxPkc.h"

/******************************************************************************/
/*-------------------------Function Implementations---------------------------*/
/******************************************************************************/

IfxPkc_Error IfxPkc_getErrors(Ifx_PKC *pkcSFR)
{
    IfxPkc_Error errors;

    if (IfxPkc_getErrorStatus(pkcSFR) == TRUE)
    {
        Ifx_PKC_STAT statReg;
        statReg.U                          = pkcSFR->STAT.U;

        errors.Bits.pointInvalid           = (uint32)(statReg.B.PT_INVALID);
        errors.Bits.outOfRange             = (uint32)(statReg.B.OOR);
        errors.Bits.modulusInvalid         = (uint32)(statReg.B.M_INVALID);
        errors.Bits.functionNotImplemented = (uint32)(statReg.B.NIMPL);
        errors.Bits.signatureInvalid       = (uint32)(statReg.B.SIG_INVALID);
        errors.Bits.parameterInvalid       = (uint32)(statReg.B.P_INVALID);
        errors.Bits.notInvertible          = (uint32)(statReg.B.NOTINV);
        errors.Bits.notQuadraticResidue    = (uint32)(statReg.B.NQR);
        errors.Bits.failPtr                = (uint32)(statReg.B.FAILPTR);
    }
    else
    {
        errors.Word = 0U;
    }

    return errors;
}


boolean IfxPkc_getAlgoErrorStatus(Ifx_PKC *pkcSFR, IfxPkc_OperationType operationType)
{
    boolean      algoErrorStatus = FALSE;
    uint32       errorMask       = 0;
    Ifx_PKC_STAT statReg;

    /* 1. Copy the register from SFR */
    statReg.U = pkcSFR->STAT.U;

    /* 2. Get the error mask for appropriate operation type */
    switch (operationType)
    {
    case IfxPkc_OperationType_RSAENC:
    case IfxPkc_OperationType_RSADEC:
    case IfxPkc_OperationType_RSAPKGEN:
    case IfxPkc_OperationType_RSACRTDEC:
    case IfxPkc_OperationType_RSAHLFCRTDEC:
    case IfxPkc_OperationType_RSAHLFCRTREC:
    case IfxPkc_OperationType_EXP:
    case IfxPkc_OperationType_ADDN:
    case IfxPkc_OperationType_SUBN:
    {
        errorMask = IFXPKC_ERRORMASK_OOR;
        break;
    }
    case IfxPkc_OperationType_RSASIG:
    case IfxPkc_OperationType_RSACRTKEYPARGEN:
    case IfxPkc_OperationType_DSASIG:
    {
        errorMask = IFXPKC_ERRORMASK_RSASIG;
        break;
    }
    case IfxPkc_OperationType_RSAVER:
    {
        errorMask = IFXPKC_ERRORMASK_RSAVER;
        break;
    }
    case IfxPkc_OperationType_ECDSASIG:
    case IfxPkc_OperationType_ECDSAVER:
    case IfxPkc_OperationType_ECKCDSASIG:
    case IfxPkc_OperationType_SM2SIG:
    case IfxPkc_OperationType_SM2VER:
    case IfxPkc_OperationType_JPAKEZKPVER:
    {
        errorMask = IFXPKC_ERRORMASK_ECDSASIG;
        break;
    }
    case IfxPkc_OperationType_ECDSAPV:
    {
        errorMask = IFXPKC_ERRORMASK_ECDSAPV;
        break;
    }
    case IfxPkc_OperationType_DSAVER:
    {
        errorMask = IFXPKC_ERRORMASK_DSAVER;
        break;
    }
    case IfxPkc_OperationType_ECKCDSAPUBKEYGEN:
    case IfxPkc_OperationType_ECKCDSAVER:
    case IfxPkc_OperationType_SM2KEYEXCH:
    case IfxPkc_OperationType_PDBL:
    case IfxPkc_OperationType_PADD:
    case IfxPkc_OperationType_SMULT:
    case IfxPkc_OperationType_CHECKPXY:
    case IfxPkc_OperationType_CHECKPOC:
    case IfxPkc_OperationType_JPAKE3PADD:
    case IfxPkc_OperationType_JPAKEGENSTP2:
    case IfxPkc_OperationType_JPAKEKEYGEN:
    case IfxPkc_OperationType_JPAKEZKPGEN:
    {
        errorMask = IFXPKC_ERRORMASK_ECKCDSA;
        break;
    }
    case IfxPkc_OperationType_CHECKAB:
    {
        errorMask = IFXPKC_ERRORMASK_ECC_CHECKAB;
        break;
    }
    case IfxPkc_OperationType_CHECKN:
    {
        errorMask = IFXPKC_ERRORMASK_P_INVALID;
        break;
    }
    case IfxPkc_OperationType_YRECOVER:
    {
        errorMask = IFXPKC_ERRORMASK_NQR;
        break;
    }
    case IfxPkc_OperationType_RABINMILLER:
    case IfxPkc_OperationType_MULTN:
    case IfxPkc_OperationType_DIVN:
    {
        errorMask = IFXPKC_ERRORMASK_RM;
        break;
    }
    case IfxPkc_OperationType_INV:
    case IfxPkc_OperationType_INV2:
    {
        errorMask = IFXPKC_ERRORMASK_INV;
        break;
    }
    case IfxPkc_OperationType_SQRTN:
    {
        errorMask = IFXPKC_ERRORMASK_SQRTN;
        break;
    }
    case IfxPkc_OperationType_RED:
    case IfxPkc_OperationType_RED2:
    {
        errorMask = IFXPKC_ERRORMASK_M_INVALID;
        break;
    }
    case IfxPkc_OperationType_EDDSAVER:
    {
        errorMask = IFXPKC_ERRORMASK_EDDSAVER;
        break;
    }
    default:
    {
        errorMask = (uint32)0;
    }
    }

    /* 3. Use the error mask and get the error status */
    algoErrorStatus = IFXPKC_CHECK_ALGO_ERRORSTATUS(statReg.U, errorMask);

    return algoErrorStatus;
}


IfxPkc_Status IfxPkc_clearDataram(Ifx_PKC *pkcSFR)
{
    IfxPkc_Status status       = IfxPkc_Status_success;
    uint32        timeoutCount = IFXPKC_TIMEOUT_COUNT;

    /* 1. Write operation type */
    pkcSFR->CMD.B.TYPE = (uint32)IfxPkc_OperationType_CLRMEM;

    /* 2. Perform Operation */
    IfxPkc_startOperation(pkcSFR);

    /* 3. Wait for the module to complete the operation */
    while ((IfxPkc_isModuleBusy(pkcSFR)) && (timeoutCount > 0))
    {
        timeoutCount--;
    }

    /* 4. Check for timeout */
    if (timeoutCount <= 0)
    {
        status = IfxPkc_Status_failure;
    }

    return status;
}


void IfxPkc_performDataramOp(IfxPkc_DataramOp dataramOp, uint32 *sourcePtr, uint32 *destPtr, uint32 numWords, uint32 operandSizeWords, IfxPkc_Endian endian)
{
    uint32 index      = 0;
    uint32 startIndex = 0;
    uint32 endIndex   = 0;

    /* 1. Check if user has not provided number of words then take operand data size */
    if (numWords == 0)
    {
        numWords = operandSizeWords;
    }

    /* 2.1 Write data to DATARAM */
    if (dataramOp == IfxPkc_DataramOp_write)
    {
        /* 2.1.1 Little Endian Data */
        if (endian == IfxPkc_Endian_little)
        {
            /* Write data to DATARAM from source */
            for (index = 0; index < numWords; index++)
            {
                destPtr[index] = sourcePtr[index];
            }

            /* Write 0s between user configured num words and max operand data size */
            if (numWords < operandSizeWords)
            {
                for (index = numWords; index < operandSizeWords; index++)
                {
                    destPtr[index] = (uint32)0;
                }
            }
        }
        /* 2.1.2 Big Endian Data */
        else
        {
            /* Write 0s between user configured num words and max operand data size */
            if (numWords < operandSizeWords)
            {
                startIndex = IFXPKC_MAX_DATASIZE_WORDS - operandSizeWords;
                endIndex   = IFXPKC_MAX_DATASIZE_WORDS - numWords;

                for (index = startIndex; index < endIndex; index++)
                {
                    destPtr[index] = (uint32)0;
                }
            }

            /* Write data to DATARAM from source */
            startIndex = IFXPKC_MAX_DATASIZE_WORDS - numWords;
            endIndex   = IFXPKC_MAX_DATASIZE_WORDS;

            for (index = startIndex; index < endIndex; index++)
            {
                destPtr[index] = *sourcePtr++;
            }
        }
    }
    /* 2.2 Read data from DATARAM */
    else
    {
        /* 2.2.1 Little Endian Data */
        if (endian == IfxPkc_Endian_little)
        {
            for (index = 0; index < numWords; index++)
            {
                destPtr[index] = sourcePtr[index];
            }
        }
        /* 2.2.2 Big Endian Data */
        else
        {
            startIndex = IFXPKC_MAX_DATASIZE_WORDS - numWords;
            endIndex   = IFXPKC_MAX_DATASIZE_WORDS;

            for (index = startIndex; index < endIndex; index++)
            {
                *destPtr++ = sourcePtr[index];
            }
        }
    }
}


void IfxPkc_setOperandPointers(Ifx_PKC *pkcSFR, IfxPkc_OperationType operationType)
{
    /* 1. Copy the pointer register from SFR */
    Ifx_PKC_PTR pointerReg;
    pointerReg.U = pkcSFR->PTR.U;

    /* 2. Set pointers according to operation type */
    switch (operationType)
    {
    /*
     * 2a. ECC operations
     */
    case IfxPkc_OperationType_SMULT:
    case IfxPkc_OperationType_PADD:
    {
        pointerReg.B.OPPTRB = (uint32)IfxPkc_EccParamLocation_point2x;
    }
    /* No break at the end of this case. Continue configuring rest of the operands */
    case IfxPkc_OperationType_PDBL:
    case IfxPkc_OperationType_YRECOVER:
    {
        pointerReg.B.OPPTRC = (uint32)IfxPkc_EccParamLocation_point3x;
    }
    /* No break at the end of this case. Continue configuring rest of the operands */
    case IfxPkc_OperationType_CHECKPOC:
    case IfxPkc_OperationType_CHECKPXY:
    {
        pointerReg.B.OPPTRA = (uint32)IfxPkc_EccParamLocation_point1x;
        break;
    }
    /*
     * 2b. Arithmetic operations
     */
    case IfxPkc_OperationType_ADDN:
    case IfxPkc_OperationType_SUBN:
    case IfxPkc_OperationType_MULTN:
    case IfxPkc_OperationType_DIVN:
    case IfxPkc_OperationType_EXP:
    {
        pointerReg.B.OPPTRA = (uint32)IfxPkc_ArithmeticParamLocation_a;
    }
    /* No break at the end of this case. Continue configuring rest of the operands */
    case IfxPkc_OperationType_RED:
    case IfxPkc_OperationType_INV:
    case IfxPkc_OperationType_INV2:
    case IfxPkc_OperationType_RED2:
    {
        pointerReg.B.OPPTRB = (uint32)IfxPkc_ArithmeticParamLocation_b;
        pointerReg.B.OPPTRC = (uint32)IfxPkc_ArithmeticParamLocation_c;
        pointerReg.B.OPPTRN = (uint32)IfxPkc_ArithmeticParamLocation_n;
        break;
    }
    case IfxPkc_OperationType_SQRTN:
    {
        pointerReg.B.OPPTRA = (uint32)IfxPkc_ArithmeticParamLocation_a;
        pointerReg.B.OPPTRC = (uint32)IfxPkc_ArithmeticParamLocation_c;
        pointerReg.B.OPPTRN = (uint32)IfxPkc_ArithmeticParamLocation_n;
        break;
    }
    case IfxPkc_OperationType_MULT:
    {
        pointerReg.B.OPPTRA = (uint32)IfxPkc_ArithmeticParamLocation_a;
        pointerReg.B.OPPTRB = (uint32)IfxPkc_ArithmeticParamLocation_b;
        pointerReg.B.OPPTRC = (uint32)IfxPkc_ArithmeticParamLocation_c;
        break;
    }
    /*
     * 2c Montgomery operation
     */
    case IfxPkc_OperationType_SMULT25519:
    {
        pointerReg.B.OPPTRA = (uint32)IfxPkc_McParamLocation_point1x;
        pointerReg.B.OPPTRB = (uint32)IfxPkc_McParamLocation_scalar;
        pointerReg.B.OPPTRC = (uint32)IfxPkc_McParamLocation_point3x;
        break;
    }
    /* Do nothing for invalid operation type */
    default:
        break;
    }

    /* 3. Write the pointers to SFR */
    pkcSFR->PTR.U = pointerReg.U;
}


void IfxPkc_configureAccessToPkc(IfxApApu_ApuConfig *apConfig)
{
    IfxApApu_init((Ifx_ACCEN_ACCEN *)&MODULE_PKC.ACCEN, apConfig);
}
