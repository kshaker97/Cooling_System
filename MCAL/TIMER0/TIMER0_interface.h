#ifndef TIMER0_INTERFACE_H_INCLUDED
#define TIMER0_INTERFACE_H_INCLUDED

#include "../../UTILITIES/BIT_MATH.h"
#include "../../UTILITIES/STD_TYPES.h"

#include "TIMER0_private.h"
#include "TIMER0_config.h"

void TIMER0_voidTimerInit(void);
void TIMER0_voidTimerInterruptEnable(void);
void TIMER0_voidDelayMilliSeconds(float64_t Copy_f64Delay_ms);
void TIMER0_voidDelayMicroSeconds(float64_t Copy_f64Delay_us);

#endif // TIMER0_INTERFACE_H_INCLUDED
