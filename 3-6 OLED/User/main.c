#include <stm32f10x.h>
#include <stm32f10x_conf.h>
#include "OLED.h"

int main(void)
{
	OLED_Init();
	OLED_ShowChar(1, 1, 'A');
	OLED_ShowString(1, 3, "Hello, OLED!");
	while (1){

	}
}
