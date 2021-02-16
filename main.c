#include "msp.h"
#include "pwm.h"


/**
 * main.c
 */

void main(void)
{
    WDT_A->CTL = WDT_A_CTL_PW | WDT_A_CTL_HOLD;     // stop watchdog timer

stop_pwm();

timer_pwmconfig();

button_config();

pwm_gpio_config();

// button_config();

start_pwm();

while(1)
{
}

}
