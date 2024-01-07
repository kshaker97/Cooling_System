#ifndef DCMOTOR_INTERFACE_H_INCLUDED
#define DCMOTOR_INTERFACE_H_INCLUDED

#include "../../MCAL/TIMER1/TIMER1_interface.h"
#include "DCMOTOR_config.h"
#include "DCMOTOR_private.h"

void DCMOTOR_voidDcInit(uint8_t Copy_u8DcMotorPort, uint8_t Copy_u8DcMotorPin);
void DCMOTOR_voidSetDutyCycle(uint8_t Copy_u8DcMotorPort, uint8_t Copy_u8DcMotorPin, uint8_t Copy_u8DutyCycle);
uint8_t DCMOTOR_u8GetDutyCycle(uint8_t Copy_u8DcMotorPort, uint8_t Copy_u8DcMotorPin);

#endif // DCMOTOR_INTERFACE_H_INCLUDED
