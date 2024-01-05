#ifndef SEVENSEGMENT_INTERFACE_H_INCLUDED
#define SEVENSEGMENT_INTERFACE_H_INCLUDED

#include "../../MCAL/DIO/DIO_interface.h"
#include "../../MCAL/TIMER0/TIMER0_interface.h"

#include "SEVENSEGMENT_config.h"
#include "SEVENSEGMENT_private.h"

void SEVENSEGMENT_voidSevenSegmentInit(uint8_t Copy_u8SevenSegmentControlPort, uint8_t Copy_u8SevenDataSegmentPort, uint8_t Copy_SevenSegmentPin);
void SEVENSEGMENT_voidSevenSegmentOn(uint8_t Copy_u8SevenSegmentControlPort, uint8_t Copy_SevenSegmentPin);
void SEVENSEGMENT_voidSevenSegmentOff(uint8_t Copy_u8SevenSegmentControlPort, uint8_t Copy_SevenSegmentPin);
void SEVENSEGMENT_voidSevenSegmentDisplay(uint8_t Copy_u8SevenDataSegmentPort, uint8_t Copy_SevenSegmentData);


#endif // SEVENSEGMENT_INTERFACE_H_INCLUDED
