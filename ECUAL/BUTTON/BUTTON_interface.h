#ifndef BUTTON_INTERFACE_H_INCLUDED
#define BUTTON_INTERFACE_H_INCLUDED

#include "../../MCAL/DIO/DIO_interface.h"
#include "BUTTON_config.h"
#include "BUTTON_private.h"

void BUTTON_voidButtonInit(uint8_t Copy_u8ButtonPort, uint8_t Copy_u8ButtonPin, uint8_t Copy_u8PulledUp);
uint8_t BUTTON_u8GetButtonState(uint8_t Copy_u8ButtonPort, uint8_t Copy_u8ButtonPin);

#endif // BUTTON_INTERFACE_H_INCLUDED
