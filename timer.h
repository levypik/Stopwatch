#include "xtmrctr.h"
#include "xintc.h"
#include "xparameters.h"
#include "xtmrctr_l.h"
#include "xintc_l.h"
#include "mb_interface.h"
#include <xbasic_types.h>
#include <xio.h>

#define INTC_DEVICE_ID                 XPAR_INTC_0_DEVICE_ID
#define RESET_VALUE 1000

volatile unsigned int count;

void button_handler();
void timer_handler();
void timer_disable();
void timer_enable();
int timer_method();
