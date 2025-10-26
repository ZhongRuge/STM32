#include <stm32f10x.h>
#include <stm32f10x_conf.h>
#include "LED.h"
#include "Button.h"

uint8_t keyNum;


int main(void)
{
	LED_Init();
	Button_Init();
	LED_SWITCH(GPIOA, GPIO_Pin_1 | GPIO_Pin_11, Bit_RESET);
	while (1){
		keyNum = Button_GetNum();
		if (keyNum == 1){
			LED_SWITCH(GPIOA, GPIO_Pin_1, Bit_SET);
			LED_SWITCH(GPIOA, GPIO_Pin_2, Bit_RESET);
		}
		else if (keyNum == 2){
			LED_SWITCH(GPIOA, GPIO_Pin_2, Bit_SET);
			LED_SWITCH(GPIOA, GPIO_Pin_1, Bit_RESET);
		}
	}
}
