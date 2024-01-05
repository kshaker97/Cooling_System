#include "INTERRUPT_interface.h"

void INTERRUPT_voidGlobalInterruptEnable(void){
    //Bit 7 – I: Global Interrupt Enable
    SETBIT(SREG, I);
}
void INTERRUPT_voidExternalInterrupt0Enable(void){
    //SET INT0(PD2) As Input Pin - Enabling Internal PullUp Resistor
    SETBIT(DDRD, PIN2); SETBIT(PORTD, PIN2);
    //INT0: External Interrupt Request 0 Enable
    SETBIT(GICR, INT0);
    //The falling edge of INT0 generates an interrupt request
    CLRBIT(MCUCR, ISC00); SETBIT(MCUCR, ISC01);
}
void INTERRUPT_voidExternalInterrupt1Enable(void){
    //SET INT0(PD3) As Input Pin - Enabling Internal PullUp Resistor
    SETBIT(DDRD, PIN3); SETBIT(PORTD, PIN3);
    //INT0: External Interrupt Request 1 Enable
    SETBIT(GICR, INT1);
    //The falling edge of INT1 generates an interrupt request
    CLRBIT(MCUCR, ISC10); SETBIT(MCUCR, ISC11);
}
