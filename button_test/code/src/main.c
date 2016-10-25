/*include core modules*/
#include "stm32f4xx.h"                  // Device header

/*include custom modules*/
#include "main.h"
#include "mcu_init.h"

int main(){
	
	//initiatize leds
	LEDs_init();
	Button_init();
	
	while(1)
	{
		if(BUTTON_READ() == 1)
		{
			LED_ON();
		}
		else{
			LED_OFF();
		}
		
	}
}
