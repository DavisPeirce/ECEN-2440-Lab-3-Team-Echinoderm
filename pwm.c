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
    TIMER_A0->CCR[0]    |= TICKS;
    TIMER_A0->CCTL[0]   |= TIMER_A_CCTLN_OUTMOD_4;
    TIMER_A0->CTL |= TIMER_A_CTL_IE;

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
    //P1->DIR &= ~(BIT1);
    P1->DIR |= BIT1;
    P1->IE |= BIT1;
    __NVIC_EnableIRQ(PORT1_IRQn);

}

void PORT1_IRQHandler(void){
    __disable_irq(); //disables interrupts
    uint8_t status = P1->IFG; //Collects flags in P1
    // if(status == BIT1){
    TIMER_A0->R = 0; //if flag then reset timer
    // }
    P1->IFG = 0; //Lowers interrupt flag
    __enable_irq(); // enables interrupts again
}

