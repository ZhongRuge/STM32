#ifndef __LED_H
#define __LED_H

void LED_Init(void);
void LED_SWITCH(GPIO_TypeDef* GPIOx, uint16_t GPIO_Pin, BitAction BitVal);

#endif
