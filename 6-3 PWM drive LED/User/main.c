#include "stm32f10x_conf.h"
#include "stm32f10x.h"
#include "Delay.h"
#include "PWM.h"

int main(){
	uint8_t i;
	PWM_Init();

	while(1) {
		for (i = 0; i <= 100; i++) {
			PWM_SetCompare1(i);
			Delay_ms(10);
		}
		for (i = 0; i <= 100; i++) {
			PWM_SetCompare1(100 - i);
			Delay_ms(10);
		}
	}
}
