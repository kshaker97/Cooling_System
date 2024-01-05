#ifndef INTERRUPT_PRIVATE_H_INCLUDED
#define INTERRUPT_PRIVATE_H_INCLUDED

#define EXT_INT0_VECT     __vector_1
#define EXT_INT1_VECT     __vector_2
#define TIMER1_COMPA_VECT __vector_6
#define TIMER1_COMPB_VECT __vector_7
#define TIMER1_OVF_VECT   __vector_8
#define TIMER0_OVF_VECT   __vector_9
#define ADC_VECT          __vector_14

#define IVCE  0
#define IVSEL 1
#define INT0  6
#define INT1  7

#define ISC00 0
#define ISC01 1
#define ISC10 2
#define ISC11 3

#define INTF0 6
#define INTF1 7

#define I 7

#define SREG  *((volatile uint8_t*) 0x5F)
#define GICR  *((volatile uint8_t*) 0x5B)
#define GIFR  *((volatile uint8_t*) 0x5A)
#define MCUCR *((volatile uint8_t*) 0x55)

#define ISR(INT_VECT) void INT_VECT(void) __attribute__((signal, used));\
void INT_VECT(void)

#endif // INTERRUPT_PRIVATE_H_INCLUDED
