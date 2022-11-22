/*
 * softwear_timer.c
 *
 *  Created on: Nov 22, 2022
 *      Author: ntdat
 */
#include "softwear_timer.h"

#define TICK 10

int timer1_flag = 0;
int timer1_counter = 0;


void setTimer1(int duration){
	timer1_flag = 0;
	timer1_counter = duration /TICK;
};

void timerRun(){
	if(timer1_counter > 0){
		timer1_counter --;
		if(timer1_counter <= 0){
			timer1_flag = 1;
		}
	}
};
