#include "BUTTON_interface.h"

void BUTTON_voidInit(uint8_t Copy_u8ButtonPort, uint8_t Copy_u8ButtonPin, uint8_t Copy_u8PulledUp){
    DIO_voidSetPinDirection(Copy_u8ButtonPort, Copy_u8ButtonPin, INPUT_PIN);
    if(Copy_u8PulledUp == HIGH){
        DIO_u8GetPinValue(Copy_u8ButtonPort, Copy_u8ButtonPin);
    }
}
uint8_t BUTTON_u8GetState(uint8_t Copy_u8ButtonPort, uint8_t Copy_u8ButtonPin){
    return DIO_u8GetPinValue(Copy_u8ButtonPort, Copy_u8ButtonPin);
}
