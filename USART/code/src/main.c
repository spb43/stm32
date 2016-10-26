/*------------------------------------------------------
* 	Keil project for USART testing using interrupt.
* 	Standart peripheral drivers version 1.6.0
*		IDE: Keil uVision v5
*------------------------------------------------------*/
/*include core modules*/
#include "stm32f4xx.h"                  // Device header

/*include custom modules*/
#include "main.h"
#include "mcu_init.h"

/*Function declaration*/
void USART1_Send_Str(char *str, uint16_t cnt);
void USART1_Send_Data(void);

//Buffer for sending data
	char data_buff[128];
	uint16_t cnt = 0;
//---------------------------------------------------------
//MAIN FUNCTION
//---------------------------------------------------------
int main(){
	
	//Initialize function
	USART1_Init();
	sprintf(data_buff, "Temperature:");
	
	
	while(1)
	{
		for(int i=0; i<1000000; i++){}
		//USART1_Send_Str(str, 10);
		USART1_Send_Data();
	}
}
//---------------------------------------------------------
//USART1 Interrupt function
//---------------------------------------------------------
void USART1_IRQHandler(void)
{
	if(USART_GetITStatus(USART1, USART_IT_TXE) == SET)
	{
		//Reset Interrupt flag
		USART_ClearITPendingBit(USART1, USART_IT_TXE);
		if( data_buff[cnt] != 0)
		{
			USART_SendData(USART1, data_buff[cnt]);
			cnt++;
		}
		else
		{
			USART_ITConfig(USART1, USART_IT_TXE, DISABLE);
			cnt = 0;
		}
	}
}
//---------------------------------------------------------
//USART1 Send_data 
//---------------------------------------------------------
void USART1_Send_Data(void){
	USART_SendData(USART1, data_buff[cnt]);
			cnt++;
	USART_ITConfig(USART1, USART_IT_TXE, ENABLE);
}
	
//---------------------------------------------------------
//USART1 Send_string_data 
//---------------------------------------------------------
void USART1_Send_Str(char *str, uint16_t cnt)
{
	
	uint16_t i = 0;
	
	while(i < cnt)
	{
		while(USART_GetFlagStatus(USART1, USART_FLAG_TC) == RESET){}
		USART_SendData(USART1, str[i]);
		i++;
	}
}
