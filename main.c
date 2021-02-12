#include "msp.h"


/**
 * main.c
 */
void main(void){
	WDT_A->CTL = WDT_A_CTL_PW | WDT_A_CTL_HOLD;		// stop watchdog timer

#ifndef PWM_H_
#define PWM_H_
/* DEFINES */
/* TICKS = (f_src/(2^ID))*(1/(0.5*f_desired)
* Example: TICKS = ((3MHz)/(2^4)*(1/30Hz)) = 6250 in decimal
*/
#define TICKS ((uint16_t)0x186A)


/* Configure TIMER_A0 to produce PWM waveform
void config_pwm_timer(void);
/* Start the Timer */
void start_pwm(void);


/* Config P2.4 to output TA0.1 waveform */
void config_pwm_gpio(void);


/* Stop the Timer */
void stop_pwm(void);
}
