#include "mcu_init.h"

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
//---------------------------------------------------------
//USART1 initialize function
//---------------------------------------------------------
void USART1_Init(void){
	
	/*Enable a clock on port GPIOG*/
	RCC_AHB1PeriphClockCmd(RCC_AHB1Periph_GPIOA, ENABLE);
	/*Initialize configuration structure for GPIOA pins*/
	GPIO_InitTypeDef GPIO_Init_USART;
	/*Initialize USART1 configuration structure*/
	USART_InitTypeDef USART1_Init;
	
	/*Use GPIOA, PIN9,PIN10 as alternative function for TX&RX*/
	GPIO_Init_USART.GPIO_Pin = GPIO_Pin_9|GPIO_Pin_10; 
	GPIO_Init_USART.GPIO_Mode = GPIO_Mode_AF;
	GPIO_Init_USART.GPIO_OType = GPIO_OType_PP;
	GPIO_Init_USART.GPIO_Speed = GPIO_Fast_Speed;
	GPIO_Init_USART.GPIO_PuPd = GPIO_PuPd_UP;
	GPIO_Init(GPIOA, &GPIO_Init_USART);
	
	GPIO_PinAFConfig(GPIOA, GPIO_PinSource9, GPIO_AF_USART1);
	GPIO_PinAFConfig(GPIOA, GPIO_PinSource10, GPIO_AF_USART1);
	
	/*Enable clock for USART1*/
	RCC_APB2PeriphClockCmd(RCC_APB2Periph_USART1, ENABLE);
	
	/*Set baudrate 9600, No HW flow control, 
			*Tx&Rx mode, No parity,
		 	*One stop bit,8-bit data
	*/
	USART1_Init.USART_BaudRate = 9600;
	USART1_Init.USART_HardwareFlowControl = USART_HardwareFlowControl_None;
	USART1_Init.USART_Mode = USART_Mode_Rx|USART_Mode_Tx;
	USART1_Init.USART_Parity = USART_Parity_No;
	USART1_Init.USART_StopBits = USART_StopBits_1 ;
	USART1_Init.USART_WordLength = USART_WordLength_8b;
	
	/*Configure USART1*/
	USART_Init(USART1, &USART1_Init);
	
	/*Enable USART Interrupt*/
	NVIC_EnableIRQ(USART1_IRQn);
	
	/*Enable TX Interrupt*/
	//USART_ITConfig(USART1, USART_IT_TXE, ENABLE);
	
	/*Enable USART1*/
	USART_Cmd(USART1, ENABLE);
}
