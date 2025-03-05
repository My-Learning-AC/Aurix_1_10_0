#ifndef GPIO_TEST_H_
#define GPIO_TEST_H_    1


void initTMADC(uint8 pin_idx);
void initTMADCModule(uint8 pin_idx);
void initTMADCChannel(uint8 pin_idx);
void Verify_Pin(uint8 pin_idx);
void Verify_PinHigh(uint8 pin_idx);
void Verify_PinLow(uint8 pin_idx);
void Port16_special_configuration(void);
boolean Pin_Test(void);


#endif
