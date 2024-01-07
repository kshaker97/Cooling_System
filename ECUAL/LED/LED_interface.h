#ifndef LED_INTERFACE_H_INCLUDED
#define LED_INTERFACE_H_INCLUDED

#include "../../MCAL/DIO/DIO_interface.h"
#include "LED_config.h"
#include "LED_private.h"

void LED_voidInit(uint8_t Copy_u8LedPort, uint8_t Copy_LedPin);
void LED_voidTurnOn(uint8_t Copy_u8LedPort, uint8_t Copy_u8LedPin);
void LED_voidTurnOff(uint8_t Copy_u8LedPort, uint8_t Copy_u8LedPin);
void LED_voidToggle(uint8_t Copy_u8LedPort, uint8_t Copy_u8LedPin);

#endif // LED_INTERFACE_H_INCLUDED
