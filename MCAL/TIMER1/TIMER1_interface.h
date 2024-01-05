#ifndef TIMER1_INTERFACE_H_INCLUDED
#define TIMER1_INTERFACE_H_INCLUDED

#include "../../UTILITIES/BIT_MATH.h"
#include "../../UTILITIES/STD_TYPES.h"

#include "../DIO/DIO_private.h"
#include "TIMER1_private.h"
#include "TIMER1_config.h"

void TIMER1_voidPwmInit(uint8_t Copy_u8PwmChannel);
void TIMER1_voidSetDutyCycle(uint8_t Copy_u8PwmChannel, uint8_t Copy_u8DutyCycle);

#endif // TIMER1_INTERFACE_H_INCLUDED
