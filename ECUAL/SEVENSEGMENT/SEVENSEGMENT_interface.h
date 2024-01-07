#ifndef SEVENSEGMENT_INTERFACE_H_INCLUDED
#define SEVENSEGMENT_INTERFACE_H_INCLUDED

#include "../../MCAL/DIO/DIO_interface.h"
#include "../../MCAL/TIMER0/TIMER0_interface.h"

#include "SEVENSEGMENT_config.h"
#include "SEVENSEGMENT_private.h"

void SEVENSEGMENT_voidInit(uint8_t Copy_u8SevenSegmentControlPort, uint8_t Copy_u8SevenDataSegmentPort, uint8_t Copy_SevenSegmentPin);
void SEVENSEGMENT_voidTurnOn(uint8_t Copy_u8SevenSegmentControlPort, uint8_t Copy_SevenSegmentPin);
void SEVENSEGMENT_voidTurnOff(uint8_t Copy_u8SevenSegmentControlPort, uint8_t Copy_SevenSegmentPin);
void SEVENSEGMENT_voidDisplay(uint8_t Copy_u8SevenDataSegmentPort, uint8_t Copy_SevenSegmentData);

#endif // SEVENSEGMENT_INTERFACE_H_INCLUDED
