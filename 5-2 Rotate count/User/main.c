#include <stm32f10x.h>
#include <stm32f10x_conf.h>
#include "OLED.h"
#include "Encoder.h"

int16_t Num;

int main(void) {
	OLED_Init();
	Encoder_Init();

	OLED_ShowString(1, 1, "Encoder Num:");

	while (1) {
		Num += get_encoder_count();
		OLED_ShowSignedNum(2, 2, Num, 5);
	}
}
