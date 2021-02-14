#include "msp.h"
/*
 * pwm.h
 *
 *  Created on: Feb 12, 2021
 *      Author: terencewilliams
 */

#ifndef PWM_H_
#define PWM_H_

/* DEFINES */
/* TICKS = (f_src/(2^ID))*(1/(0.5*f_desired)
* Example: TICKS = ((3MHz)/(2^4)*(1/30Hz)) = 6250 in decimal
*/
#define TICKS ((uint16_t)0x001E)

void timer_pwmconfig(void);

void pwm_gpio_config(void);

/* Start the Timer */
void start_pwm(void);

/* Stop the Timer */
void stop_pwm(void);

void button_config(void);
