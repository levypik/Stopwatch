
#include <stdio.h>		// Used for printf()
#include <stdlib.h>		// Used for rand()
#include "xparameters.h"	// Contains hardware addresses and bit masks
#include "xil_cache.h"		// Cache Drivers
#include "xintc.h"		// Interrupt Drivers
#include "xtmrctr.h"		// Timer Drivers
#include "xtmrctr_l.h" 		// Low-level timer drivers
#include "xil_printf.h" 	// Used for xil_printf()
#include "timer.h" 	// Provides a source of bus contention
#include "xgpio.h" 		// LED driver, used for General purpose I/i
#include "sevenSeg_new.h"

int main()
{
	Xil_ICacheInvalidate();
	Xil_ICacheEnable();
	Xil_DCacheInvalidate();
	Xil_DCacheEnable();

	timer_method();

	while(1){
//		sevenseg_draw_digit (0, 0);
//		sevenseg_draw_digit (1, count%10);
//		sevenseg_draw_digit (2, (count%100)/10);
//		sevenseg_draw_digit (3, (count%1000)/100);
//		sevenseg_draw_digit (4, (count%10000)/1000);
//		sevenseg_draw_digit (5, (count%100000)/10000);
//		sevenseg_draw_digit (6, (count%1000000)/100000);
//		sevenseg_draw_digit (7, (count%10000000)/1000000);
		sevenseg_draw_digit (0, count%10);
		sevenseg_draw_digit (1, (count%100)/10);
		sevenseg_draw_digit (2, (count%1000)/100);
		sevenseg_draw_digit (3, (count%10000)/1000);
		sevenseg_draw_digit (4, (count%100000)/10000);
		sevenseg_draw_digit (5, (count%1000000)/100000);
		sevenseg_draw_digit (6, (count%10000000)/1000000);
		sevenseg_draw_digit (7, (count%100000000)/10000000);
	}
}
