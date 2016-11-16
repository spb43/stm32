#ifndef MAIN_H
#define MAIN_H

#include "stm32f4xx.h"
#include "mcu_init.h"
#include "LCD_1602.h"
#include <stdio.h>


#define BUTTON_READ() GPIO_ReadInputDataBit(GPIOA, GPIO_Pin_0)
#define LED_ON() GPIO_SetBits(GPIOG, GPIO_Pin_13|GPIO_Pin_14)
#define LED_OFF() GPIO_ResetBits(GPIOG, GPIO_Pin_13|GPIO_Pin_14)


#endif
