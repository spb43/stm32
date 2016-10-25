#include "RTE_Components.h"             // Component selection
#include "stm32f4xx.h"                  // Device header
#include <stdio.h>

uint32_t i;

int main(void){
	
	GPIO_InitTypeDef GPIOD_init_LED;
	
	GPIOD_init_LED.GPIO_Pin = GPIO_Pin_13|GPIO_Pin_14;
	GPIOD_init_LED.GPIO_Mode = GPIO_Mode_OUT;
	GPIOD_init_LED.GPIO_OType = GPIO_OType_PP;
	GPIOD_init_LED.GPIO_Speed = GPIO_Low_Speed;
	
	//Initialize port
	GPIO_Init(GPIOD, &GPIOD_init_LED);
	
	
	while(1){
		
		
		GPIO_SetBits(GPIOD, GPIO_Pin_13|GPIO_Pin_14);
		for(i=0;i<1000000;i++){}
		GPIO_ResetBits(GPIOD, GPIO_Pin_13|GPIO_Pin_14);
		for(i=0;i<1000000;i++){}
		
	}
	
}
