
#include "stm32f4xx.h"                  // Device header
#include "delay.h"

	uint16_t delay_cnt = 0;
void SysTick_Handler(void)
{
	if(delay_cnt > 0)
	{
		delay_cnt--;
	}
}
void delay_ms(uint16_t delay_tmp)
{
	delay_cnt = delay_tmp;
	while(delay_cnt){}
	}
