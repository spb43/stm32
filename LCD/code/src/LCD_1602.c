/*---------------------------------------------------
*Display model:	Quapass 1602A
*Controller: 		Sitronix st7066U
---------------------------------------------------*/

/*Include LCD header*/
#include "LCD_1602.h"

void LCD_1602_Init(void)
	{
/*-------------------------------------------------
		*Initializate RS pin
--------------------------------------------------*/
	/*Initialize configuration structure for LCD*/
	GPIO_InitTypeDef GPIO_Init_LCD;
	/*Enable clock on RS pin*/
	RS_RCC_CMD(RS_RCC, ENABLE);
//-------------------------------------------------	
	GPIO_Init_LCD.GPIO_Pin = RS_PIN; 
	GPIO_Init_LCD.GPIO_Mode = GPIO_Mode_OUT;
	GPIO_Init_LCD.GPIO_OType = GPIO_OType_PP;
	GPIO_Init_LCD.GPIO_Speed = GPIO_Low_Speed;
	GPIO_Init_LCD.GPIO_PuPd = GPIO_PuPd_NOPULL;
		/*Configure pin*/
	GPIO_Init(RS_PORT, &GPIO_Init_LCD);
		
/*-------------------------------------------------
		*Initializate RW pin
--------------------------------------------------*/
	/*Enable clock on RS pin*/
	RW_RCC_CMD(RW_RCC, ENABLE);
//-------------------------------------------------	
	GPIO_Init_LCD.GPIO_Pin = RW_PIN; 
	GPIO_Init_LCD.GPIO_Mode = GPIO_Mode_OUT;
	GPIO_Init_LCD.GPIO_OType = GPIO_OType_PP;
	GPIO_Init_LCD.GPIO_Speed = GPIO_Low_Speed;
	GPIO_Init_LCD.GPIO_PuPd = GPIO_PuPd_NOPULL;
		/*Configure pin*/
	GPIO_Init(RW_PORT, &GPIO_Init_LCD);
	
/*-------------------------------------------------
		*Initializate EN pin
--------------------------------------------------*/
	/*Enable clock on EN pin*/
	EN_RCC_CMD(EN_RCC, ENABLE);
//-------------------------------------------------	
	GPIO_Init_LCD.GPIO_Pin = EN_PIN; 
	GPIO_Init_LCD.GPIO_Mode = GPIO_Mode_OUT;
	GPIO_Init_LCD.GPIO_OType = GPIO_OType_PP;
	GPIO_Init_LCD.GPIO_Speed = GPIO_Low_Speed;
	GPIO_Init_LCD.GPIO_PuPd = GPIO_PuPd_NOPULL;
		/*Configure pin*/
	GPIO_Init(EN_PORT, &GPIO_Init_LCD);

/*-------------------------------------------------
		*Initializate DB0 pin
--------------------------------------------------*/
	/*Enable clock on DB0 pin*/
	DB0_RCC_CMD(DB0_RCC, ENABLE);
//-------------------------------------------------	
	GPIO_Init_LCD.GPIO_Pin = DB0_PIN; 
	GPIO_Init_LCD.GPIO_Mode = GPIO_Mode_OUT;
	GPIO_Init_LCD.GPIO_OType = GPIO_OType_PP;
	GPIO_Init_LCD.GPIO_Speed = GPIO_Low_Speed;
	GPIO_Init_LCD.GPIO_PuPd = GPIO_PuPd_NOPULL;
		/*Configure pin*/
	GPIO_Init(DB0_PORT, &GPIO_Init_LCD);

/*-------------------------------------------------
		*Initializate DB1 pin
--------------------------------------------------*/
	/*Enable clock on DB1 pin*/
	DB1_RCC_CMD(DB1_RCC, ENABLE);
//-------------------------------------------------	
	GPIO_Init_LCD.GPIO_Pin = DB1_PIN; 
	GPIO_Init_LCD.GPIO_Mode = GPIO_Mode_OUT;
	GPIO_Init_LCD.GPIO_OType = GPIO_OType_PP;
	GPIO_Init_LCD.GPIO_Speed = GPIO_Low_Speed;
	GPIO_Init_LCD.GPIO_PuPd = GPIO_PuPd_NOPULL;
		/*Configure pin*/
	GPIO_Init(DB1_PORT, &GPIO_Init_LCD);
	
/*-------------------------------------------------
		*Initializate DB2 pin
--------------------------------------------------*/
	/*Enable clock on DB2 pin*/
	DB2_RCC_CMD(DB2_RCC, ENABLE);
//-------------------------------------------------	
	GPIO_Init_LCD.GPIO_Pin = DB2_PIN; 
	GPIO_Init_LCD.GPIO_Mode = GPIO_Mode_OUT;
	GPIO_Init_LCD.GPIO_OType = GPIO_OType_PP;
	GPIO_Init_LCD.GPIO_Speed = GPIO_Low_Speed;
	GPIO_Init_LCD.GPIO_PuPd = GPIO_PuPd_NOPULL;
		/*Configure pin*/
	GPIO_Init(DB2_PORT, &GPIO_Init_LCD);
	
/*-------------------------------------------------
		*Initializate DB3 pin
--------------------------------------------------*/
	/*Enable clock on DB3 pin*/
	DB3_RCC_CMD(DB3_RCC, ENABLE);
//-------------------------------------------------	
	GPIO_Init_LCD.GPIO_Pin = DB3_PIN; 
	GPIO_Init_LCD.GPIO_Mode = GPIO_Mode_OUT;
	GPIO_Init_LCD.GPIO_OType = GPIO_OType_PP;
	GPIO_Init_LCD.GPIO_Speed = GPIO_Low_Speed;
	GPIO_Init_LCD.GPIO_PuPd = GPIO_PuPd_NOPULL;
		/*Configure pin*/
	GPIO_Init(DB3_PORT, &GPIO_Init_LCD);
	
/*-------------------------------------------------
		*Initializate DB4 pin
--------------------------------------------------*/
	/*Enable clock on DB4 pin*/
	DB4_RCC_CMD(DB4_RCC, ENABLE);
//-------------------------------------------------	
	GPIO_Init_LCD.GPIO_Pin = DB4_PIN; 
	GPIO_Init_LCD.GPIO_Mode = GPIO_Mode_OUT;
	GPIO_Init_LCD.GPIO_OType = GPIO_OType_PP;
	GPIO_Init_LCD.GPIO_Speed = GPIO_Low_Speed;
	GPIO_Init_LCD.GPIO_PuPd = GPIO_PuPd_NOPULL;
		/*Configure pin*/
	GPIO_Init(DB4_PORT, &GPIO_Init_LCD);
	
/*-------------------------------------------------
		*Initializate DB5 pin
--------------------------------------------------*/
	/*Enable clock on DB5 pin*/
	DB5_RCC_CMD(DB5_RCC, ENABLE);
//-------------------------------------------------	
	GPIO_Init_LCD.GPIO_Pin = DB5_PIN; 
	GPIO_Init_LCD.GPIO_Mode = GPIO_Mode_OUT;
	GPIO_Init_LCD.GPIO_OType = GPIO_OType_PP;
	GPIO_Init_LCD.GPIO_Speed = GPIO_Low_Speed;
	GPIO_Init_LCD.GPIO_PuPd = GPIO_PuPd_NOPULL;
		/*Configure pin*/
	GPIO_Init(DB5_PORT, &GPIO_Init_LCD);
	
/*-------------------------------------------------
		*Initializate DB6 pin
--------------------------------------------------*/
	/*Enable clock on DB6 pin*/
	DB6_RCC_CMD(DB6_RCC, ENABLE);
//-------------------------------------------------	
	GPIO_Init_LCD.GPIO_Pin = DB6_PIN; 
	GPIO_Init_LCD.GPIO_Mode = GPIO_Mode_OUT;
	GPIO_Init_LCD.GPIO_OType = GPIO_OType_PP;
	GPIO_Init_LCD.GPIO_Speed = GPIO_Low_Speed;
	GPIO_Init_LCD.GPIO_PuPd = GPIO_PuPd_NOPULL;
		/*Configure pin*/
	GPIO_Init(DB6_PORT, &GPIO_Init_LCD);
	
/*-------------------------------------------------
		*Initializate DB7 pin
--------------------------------------------------*/
	/*Enable clock on DB7 pin*/
	DB7_RCC_CMD(DB7_RCC, ENABLE);
//-------------------------------------------------	
	GPIO_Init_LCD.GPIO_Pin = DB7_PIN; 
	GPIO_Init_LCD.GPIO_Mode = GPIO_Mode_OUT;
	GPIO_Init_LCD.GPIO_OType = GPIO_OType_PP;
	GPIO_Init_LCD.GPIO_Speed = GPIO_Low_Speed;
	GPIO_Init_LCD.GPIO_PuPd = GPIO_PuPd_NOPULL;
		/*Configure pin*/
	GPIO_Init(DB7_PORT, &GPIO_Init_LCD);
	
/*Set RW pin 0*/
	RW(0);
}

/*Set data on display*/
void LCD_1602_Set_Data(uint8_t data)
{
	if( ((data>>7)&0x01) == 1) {DB7(1);} else {DB7(0);}
	if( ((data>>6)&0x01) == 1) {DB6(1);} else {DB6(0);}
	if( ((data>>5)&0x01) == 1) {DB5(1);} else {DB5(0);}
	if( ((data>>4)&0x01) == 1) {DB4(1);} else {DB4(0);}
	if( ((data>>3)&0x01) == 1) {DB3(1);} else {DB3(0);}
	if( ((data>>2)&0x01) == 1) {DB2(1);} else {DB2(0);}
	if( ((data>>1)&0x01) == 1) {DB1(1);} else {DB1(0);}
	if( ((data>>0)&0x01) == 1) {DB0(1);} else {DB0(0);}
}
/*short delay for set control signals*/
void LCD_delay(void)
{
	uint16_t i;
		for(i=0; i<1000; i++) {}
}
/*Send command to display*/
void LCD_1602_Send_Cmd(uint32_t data)
{
	RS(0);
	
	EN(1);
	LCD_1602_Set_Data(data);
	
	LCD_delay();
	EN(0);
}
/*Send data to display*/
void LCD_1602_Send_Data(uint8_t data)
{
	RS(1);
	
	EN(1);
	LCD_1602_Set_Data(data);
	
	LCD_delay();
	EN(0);
	
}
/*LCD initialization function*/
void LCD_init(void)
{
	LCD_1602_Init();

	LCD_1602_Send_Cmd(0x38);
	delay_ms(1);
	LCD_1602_Send_Cmd(0x38);
	delay_ms(1);
	LCD_1602_Send_Cmd(0x38);
	delay_ms(1);

	LCD_1602_Send_Cmd(0x0F);
	delay_ms(1);
	LCD_1602_Send_Cmd(0x01);
	delay_ms(2);
	LCD_1602_Send_Cmd(0x06);
	delay_ms(1);
	LCD_1602_Send_Cmd(0x02);
	delay_ms(2);
}

/*LCD set string*/
void Send_Str(uint8_t str_num,char* str)
{
	uint8_t i = 0;
	if(str_num == 0)
	{
		LCD_1602_Send_Cmd(0x80);

	}
	else if(str_num == 1)
	{
		LCD_1602_Send_Cmd(0xC0);

	}
	delay_ms(1);
	while(str[i] != 0)
	{
		LCD_1602_Send_Data(str[i]);
	
		LCD_delay();
		i++;
	}
}


