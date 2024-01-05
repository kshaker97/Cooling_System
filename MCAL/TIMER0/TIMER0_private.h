#ifndef TIMER0_PRIVATE_H_INCLUDED
#define TIMER0_PRIVATE_H_INCLUDED

#define CS00 0
#define CS01 1
#define CS02 2

#define TOIE0 0

#define TOV0 0

#define TCCR0 *((volatile uint8_t*) 0x53)
#define TCNT0 *((volatile uint8_t*) 0x52)
#define TIMSK *((volatile uint8_t*) 0x59)
#define TIFR  *((volatile uint8_t*) 0x58)

#endif // TIMER0_PRIVATE_H_INCLUDED
