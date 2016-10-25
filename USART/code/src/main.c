/*------------------------------------------------------
* 	Keil project for USART testing.
* 	Standart peripheral drivers version 1.6.0
*		IDE: Keil uVision v5
*------------------------------------------------------*/
/*include core modules*/
#include "stm32f4xx.h"                  // Device header

/*include custom modules*/
#include "main.h"
#include "mcu_init.h"

int main(){
	
	USART1_Init();
	
	while(1)
	{
		for(int i=0; i<500000; i++){}
		USART_SendData(USART1, 0xFF);
		
	}
}
