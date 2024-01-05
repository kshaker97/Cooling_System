#include "SEVENSEGMENT_interface.h"

uint8_t SEVENSEGMENT_DATA[] = {0x3F, 0x06, 0x5B, 0x4F, 0x66, 0x6D, 0x7D, 0x07, 0x7F, 0x6F};

void SEVENSEGMENT_voidSevenSegmentInit(uint8_t Copy_u8SevenSegmentControlPort, uint8_t Copy_u8SevenDataSegmentPort, uint8_t Copy_u8SevenSegmentPin){
    DIO_voidSetPortDirection(Copy_u8SevenDataSegmentPort, OUTPUT_PORT);
    DIO_voidSetPinDirection(Copy_u8SevenSegmentControlPort, Copy_u8SevenSegmentPin, OUTPUT_PIN);
}
void SEVENSEGMENT_voidSevenSegmentOn(uint8_t Copy_u8SevenSegmentControlPort, uint8_t Copy_u8SevenSegmentPin){
    DIO_voidSetPinValue(Copy_u8SevenSegmentControlPort, Copy_u8SevenSegmentPin, LOW);
}
void SEVENSEGMENT_voidSevenSegmentOff(uint8_t Copy_u8SevenSegmentControlPort, uint8_t Copy_u8SevenSegmentPin){
    DIO_voidSetPinValue(Copy_u8SevenSegmentControlPort, Copy_u8SevenSegmentPin, HIGH);
}
void SEVENSEGMENT_voidSevenSegmentDisplay(uint8_t Copy_u8SevenSegmentDataPort, uint8_t Copy_u8SevenSegmentData){
    DIO_voidSetPortValue(Copy_u8SevenSegmentDataPort, Copy_u8SevenSegmentData);
}
