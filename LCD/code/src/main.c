/*------------------------------------------------------
* 	Keil project for USART testing using interrupt.
* 	Standart peripheral drivers version 1.6.0
*		IDE: Keil uVision v5
*------------------------------------------------------*/
/*include core modules*/
#include "stm32f4xx.h"                  // Device header

/*include custom modules*/
#include "main.h"



/*Function declaration*/


//Buffer for sending data
char data_buff0[] = "Hello world";

	

//---------------------------------------------------------
//MAIN FUNCTION
//---------------------------------------------------------
int main(){
	SystemCoreClockUpdate();
	SysTick_Config(SystemCoreClock/1000);

	
	delay_ms(50);
	LCD_init();
	
	Send_Str(0, data_buff0);

	
	while(1)
	{
		for(int i=0; i<1000000; i++){}

	}
}

