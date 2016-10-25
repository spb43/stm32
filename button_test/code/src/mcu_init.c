#include "mcu_init.h"

//-------------------------------------------------------
//LED initialize function
//-------------------------------------------------------
void LEDs_init(void){
	
	/*Enable a clock on port G*/
	RCC_AHB1PeriphClockCmd(RCC_AHB1Periph_GPIOG, ENABLE);
	
	GPIO_InitTypeDef GPIO_Init_LED;
	
	GPIO_Init_LED.GPIO_Pin = GPIO_Pin_13|GPIO_Pin_14; 
	GPIO_Init_LED.GPIO_Mode = GPIO_Mode_OUT;
	GPIO_Init_LED.GPIO_OType = GPIO_OType_PP;
	GPIO_Init_LED.GPIO_Speed = GPIO_Low_Speed;
	GPIO_Init_LED.GPIO_PuPd = GPIO_PuPd_NOPULL;
	
	GPIO_Init(GPIOG, &GPIO_Init_LED);
	
}
//---------------------------------------------------------
//Button initialize function
//---------------------------------------------------------
void Button_init(void){
	/*Enable a clock on port A*/
	RCC_AHB1PeriphClockCmd(RCC_AHB1Periph_GPIOA, ENABLE);
	
	GPIO_InitTypeDef GPIO_Init_Button;
	
	GPIO_Init_Button.GPIO_Pin = GPIO_Pin_0; 
	GPIO_Init_Button.GPIO_Mode = GPIO_Mode_IN;
	GPIO_Init_Button.GPIO_OType = GPIO_OType_PP;
	GPIO_Init_Button.GPIO_Speed = GPIO_Low_Speed;
	GPIO_Init_Button.GPIO_PuPd = GPIO_PuPd_NOPULL;
	
	GPIO_Init(GPIOA, &GPIO_Init_Button);
	
}
