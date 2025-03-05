#ifndef MTP_APPLICATION_MAIN_H_
#define MTP_APPLICATION_MAIN_H_     1


#include "mtp\Data_Flash.h"



#define TEST_TIME_LIMIT     (15u)       // in seconds

//#include "Ifx_CircularBuffer.h"


/* Test Cases for MTP is defined here (User modifiable) */
enum MTP_Test_Cases
{
  MTP_GPIO,
  MTP_LED,
  MTP_USER_BUTTON,
  MTP_POT,
  MTP_EEPROM,
  MTP_CAN,
  MTP_ETHERNET,
};

/* Test elements/components, each of these components are tested and the results are stored individually */
enum MTP_Test_Components
{
    GPIO_E,
    LED_E,
    BTN_E,
    POT_E,
    EEPROM_E,
    CAN_E,
    ETHERNET_E,
    MTP_TOTAL_TEST_COMPONENTS,
    RESET_E,
};



/* Test elements strings to be printed as test name in serial terminal window */
char Test_Elements_str[MTP_TOTAL_TEST_COMPONENTS + 1][30]=
{
    "GPIO Header",
    "User LEDs",
    "User Buttons",
    "Potentiometer",
    "I2C EEPROM",
    "CAN",
    "Ethernet",
    "Reset Button",
};

enum MTP_TestType
{
    MTP_AUTO,
    MTP_MANUAL
};



/* Global variables related to MTP test */
boolean new_test = 0;
boolean start_test = FALSE;
boolean skip_test = FALSE;
boolean test_passed = FALSE;
boolean test_failed = FALSE;
boolean Timeout = FALSE;

enum MTP_Test_Cases current_test;
enum MTP_Test_Components element;


/* Reads the stored individual test results */
void ReadResult()
{
    uint8 num_test_passed = 0;
    uint8 i = 0;
    boolean res = 0;

    printf("  -------------------------------------------------------------------------\n\r");
    printf("  ---------------------------- Test Results -------------------------------\n\r");

    printf("  USB-UART Test Passed\n\r");
    //printf("  Reset Button Test Passed\n\r");

    for (i = 0; i < (MTP_TOTAL_TEST_COMPONENTS); i++)
    {
        res = readStatusFromFlash(i);
        if(res)
        {
            num_test_passed++;
            printf("  %s Test Passed\n\r", Test_Elements_str[i]);
        }
        else if(!res)
        {
            printf("  %s Test Not Passed\n\r", Test_Elements_str[i]);
        }
    }

    res = readStatusFromFlash(MTP_TOTAL_TEST_COMPONENTS + 1);
    if(res)
    {
        num_test_passed++;
        printf("  %s Test Passed\n\r", Test_Elements_str[MTP_TOTAL_TEST_COMPONENTS]);
    }
    else if(!res)
    {
        printf("  %s Test Not Passed\n\r", Test_Elements_str[MTP_TOTAL_TEST_COMPONENTS]);
    }

    if (num_test_passed == (MTP_TOTAL_TEST_COMPONENTS + 1))  // After MIPI camera it would be (MTP_TOTAL_TEST_COMPONENTS + 1)
    {
        printf("  All tests passed\n\r");
        printf("  -------------------------------------------------------------------------\n\r");
        printf("-----------------------------------------------------------------------------\n\r");
        printf("                           CPU BOARD IS READY TO SHIP                        \n\r");
        printf("-----------------------------------------------------------------------------\n\r");
    }
    else
    {
        printf("  -------------------------------------------------------------------------\n\r");
        printf("-----------------------------------------------------------------------------\n\r");
        printf("                         CPU BOARD IS NOT READY TO SHIP                      \n\r");
        printf("-----------------------------------------------------------------------------\n\r");
    }
}


#endif

