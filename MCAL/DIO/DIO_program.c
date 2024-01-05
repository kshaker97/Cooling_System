#include "DIO_interface.h"

void DIO_voidSetPortDirection(uint8_t Copy_u8PortName, uint8_t Copy_u8PortDirction){
    switch(Copy_u8PortName){
        case DIO_PORTB: if(Copy_u8PortDirction <= OUTPUT_PORT){ DDRB = Copy_u8PortDirction; } break;
        case DIO_PORTC: if(Copy_u8PortDirction <= OUTPUT_PORT){ DDRC = Copy_u8PortDirction; } break;
        case DIO_PORTD: if(Copy_u8PortDirction <= OUTPUT_PORT){ DDRD = Copy_u8PortDirction; } break;
        default: /* Error Handling */ break;
    }
}
void DIO_voidSetPortValue(uint8_t Copy_u8PortName, uint8_t Copy_u8PortValue){
    switch(Copy_u8PortName){
        case DIO_PORTB: if(Copy_u8PortValue <= OUTPUT_PORT){ PORTB = Copy_u8PortValue; } break;
        case DIO_PORTC: if(Copy_u8PortValue <= OUTPUT_PORT){ PORTC = Copy_u8PortValue; } break;
        case DIO_PORTD: if(Copy_u8PortValue <= OUTPUT_PORT){ PORTD = Copy_u8PortValue; } break;
        default: /* Error Handling */ break;
    }
}
void DIO_voidTogglePortValue(uint8_t Copy_u8PortName){
    switch(Copy_u8PortName){
        case DIO_PORTB: PORTB ^= OUTPUT_PORT; break;
        case DIO_PORTC: PORTC ^= OUTPUT_PORT; break;
        case DIO_PORTD: PORTD ^= OUTPUT_PORT; break;
        default: /* Error Handling */ break;
    }
}
uint8_t DIO_u8GetPortValue(uint8_t Copy_u8PortName){
    switch(Copy_u8PortName){
        case DIO_PORTB: return PINB;
        case DIO_PORTC: return PINC;
        case DIO_PORTD: return PIND;
        default: /* Error Handling */ return 0;
    }
}
void DIO_voidSetPinDirection(uint8_t Copy_u8PortName, uint8_t Copy_u8PinNumber, uint8_t Copy_u8PinDirction){
    if(Copy_u8PinDirction == OUTPUT_PIN){
        switch(Copy_u8PortName){
            case DIO_PORTB: SETBIT(DDRB, Copy_u8PinNumber); break;
            case DIO_PORTC: SETBIT(DDRC, Copy_u8PinNumber); break;
            case DIO_PORTD: SETBIT(DDRD, Copy_u8PinNumber); break;
            default: /* Error Handling */ break;
        }
    }
    else if(Copy_u8PinDirction == INPUT_PIN){
        switch(Copy_u8PortName){
            case DIO_PORTB: CLRBIT(DDRB, Copy_u8PinNumber); break;
            case DIO_PORTC: CLRBIT(DDRC, Copy_u8PinNumber); break;
            case DIO_PORTD: CLRBIT(DDRD, Copy_u8PinNumber); break;
            default: /* Error Handling */ break;
        }
    }
    else{
        /* Error Handling */
    }
}
void DIO_voidSetPinValue(uint8_t Copy_u8PortName, uint8_t Copy_u8PinNumber, uint8_t Copy_u8PinValue){
    if(Copy_u8PinValue == HIGH){
        switch(Copy_u8PortName){
            case DIO_PORTB: SETBIT(PORTB, Copy_u8PinNumber); break;
            case DIO_PORTC: SETBIT(PORTC, Copy_u8PinNumber); break;
            case DIO_PORTD: SETBIT(PORTD, Copy_u8PinNumber); break;
            default: /* Error Handling */ break;
        }
    }
    else if(Copy_u8PinValue == LOW){
        switch(Copy_u8PortName){
            case DIO_PORTB: CLRBIT(PORTB, Copy_u8PinNumber); break;
            case DIO_PORTC: CLRBIT(PORTC, Copy_u8PinNumber); break;
            case DIO_PORTD: CLRBIT(PORTD, Copy_u8PinNumber); break;
            default: /* Error Handling */ break;
        }
    }
    else{
        /* Error Handling */
    }
}
void DIO_voidTogglePinValue(uint8_t Copy_u8PortName, uint8_t Copy_u8PinNumber){
    switch(Copy_u8PortName){
        case DIO_PORTB: TOGBIT(PORTB, Copy_u8PinNumber); break;
        case DIO_PORTC: TOGBIT(PORTC, Copy_u8PinNumber); break;
        case DIO_PORTD: TOGBIT(PORTD, Copy_u8PinNumber); break;
        default: /* Error Handling */ break;
    }
}
uint8_t DIO_u8GetPinValue(uint8_t Copy_u8PortName, uint8_t Copy_u8PinNumber){
    switch(Copy_u8PortName){
        case DIO_PORTB: return GETBIT(PINB, Copy_u8PinNumber);
        case DIO_PORTC: return GETBIT(PINC, Copy_u8PinNumber);
        case DIO_PORTD: return GETBIT(PIND, Copy_u8PinNumber);
        default: /* Error Handling */ return 0;
    }
}
