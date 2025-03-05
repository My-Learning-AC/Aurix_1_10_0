#include <stdio.h>
#include "Silicon_Details.h"
#include "Ifx_Types.h"



uint32 *register_ptr;
uint32 chipid, ucid0, ucid1, ucid2, chipinfo, ucb0_09_bmi_bmhdid;

uint8 chipinfo_chrev, chipinfo_chtec, ucid1_wafer, ucid0_x_coor, ucid0_y_coor, ucid0_man_id, ucid0_blind, ucid2_day, ucid2_month, ucid2_year;
uint16 chipinfo_manuf, ucb0_09_bmi_bmhdid_bmhdid;
boolean error_flag = FALSE;
uint8 error_string[30] = {0};

void Print_Silicon_Details(void)
{

    register_ptr = CHIPID_REG_ADD;
    chipid = *register_ptr;

    register_ptr = UCID0_REG_ADD;
    ucid0 = *register_ptr;

    register_ptr = UCID1_REG_ADD;
    ucid1 = *register_ptr;

    register_ptr = UCID2_REG_ADD;
    ucid2 = *register_ptr;


    printf("log: \r        \n\r");
    printf("DEVICE ID                 = 0x%08X", (unsigned int)chipid);
    printf(" 0x%08X", (unsigned int)ucid0);
    printf(" 0x%08X", (unsigned int)ucid1);
    printf(" 0x%08X", (unsigned int)ucid2);
    printf("\n\r");

    printf("CHIPID                    = 0x%08X\n\r", (unsigned int)chipid);

    register_ptr = CHIPINFO_REG_ADD;
    chipinfo = *register_ptr;

    //chipinfo_dept = (chipinfo & 0x1F);
    chipinfo_manuf = ((chipinfo >> 5) & 0x7FF);
    chipinfo_chrev = ((chipinfo >> 16) & 0x3F);
    chipinfo_chtec = ((chipinfo >> 22) & 0x3);

    //printf("CHIPINFO.DEPT  = 0x%02X\n\r", chipinfo_dept);
    printf("CHIPINFO.MANUF            = 0x%02X", chipinfo_manuf);
    if(chipinfo_manuf == 0xC1)
        {
            printf(" (Infineon Technologies)\n\r");
        }
    else
    {
        error_flag = TRUE;\
        printf("\n\r");
        //sscanf("CHIPINFO.MANUF", %s, error_string);
    }


    printf("CHIPINFO.CHREV            = ");
    printf("0x%02X ", chipinfo_chrev);
    uint8 low_nibble, high_nibble;
    low_nibble = (chipinfo_chrev & 0xF);
    high_nibble = ((chipinfo_chrev >> 4) & 0x3);

    if(high_nibble == 0)
        {
            printf("(A-step silicon.minor rev = %d)", low_nibble);
            //printf(".minor rev = %s", (high_nibble + '0'));
        }
    else if(high_nibble == 1)
        {
            printf("(B-step silicon.minor rev = %d)", low_nibble);
            //printf(".minor rev = %s", (high_nibble + '0'));
        }
    else
        {
            error_flag = TRUE;
            //sscanf("Invalid Silicon", %s, error_string);
        }
    printf("\n\r");



    printf("CHIPINFO.CHTEC            = ");
    if(chipinfo_chtec == 0)
    {
        error_flag = TRUE;
        //sscanf("Invalid Silicon", %s, error_string);
    }
    else if(chipinfo_chtec == 1)
    {
        printf("0x%X  (SAx-TC2xx)\n\r", chipinfo_chtec);
    }
    else if(chipinfo_chtec == 2)
    {
        printf("0x%X  (SAx-TC3xx)\n\r", chipinfo_chtec);
    }
    else if(chipinfo_chtec == 3)
    {
        printf("0x%X  (SAx-TC4xx)\n\r", chipinfo_chtec);
    }


    register_ptr = UCB0_09_BMI_BMHDID_REG_ADD;
    ucb0_09_bmi_bmhdid = *register_ptr;

    ucb0_09_bmi_bmhdid_bmhdid = ((ucb0_09_bmi_bmhdid >> 16) & 0xFFFF);
    printf("UCB0_09_BMI_BMHDID.BMHDID = 0x%04X\n\r", ucb0_09_bmi_bmhdid_bmhdid);


    ucid1_wafer = (ucid1 & 0x3F);
    printf("UCID1.WAFER               = 0x%02X\n\r",ucid1_wafer);

    ucid0_x_coor = ((ucid0 >> 23) & 0xFF);
    ucid0_y_coor = ((ucid0 >> 15) & 0xFF);
    ucid0_man_id = (ucid0 & 0xFF);
    ucid0_blind  = ((ucid0 >> 31) & 1);

    printf("UCID0.X_coor              = 0x%02X\n\r", ucid0_x_coor);
    printf("UCID0.Y_coor              = 0x%02X\n\r", ucid0_y_coor);
    printf("UCID0.Man_ID              = 0x%02X", ucid0_man_id);
    if(ucid0_man_id == 0x40)
    {
        printf(" (IFX)\n\r");
    }
    else
    {
        error_flag = TRUE;
        //sscanf("Invalid Silicon", %s, error_string);
    }
    printf("UCID0.BLIND               = 0x%X", ucid0_blind);
    if(ucid0_blind)
        printf("  (Blind Assembled)\n\r");
    else
        printf("  (Wafer Tested)\n\r");



    ucid2_day   = ((ucid2 >> 11) & 0x1F);
    ucid2_month = ((ucid2 >> 16) & 0xF);
    ucid2_year  = ((ucid2 >> 20) & 0xFF);

    printf("UCID2.DAY                 = 0x%02X\n\r", ucid2_day);
    printf("UCID2.MONTH               = 0x%02X\n\r", ucid2_month);
    printf("UCID2.YEAR                = 0x%02X\n\r", ucid2_year);


}





void Print_Silicon_Details_to_Terminal(void)
{

    register_ptr = CHIPID_REG_ADD;
    chipid = *register_ptr;

    register_ptr = UCID0_REG_ADD;
    ucid0 = *register_ptr;

    register_ptr = UCID1_REG_ADD;
    ucid1 = *register_ptr;

    register_ptr = UCID2_REG_ADD;
    ucid2 = *register_ptr;


    printf("log: \r        \n\r");
    printf("DEVICE ID                 = 0x%08X", (unsigned int)chipid);
    printf(" 0x%08X", (unsigned int)ucid0);
    printf(" 0x%08X", (unsigned int)ucid1);
    printf(" 0x%08X", (unsigned int)ucid2);
    printf("\n\r");

    printf("CHIPID                    = 0x%08X\n\r", (unsigned int)chipid);

    register_ptr = CHIPINFO_REG_ADD;
    chipinfo = *register_ptr;

    //chipinfo_dept = (chipinfo & 0x1F);
    //chipinfo_manuf = ((chipinfo >> 5) & 0x7FF);
    chipinfo_chrev = ((chipinfo >> 16) & 0x3F);
    chipinfo_chtec = ((chipinfo >> 22) & 0x3);



    printf("CHIPINFO.CHREV            = ");
    printf("0x%02X ", chipinfo_chrev);
    uint8 low_nibble, high_nibble;
    low_nibble = (chipinfo_chrev & 0xF);
    high_nibble = ((chipinfo_chrev >> 4) & 0x3);

    if(high_nibble == 0)
        {
            printf("(A-step silicon.minor rev = %d)", low_nibble);
            //printf(".minor rev = %s", (high_nibble + '0'));
        }
    else if(high_nibble == 1)
        {
            printf("(B-step silicon.minor rev = %d)", low_nibble);
            //printf(".minor rev = %s", (high_nibble + '0'));
        }
    else
        {
            error_flag = TRUE;
            //sscanf("Invalid Silicon", %s, error_string);
        }
    printf("\n\r");



    printf("CHIPINFO.CHTEC            = ");
    if(chipinfo_chtec == 0)
    {
        error_flag = TRUE;
        //sscanf("Invalid Silicon", %s, error_string);
    }
    else if(chipinfo_chtec == 1)
    {
        printf("0x%X  (SAx-TC2xx)\n\r", chipinfo_chtec);
    }
    else if(chipinfo_chtec == 2)
    {
        printf("0x%X  (SAx-TC3xx)\n\r", chipinfo_chtec);
    }
    else if(chipinfo_chtec == 3)
    {
        printf("0x%X  (SAx-TC4xx)\n\r", chipinfo_chtec);
    }


    register_ptr = UCB0_09_BMI_BMHDID_REG_ADD;
    ucb0_09_bmi_bmhdid = *register_ptr;

    ucb0_09_bmi_bmhdid_bmhdid = ((ucb0_09_bmi_bmhdid >> 16) & 0xFFFF);
    printf("UCB0_09_BMI_BMHDID.BMHDID = 0x%04X\n\r", ucb0_09_bmi_bmhdid_bmhdid);



    ucid0_man_id = (ucid0 & 0xFF);

    printf("UCID0.Man_ID              = 0x%02X", ucid0_man_id);
    if(ucid0_man_id == 0x40)
    {
        printf(" (IFX)\n\r");
    }
    else
    {
        error_flag = TRUE;
        //sscanf("Invalid Silicon", %s, error_string);
    }

}
