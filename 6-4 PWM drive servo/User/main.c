#include "stm32f10x_conf.h"
#include "stm32f10x.h"
#include "Delay.h"
#include "Servo.h"
#include "Key.h"
#include "OLED.h"

uint8_t keynum;
float angle;

int main(){

	OLED_Init();
	Servo_Init();
	Key_Init();

	OLED_ShowString(1, 1, "Angle:");

	while(1) {
		keynum = Key_GetNum();
		if (keynum == 1) {
			angle += 30;
			if (angle > 180) { angle = 0;}
		}
		Servo_SetAngle(angle);
		OLED_ShowNum(2, 1, angle, 3);
	}
}
