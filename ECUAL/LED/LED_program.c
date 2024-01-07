#include "LED_interface.h"

void LED_voidInit(uint8_t Copy_u8LedPort, uint8_t Copy_LedPin){
    DIO_voidSetPinDirection(Copy_u8LedPort, Copy_LedPin, OUTPUT_PIN);
}
void LED_voidTurnOn(uint8_t Copy_u8LedPort, uint8_t Copy_u8LedPin){
    DIO_voidSetPinValue(Copy_u8LedPort, Copy_u8LedPin, HIGH);
}
void LED_voidTurnOff(uint8_t Copy_u8LedPort, uint8_t Copy_u8LedPin){
    DIO_voidSetPinValue(Copy_u8LedPort, Copy_u8LedPin, LOW);
}
void LED_voidToggle(uint8_t Copy_u8LedPort, uint8_t Copy_u8LedPin){
    DIO_voidTogglePinValue(Copy_u8LedPort, Copy_u8LedPin);
}
