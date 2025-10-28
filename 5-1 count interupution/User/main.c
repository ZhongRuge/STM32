#include <stm32f10x.h>
#include <stm32f10x_conf.h>
#include "OLED.h"
#include "CntSensor.h"

int main(void)
{
	OLED_Init();
	CntSensor_Init();
	OLED_ShowString(1, 1, "Count:");
	while (1){
		OLED_ShowNum(1, 8, getCount(), 5);
	}
}
