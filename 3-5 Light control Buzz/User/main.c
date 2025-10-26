#include <stm32f10x.h>
#include <stm32f10x_conf.h>


int main(void)
{
	RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOB, ENABLE);

	GPIO_InitTypeDef GPIO_InitStructure;
	GPIO_InitStructure.GPIO_Pin = GPIO_Pin_12;
	GPIO_InitStructure.GPIO_Speed = GPIO_Speed_50MHz;
	GPIO_InitStructure.GPIO_Mode = GPIO_Mode_Out_PP;
	GPIO_Init(GPIOB, &GPIO_InitStructure);

	GPIO_InitStructure.GPIO_Pin = GPIO_Pin_13;
	GPIO_InitStructure.GPIO_Speed = GPIO_Speed_50MHz;
	GPIO_InitStructure.GPIO_Mode = GPIO_Mode_IPU;
	GPIO_Init(GPIOB, &GPIO_InitStructure);

	while (1){

		if (GPIO_ReadInputDataBit(GPIOB, GPIO_Pin_13) == 0){
			GPIO_ResetBits(GPIOB, GPIO_Pin_12);
		}
		else{
			GPIO_SetBits(GPIOB, GPIO_Pin_12);
		}

	}
}
