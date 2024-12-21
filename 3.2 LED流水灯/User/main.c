#include "stm32f10x.h"                  // Device header
#include <Delay.h>
int main(void)
{
	RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOA,ENABLE);
	
	GPIO_InitTypeDef GPIO_InitStructure;
	GPIO_InitStructure.GPIO_Mode=GPIO_Mode_Out_PP;
	GPIO_InitStructure.GPIO_Pin=GPIO_Pin_0|GPIO_Pin_1|GPIO_Pin_2|GPIO_Pin_3|GPIO_Pin_4|GPIO_Pin_5|GPIO_Pin_6|GPIO_Pin_7;
	GPIO_InitStructure.GPIO_Speed=GPIO_Speed_50MHz;
	GPIO_Init(GPIOA,&GPIO_InitStructure);
//	GPIO_ResetBits(GPIOA,GPIO_Pin_0);
	while(1)
	{
		GPIO_Write(GPIOA,~0x0001);//1111 1111 1111 1110
		Delay_ms(100);
		GPIO_Write(GPIOA,~0x0002);//1111 1111 1111 1101
		Delay_ms(100);
		GPIO_Write(GPIOA,~0x0004);//1111 1111 1111 1011
		Delay_ms(100);
		GPIO_Write(GPIOA,~0x0008);//1111 1111 1111 0111
		Delay_ms(100);
		GPIO_Write(GPIOA,~0x0010);//1111 1111 1110 1111
		Delay_ms(100);
		GPIO_Write(GPIOA,~0x0020);//1111 1111 1101 1111
		Delay_ms(100);
		GPIO_Write(GPIOA,~0x0040);//1111 1111 1011 1111
		Delay_ms(100);
		GPIO_Write(GPIOA,~0x0080);//1111 1111 0111 1111
		Delay_ms(100);
		

	}
}
