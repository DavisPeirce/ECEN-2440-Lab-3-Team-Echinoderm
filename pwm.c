#include "pwm.h"
/*
 * pwm.c
 *
 *  Created on: Feb 12, 2021
 *      Author: terencewilliams
 */

void timer_pwmconfig(void){
    TIMER_A0->CTL &= TIMER_A_CTL_MC__STOP;
    TIMER_A0->CTL |= TIMER_A_CTL_SSEL__SMCLK;
    TIMER_A0->CTL |= TIMER_A_CTL_ID__1;

    TIMER_A0 ->CCTL |= TIMER_A_CCTLN_OUTMOD_4;

    //TIMER_A0->CTL |= TIMER_A_CTL_IE;
}

void pwm_gpio_config(void){
    P2->DIR |= BIT4;

}

void start_pwm(void){
    TIMER_A0->CTL |= TIMER_A_CTL_MC__UP;
}


void stop_pwm(void){
    TIMER_A0->CTL &= ~(TIMER_A_CTL_MC__STOP);
}



