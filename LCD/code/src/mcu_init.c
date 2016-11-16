#include "mcu_init.h"
#include "LCD_1602.h"

//-------------------------------------------------------
//LED initialize function
//-------------------------------------------------------
void LEDs_Init(void){
	
	/*Enable a clock on port G*/
	RCC_AHB1PeriphClockCmd(RCC_AHB1Periph_GPIOG, ENABLE);
	/*Initialize configuration structure for GPIOG pins*/
	GPIO_InitTypeDef GPIO_Init_LED;
	
	GPIO_Init_LED.GPIO_Pin = GPIO_Pin_13|GPIO_Pin_14; 
	GPIO_Init_LED.GPIO_Mode = GPIO_Mode_OUT;
	GPIO_Init_LED.GPIO_OType = GPIO_OType_PP;
	GPIO_Init_LED.GPIO_Speed = GPIO_Low_Speed;
	GPIO_Init_LED.GPIO_PuPd = GPIO_PuPd_NOPULL;
	/*Configure LEDs*/
	GPIO_Init(GPIOG, &GPIO_Init_LED);
	
}
//---------------------------------------------------------
//Button initialize function
//---------------------------------------------------------
void Button_Init(void){
	/*Enable a clock on port A*/
	RCC_AHB1PeriphClockCmd(RCC_AHB1Periph_GPIOA, ENABLE);
	/*Initialize configuration structure for GPIOA pins*/
	GPIO_InitTypeDef GPIO_Init_Button;
	
	GPIO_Init_Button.GPIO_Pin = GPIO_Pin_0; 
	GPIO_Init_Button.GPIO_Mode = GPIO_Mode_IN;
	GPIO_Init_Button.GPIO_OType = GPIO_OType_PP;
	GPIO_Init_Button.GPIO_Speed = GPIO_Low_Speed;
	GPIO_Init_Button.GPIO_PuPd = GPIO_PuPd_NOPULL;
	/*Configure Button*/
	GPIO_Init(GPIOA, &GPIO_Init_Button);
	
}

