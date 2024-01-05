#include "TIMER1_interface.h"

void TIMER1_voidPwmInit(uint8_t Copy_u8PwmChannel){
    //Clear OC1A on Compare Match, set OC1A at BOTTOM, (non-inverting mode)
    CLRBIT(TCCR1A, COM1A0);; SETBIT(TCCR1A, COM1A1);
    //Fast PWM, 10-bit
    SETBIT(TCCR1A, WGM10); SETBIT(TCCR1A, WGM11); SETBIT(TCCR1B, WGM12); CLRBIT(TCCR1B, WGM13);
    //Selecting prescaler 64
    SETBIT(TCCR1B, CS10); SETBIT(TCCR1B, CS11); CLRBIT(TCCR1B, CS12);
    //Set PB1/PB2(OC1A) as output
    switch(Copy_u8PwmChannel){
        case 1: SETBIT(DDRB, PIN1); break;
        default: /* Error Handling */ break;
    }
}
void TIMER1_voidSetDutyCycle(uint8_t Copy_u8PwmChannel, uint8_t Copy_u8DutyCycle){
    switch(Copy_u8PwmChannel){
        case 1: OCR1A = Copy_u8DutyCycle * 10.23; break;
        case 2: OCR1B = Copy_u8DutyCycle * 10.23; break;
        default: /* Error Handling */ break;
    }
}
