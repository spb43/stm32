#ifndef LCD_1602_H

#define LCD_1602_H

/*include system module*/
#include "stm32f4xx.h"     

/*include custom modules*/


/*Definition for LCD RS pin*/
#define RS_RCC_CMD					RCC_AHB1PeriphClockCmd
#define RS_RCC							RCC_AHB1Periph_GPIOE 
#define RS_PIN							GPIO_Pin_11
#define RS_PORT							GPIOE

/*Definition for LCD RW pin*/
#define RW_RCC_CMD					RCC_AHB1PeriphClockCmd
#define RW_RCC							RCC_AHB1Periph_GPIOE 
#define RW_PIN							GPIO_Pin_9
#define RW_PORT							GPIOE

/*Definition for LCD EN pin*/
#define EN_RCC_CMD					RCC_AHB1PeriphClockCmd
#define EN_RCC							RCC_AHB1Periph_GPIOE 
#define EN_PIN							GPIO_Pin_8
#define EN_PORT							GPIOE

/*Definition for LCD DB0 pin*/
#define DB0_RCC_CMD					RCC_AHB1PeriphClockCmd
#define DB0_RCC							RCC_AHB1Periph_GPIOD 
#define DB0_PIN							GPIO_Pin_8
#define DB0_PORT						GPIOD

/*Definition for LCD DB1 pin*/
#define DB1_RCC_CMD					RCC_AHB1PeriphClockCmd
#define DB1_RCC							RCC_AHB1Periph_GPIOD 
#define DB1_PIN							GPIO_Pin_9
#define DB1_PORT						GPIOD

/*Definition for LCD DB2 pin*/
#define DB2_RCC_CMD					RCC_AHB1PeriphClockCmd
#define DB2_RCC							RCC_AHB1Periph_GPIOD 
#define DB2_PIN							GPIO_Pin_10
#define DB2_PORT						GPIOD

/*Definition for LCD DB3 pin*/
#define DB3_RCC_CMD					RCC_AHB1PeriphClockCmd
#define DB3_RCC							RCC_AHB1Periph_GPIOD 
#define DB3_PIN							GPIO_Pin_11
#define DB3_PORT						GPIOD

/*Definition for LCD DB4 pin*/
#define DB4_RCC_CMD					RCC_AHB1PeriphClockCmd
#define DB4_RCC							RCC_AHB1Periph_GPIOD 
#define DB4_PIN							GPIO_Pin_12
#define DB4_PORT						GPIOD

/*Definition for LCD DB5 pin*/
#define DB5_RCC_CMD					RCC_AHB1PeriphClockCmd
#define DB5_RCC							RCC_AHB1Periph_GPIOD 
#define DB5_PIN							GPIO_Pin_13
#define DB5_PORT						GPIOD

/*Definition for LCD DB6 pin*/
#define DB6_RCC_CMD					RCC_AHB1PeriphClockCmd
#define DB6_RCC							RCC_AHB1Periph_GPIOD 
#define DB6_PIN							GPIO_Pin_14
#define DB6_PORT						GPIOD

/*Definition for LCD DB7 pin*/
#define DB7_RCC_CMD					RCC_AHB1PeriphClockCmd
#define DB7_RCC							RCC_AHB1Periph_GPIOD 
#define DB7_PIN							GPIO_Pin_15
#define DB7_PORT						GPIOD

/*Define function for write data to port*/
#define RS(bit_val) 						GPIO_WriteBit(RS_PORT, RS_PIN, (BitAction)bit_val)
#define RW(bit_val) 						GPIO_WriteBit(RW_PORT, RW_PIN, (BitAction)bit_val)
#define	EN(bit_val) 						GPIO_WriteBit(EN_PORT, EN_PIN, (BitAction)bit_val)

#define DB0(bit_val) 						GPIO_WriteBit(DB0_PORT, DB0_PIN, (BitAction)bit_val)
#define DB1(bit_val) 						GPIO_WriteBit(DB1_PORT, DB1_PIN, (BitAction)bit_val)
#define DB2(bit_val) 						GPIO_WriteBit(DB2_PORT, DB2_PIN, (BitAction)bit_val)
#define DB3(bit_val) 						GPIO_WriteBit(DB3_PORT, DB3_PIN, (BitAction)bit_val)
#define DB4(bit_val) 						GPIO_WriteBit(DB4_PORT, DB4_PIN, (BitAction)bit_val)
#define DB5(bit_val) 						GPIO_WriteBit(DB5_PORT, DB5_PIN, (BitAction)bit_val)
#define DB6(bit_val) 						GPIO_WriteBit(DB6_PORT, DB6_PIN, (BitAction)bit_val)
#define DB7(bit_val) 						GPIO_WriteBit(DB7_PORT, DB7_PIN, (BitAction)bit_val)


void LCD_init(void);
void Send_Str(uint8_t str_num,char* str);

#endif
