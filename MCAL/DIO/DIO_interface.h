#ifndef DIO_INTERFACE_H_INCLUDED
#define DIO_INTERFACE_H_INCLUDED

#include "../../UTILITIES/BIT_MATH.h"
#include "../../UTILITIES/STD_TYPES.h"

#include "DIO_private.h"
#include "DIO_config.h"

void DIO_voidSetPortDirection(uint8_t Copy_u8PortName, uint8_t Copy_u8PortDirction);
void DIO_voidSetPortValue(uint8_t Copy_u8PortName, uint8_t Copy_u8PortValue);
void DIO_voidTogglePortValue(uint8_t Copy_u8PortName);
uint8_t DIO_u8GetPortValue(uint8_t Copy_u8PortName);

void DIO_voidSetPinDirection(uint8_t Copy_u8PortName, uint8_t Copy_u8PinNumber, uint8_t Copy_u8PinDirction);
void DIO_voidSetPinValue(uint8_t Copy_u8PortName, uint8_t Copy_u8PinNumber, uint8_t Copy_u8PinValue);
void DIO_voidTogglePinValue(uint8_t Copy_u8PortName, uint8_t Copy_u8PinNumber);
uint8_t DIO_u8GetPinValue(uint8_t Copy_u8PortName, uint8_t Copy_u8PinNumber);

#endif // DIO_INTERFACE_H_INCLUDED
