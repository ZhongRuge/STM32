#include "stm32f10x.h"
#include "stm32f10x_conf.h"

int main(void)
{
    RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOA, ENABLE);

    GPIO_InitTypeDef GPIO_InitStruct;
    GPIO_InitStruct.GPIO_Pin = ;
    GPIO_InitStruct.GPIO_Mode = ;
    GPIO_InitStruct.GPIO_Speed = ;
    GPIO_Init(GPIOA, )

    while (1)
    {

    }
}
