#include <msp430.h> 

#include "wisp-base.h"

/*
 * main.c
 */

void ledBlinks (uint8_t count, uint16_t duration) {

    while(count--) {
        // Stay on for ~1ms, then wait for specified duration
        BITSET(PLED1OUT,PIN_LED1);
        Timer_LooseDelay(32);
        //BITCLR(PLED1OUT,PIN_LED1);
        Timer_LooseDelay(duration);
    }
    return;
}



int main(void) {
    WISP_init();
	while(FOREVER)
	{
	    ledBlinks(1,20000);
	}
	return 0;
}
