#include "msp.h"
/*
 * pwm.h
 *
 *  Created on: Feb 12, 2021
 *      Author: terencewilliams
 */

#ifndef PWM_H_
#define PWM_H_


void timer_pwmconfig(void);

void pwm_gpio_config(void);

/* Start the Timer */
void star_pwm(void);

/* Stop the Timer */
void stop_pwm(void);


#endif /* PWM_H_ */
/* Configure TIMER_A0 to produce PWM waveform
void config_pwm_timer(void);
/* Start the Timer */
void start_pwm(void);


/* Config P2.4 to output TA0.1 waveform */
void config_pwm_gpio(void);


/* Stop the Timer */
void stop_pwm(void);
