#include "pwm.h"
/*
 * pwm.c
 *
 *  Created on: Feb 12, 2021
 *      Author: terencewilliams
 */

void timer_pwmconfig(void){
    TIMER_A0->CTL       |= TIMER_A_CTL_CLR;
    TIMER_A0->CTL       |= TIMER_A_CTL_SSEL__SMCLK;
    TIMER_A0->CTL       |= TIMER_A_CTL_ID__1;
    TIMER_AO->CCR[0]    |= TICKS;
    TIMER_A0->CCTL      |= TIMER_A_CCTLN_OUTMOD_4;

    //TIMER_A0->CTL |= TIMER_A_CTL_IE;
}

void pwm_gpio_config(void){
    P2->DIR     |= BIT4;
    P2->OUT     |= BIT4;                    // Make sure that P2 is an output
    P2->SEL0    |= BIT4;                    // Select the mode
    P2->SEL1    &= ~(BIT4);
}

void start_pwm(void){
    TIMER_A0->CTL |= TIMER_A_CTL_MC__UP;
}


void stop_pwm(void){
    TIMER_A0->CTL &= ~(TIMER_A_CTL_MC__STOP);
}

void button_config(void){

}



