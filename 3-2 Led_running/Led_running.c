#include "stm32f10x.h"
#include "stm32f10x_conf.h"
#include "Delay.h"

int main(void){
    RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOA, ENABLE);

    // 初始化
    GPIO_InitTypeDef GPIO_InitStructure;
    GPIO_InitStructure.GPIO_Mode = GPIO_Mode_Out_PP;
    GPIO_InitStructure.GPIO_Pin = GPIO_Pin_All;
    GPIO_InitStructure.GPIO_Speed = GPIO_Speed_50MHz;
    GPIO_Init(GPIOA, &GPIO_InitStructure);

    while(1){
        GPIO_Write(GPIOA, 0xFFFE);
        Delay_ms(100);
        GPIO_Write(GPIOA, 0xFFFD);
        Delay_ms(100);
        GPIO_Write(GPIOA, 0xFFFB);
        Delay_ms(100);
        GPIO_Write(GPIOA, 0xFFF7);
        Delay_ms(100);
    }
}
