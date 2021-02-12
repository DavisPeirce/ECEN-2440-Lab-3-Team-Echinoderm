#include "msp.h"
#include "pwm.h"
#ifndef PWM_H_
#define PWM_H_

/* DEFINES */
/* TICKS = (f_src/(2^ID))*(1/(0.5*f_desired)
* Example: TICKS = ((3MHz)/(2^4)*(1/30Hz)) = 6250 in decimal
*/
#define TICKS ((uint16_t)0x001E)

/**
 * main.c
 */

void main(void){
	WDT_A->CTL = WDT_A_CTL_PW | WDT_A_CTL_HOLD;		// stop watchdog timer

void timer_pwmconfig(void){

}

void pwm_gpio_config(void){

}

void star_pwm(void){

}


void stop_pwm(void){


}

}
