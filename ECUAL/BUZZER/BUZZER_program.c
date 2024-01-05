#include "BUZZER_interface.h"

void BUZZER_voidBuzzerInit(uint8_t Copy_BuzzerPort, uint8_t Copy_BuzzerPin){
    DIO_voidSetPinDirection(Copy_BuzzerPort, Copy_BuzzerPin, OUTPUT_PIN);
}
void BUZZER_voidBuzzerOn(uint8_t Copy_BuzzerPort, uint8_t Copy_BuzzerPin){
    DIO_voidSetPinValue(Copy_BuzzerPort, Copy_BuzzerPin, HIGH);
}
void BUZZER_voidBuzzerOff(uint8_t Copy_BuzzerPort, uint8_t Copy_BuzzerPin){
    DIO_voidSetPinValue(Copy_BuzzerPort, Copy_BuzzerPin, LOW);
}
