#include "DCMOTOR_interface.h"

void DCMOTOR_voidDcInit(uint8_t Copy_u8DcMotorPort, uint8_t Copy_u8DcMotorPin){
    if((Copy_u8DcMotorPort == DCMOTOR_PORT) && ((Copy_u8DcMotorPin == DCMOTOR_0) || (Copy_u8DcMotorPin == DCMOTOR_1))){
        TIMER1_voidPwmInit(Copy_u8DcMotorPin);
    }
}
void DCMOTOR_voidSetDutyCycle(uint8_t Copy_u8DcMotorPort, uint8_t Copy_u8DcMotorPin, uint8_t Copy_u8DutyCycle){
    if((Copy_u8DcMotorPort == DCMOTOR_PORT) && ((Copy_u8DcMotorPin == DCMOTOR_0) || (Copy_u8DcMotorPin == DCMOTOR_1))){
        TIMER1_voidSetDutyCycle(Copy_u8DcMotorPin, Copy_u8DutyCycle);
    }
}
uint8_t DCMOTOR_u8GetDutyCycle(uint8_t Copy_u8DcMotorPort, uint8_t Copy_u8DcMotorPin){
    if(Copy_u8DcMotorPort == DCMOTOR_PORT){
        switch(Copy_u8DcMotorPin){
            case 1: return (OCR1A/10.23);
            case 2: return (OCR1B/10.23);
            default: return 0;
        }
    }
    else{
        return 0;
    }
}
