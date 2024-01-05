#include "TIMER0_interface.h"

void TIMER0_voidTimerInit(void){
    TCCR0 = 0x00;
}
void TIMER0_voidTimerInterruptEnable(void){
    SETBIT(TIMSK, TOIE0);
    SETBIT(TCCR0, CS00); SETBIT(TCCR0, CS01);
}
void TIMER0_voidDelayMilliSeconds(float64_t Copy_f64TimerDelay){
    uint64_t overflows = (Copy_f64TimerDelay/1000.0) / MAX_DELAY;
    SETBIT(TCCR0, CS00); SETBIT(TCCR0, CS01);
    for(uint64_t i = 0; i < overflows; i++){
        while(GETBIT(TIFR, TOV0) == 0);
        SETBIT(TIFR, TOV0);
    }
}
void TIMER0_voidDelayMicroSeconds(float64_t Copy_f64TimerDelay){
    uint64_t overflows = (Copy_f64TimerDelay/1000000) / MAX_DELAY;
    SETBIT(TCCR0, CS00); SETBIT(TCCR0, CS01);
    for(uint64_t i = 0; i < overflows; i++){
        while(GETBIT(TIFR, TOV0) == 0);
        SETBIT(TIFR, TOV0);
    }
}
