#include <stm32f10x.h>
#include <stm32f10x_conf.h>
#include "OLED.h"
#include "Timer.h"


int16_t Num;

int main(void) {
	OLED_Init();
	Timer_Init();

	OLED_ShowString(1, 1, "Num:");
	OLED_ShowString(2, 1, "CNT:");

	while (1) {
		OLED_ShowNum(1, 5, Num, 6);
		OLED_ShowNum(2, 5, Timer_GetCounter(), 6);
	}
}


void TIM2_IRQHandler(void) {
    if (TIM_GetITStatus(TIM2, TIM_IT_Update) == SET) {
        Num ++;
        TIM_ClearITPendingBit(TIM2, TIM_IT_Update);
    }
}
