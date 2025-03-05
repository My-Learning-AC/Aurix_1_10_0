#ifndef SILICON_DETAILS_H_
#define SILICON_DETAILS_H_      1

#include "Ifx_Types.h"


#define SCU_BASE                        (0xF0024000)
#define UCB0_BASE                       (0xAE400000)
#define CHIPINFO_REG_ADD                (uint32 *)(SCU_BASE  + 0x1A8)
#define UCB0_09_BMI_BMHDID_REG_ADD      (uint32 *)(UCB0_BASE + 0x04804)
#define UCID0_REG_ADD                   (uint32 *)(UCB0_BASE + 0x12000)
#define UCID1_REG_ADD                   (uint32 *)(UCB0_BASE + 0x12004)
#define UCID2_REG_ADD                   (uint32 *)(UCB0_BASE + 0x12008)
#define CHIPID_REG_ADD                  (uint32 *)(UCB0_BASE + 0x00008)

void Print_Silicon_Details(void);
void Print_Silicon_Details_to_Terminal(void);


#endif

