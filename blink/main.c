#include "RTE_Components.h"             // Component selection
#include "stm32f4xx.h"                  // Device header
#include <stdio.h>

uint32_t i;

int main(void){
	
	
	RCC->AHB1ENR |= RCC_AHB1ENR_GPIODEN;
	GPIOD->MODER = 0x55000000;
	
	GPIOD->OTYPER = 0;
	GPIOD->OSPEEDR = 0;
	
	while(1){
		
		
		GPIOD->ODR = 0xF000;
		for(i=0;i<1000000;i++){}
		GPIOD->ODR = 0x0000;
		for(i=0;i<1000000;i++){}
		
	}
	
}
