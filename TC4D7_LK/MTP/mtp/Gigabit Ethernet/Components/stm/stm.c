#include "Ifx_Types.h"
#include "Ifx_Cfg.h"
#include "IfxCpu.h"
#include "IfxWtu.h"
#include "IfxStm_Timer.h"

#include "tc4d_stm_cfg.h"

#if (IFX_CFG_STM0_ENABLE_0 == 1)
    static uint32 g_stm0_0TickCount1ms_u32;
    #if (IFX_CFG_STM0_CALLBACK0_EN_0 == 1)
    extern void IFX_CFG_STM0_CALLBACK0_FUNC_0(void);
    #endif

    #if (IFX_CFG_STM0_CALLBACK1_EN_0 == 1)
    extern void IFX_CFG_STM0_CALLBACK1_FUNC_0(void);
    #endif

    #if (IFX_CFG_STM0_CALLBACK2_EN_0 == 1)
    extern void IFX_CFG_STM0_CALLBACK2_FUNC_0(void);
    #endif
#endif

#if (IFX_CFG_STM0_ENABLE_1 == 1)
    static uint32 g_stm0_1TickCount1ms_u32;
    #if (IFX_CFG_STM0_CALLBACK0_EN_1 == 1)
    extern void IFX_CFG_STM0_CALLBACK0_FUNC_1(void);
    #endif

    #if (IFX_CFG_STM0_CALLBACK1_EN_1 == 1)
    extern void IFX_CFG_STM0_CALLBACK1_FUNC_1(void);
    #endif

    #if (IFX_CFG_STM0_CALLBACK2_EN_1 == 1)
    extern void IFX_CFG_STM0_CALLBACK2_FUNC_1(void);
    #endif
#endif

void STM0_Init (void)
{
    /* suspend by debugger enabled */
    IfxStm_enableOcdsSuspend(&MODULE_CPU0);

#if (IFX_CFG_STM0_ENABLE_0 == 1)
    /* initialize STM */
    IfxStm_CompareConfig stmCompareConfig0;

    /* suspend by debugger enabled */
    IfxStm_enableOcdsSuspend(&MODULE_CPU0);

    /* constructor of configuration */
    IfxStm_initCompareConfig(&stmCompareConfig0);

    /* change the comparator configuration */
    stmCompareConfig0.comparator = IfxStm_Comparator_0;
    stmCompareConfig0.compareOffset = IfxStm_ComparatorOffset_0;
    stmCompareConfig0.triggerPriority = IFX_CFG_STM0_INTERRUPT_PRIO_0;
    stmCompareConfig0.comparatorInterrupt = IfxStm_ComparatorInterrupt_ir0; /*User must select the interrupt output */
    stmCompareConfig0.ticks = IFX_CFG_STM0_TICKS_PER_MS_0 * 20; /* we start after 20ms */
    stmCompareConfig0.typeOfService = IfxSrc_Tos_cpu0;
    /* When Virtulization is disabled SRC.VM needs to be always configured with zero */
    stmCompareConfig0.vmId = IfxSrc_VmId_0;

    /* Now Compare functionality is initialized */
    IfxStm_initCompare(&MODULE_CPU0, &stmCompareConfig0);
#endif

#if (IFX_CFG_STM0_ENABLE_1 == 1)
    IfxStm_CompareConfig stmCompareConfig1;

    /* constructor of configuration */
    IfxStm_initCompareConfig(&stmCompareConfig1);

    /* change the comparator configuration */
    stmCompareConfig1.comparator = IfxStm_Comparator_1;
    stmCompareConfig1.compareOffset = IfxStm_ComparatorOffset_0;
    stmCompareConfig1.triggerPriority = IFX_CFG_STM0_INTERRUPT_PRIO_1;
    stmCompareConfig1.comparatorInterrupt = IfxStm_ComparatorInterrupt_ir1; /*User must select the interrupt output */
    stmCompareConfig1.ticks = IFX_CFG_STM0_TICKS_PER_MS_1; /* timer starts right away */
    stmCompareConfig1.typeOfService = IfxSrc_Tos_cpu0;
    /* When Virtulization is disabled SRC.VM needs to be always configured with zero */
    stmCompareConfig1.vmId = IfxSrc_VmId_0;

    /* Now Compare functionality is initialized */
    IfxStm_initCompare(&MODULE_CPU0, &stmCompareConfig1);
#endif
}

/**
 * \ingroup interrupts
 *
 * This interrupt is raised by the STM0. The initialization is done in core0_main().
 *
 * \isrProvider 0
 * \isrPriority \ref ISR_PRIORITY_OS_TICK
 */
#if (IFX_CFG_STM0_ENABLE_0 == 1)
IFX_INTERRUPT (UsrIsr_Stm_0, 0, IFX_CFG_STM0_INTERRUPT_PRIO_0)
{
    /* Set next 1ms scheduler tick alarm */
    IfxStm_increaseCompare(&MODULE_CPU0, IfxStm_Comparator_0, IFX_CFG_STM0_TICKS_PER_MS_0);

    /* increment the ms value */
    g_stm0_0TickCount1ms_u32++;

    /* Enable the global interrupts of this CPU */
    IfxCpu_enableInterrupts();


#if (IFX_CFG_STM0_CALLBACK0_EN_0 == 1)
    #if (IFX_CFG_STM0_CALLBACK0_MS_0 == IFX_CFG_STM0_INTERVAL_MS_0)
        IFX_CFG_STM0_CALLBACK0_FUNC_0();
    #else
        if ((g_stm0_0TickCount1ms_u32 % IFX_CFG_STM0_CALLBACK0_MS_0) == 0)
        {
            IFX_CFG_STM0_CALLBACK0_FUNC_0();
        }
    #endif
#endif

#if (IFX_CFG_STM0_CALLBACK1_EN_0 == 1)
    #if (IFX_CFG_STM0_CALLBACK1_MS_0 == IFX_CFG_STM0_INTERVAL_MS_0)
        IFX_CFG_STM0_CALLBACK1_FUNC_0();
    #else
        if ((g_stm0_0TickCount1ms_u32 % IFX_CFG_STM0_CALLBACK1_MS_0) == 0)
        {
            IFX_CFG_STM0_CALLBACK1_FUNC_0();
        }
    #endif
#endif

#if (IFX_CFG_STM0_CALLBACK2_EN_0 == 1)
    #if (IFX_CFG_STM0_CALLBACK2_MS_0 == IFX_CFG_STM0_INTERVAL_MS_0)
        IFX_CFG_STM0_CALLBACK2_FUNC_0();
    #else
        if ((g_stm0_0TickCount1ms_u32 % IFX_CFG_STM0_CALLBACK2_MS_0) == 0)
        {
            IFX_CFG_STM0_CALLBACK2_FUNC_0();
        }
    #endif
#endif
}
#endif

#if (IFX_CFG_STM0_ENABLE_1 == 1)
IFX_INTERRUPT (UsrIsr_Stm_1, 0, IFX_CFG_STM0_INTERRUPT_PRIO_1)
{
    /* Set next 1ms scheduler tick alarm */
    IfxStm_increaseCompare(&MODULE_CPU0, IfxStm_Comparator_1, IFX_CFG_STM0_TICKS_PER_MS_1);

    /* increment the ms value */
    g_stm0_1TickCount1ms_u32++;

    /* Enable the global interrupts of this CPU */
    IfxCpu_enableInterrupts();

#if (IFX_CFG_STM0_CALLBACK0_EN_1 == 1)
    #if (IFX_CFG_STM0_CALLBACK0_MS_1 == IFX_CFG_STM0_INTERVAL_MS_1)
        IFX_CFG_STM0_CALLBACK0_FUNC_1();
    #else
        if ((g_stm0_1TickCount1ms_u32 % IFX_CFG_STM0_CALLBACK0_MS_1) == 0)
        {
            IFX_CFG_STM0_CALLBACK0_FUNC_1();
        }
    #endif
#endif

#if (IFX_CFG_STM0_CALLBACK1_EN_1 == 1)
    #if (IFX_CFG_STM0_CALLBACK1_MS_1 == IFX_CFG_STM0_INTERVAL_MS_1)
        IFX_CFG_STM0_CALLBACK1_FUNC_1();
    #else
        if ((g_stm0_1TickCount1ms_u32 % IFX_CFG_STM0_CALLBACK1_MS_1) == 0)
        {
            IFX_CFG_STM0_CALLBACK1_FUNC_1();
        }
    #endif
#endif

#if (IFX_CFG_STM0_CALLBACK2_EN_1 == 1)
    #if (IFX_CFG_STM0_CALLBACK2_MS_1 == IFX_CFG_STM0_INTERVAL_MS_1)
        IFX_CFG_STM0_CALLBACK2_FUNC_1();
    #else
        if ((g_stm0_1TickCount1ms_u32 % IFX_CFG_STM0_CALLBACK2_MS_1) == 0)
        {
            IFX_CFG_STM0_CALLBACK2_FUNC_1();
        }
    #endif
#endif
}
#endif
