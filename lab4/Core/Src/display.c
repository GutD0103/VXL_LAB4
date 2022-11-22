/*
 * display.c
 *
 *  Created on: Nov 22, 2022
 *      Author: ntdat
 */


#include "main.h"

int flag = 0;

void led1(){
	HAL_GPIO_TogglePin(LED_RED_GPIO_Port, LED_RED_Pin);
	flag = 1;
}

void led2(){
	HAL_GPIO_TogglePin(LED_YELLOW_GPIO_Port, LED_YELLOW_Pin);
	flag = 2;
}

void led3(){
	HAL_GPIO_TogglePin(LED_GREEN_GPIO_Port, LED_GREEN_Pin);
	flag = 3;
}

void led4(){
	HAL_GPIO_TogglePin(LED_PINK_GPIO_Port,LED_PINK_Pin);
	flag = 4;
}

void led5(){
	HAL_GPIO_TogglePin(LED_WHITE_GPIO_Port, LED_WHITE_Pin);
	flag = 5;
}
