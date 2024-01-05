#ifndef BUZZER_INTERFACE_H_INCLUDED
#define BUZZER_INTERFACE_H_INCLUDED

#include "../../MCAL/DIO/DIO_interface.h"
#include "BUZZER_config.h"
#include "BUZZER_private.h"

void BUZZER_voidBuzzerInit(uint8_t Copy_BuzzerPort, uint8_t Copy_BuzzerPin);
void BUZZER_voidBuzzerOn(uint8_t Copy_BuzzerPort, uint8_t Copy_BuzzerPin);
void BUZZER_voidBuzzerOff(uint8_t Copy_BuzzerPort, uint8_t Copy_BuzzerPin);

#endif // BUZZER_INTERFACE_H_INCLUDED
