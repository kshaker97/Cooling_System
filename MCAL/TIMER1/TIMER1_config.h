#ifndef TIMER1_CONFIG_H_INCLUDED
#define TIMER1_CONFIG_H_INCLUDED

#ifndef F_CPU
#define F_CPU 16000000.0
#endif // F_CPU

#define PRESCALER (float)64
#define TIMER_TICK (PRESCALER)/(F_CPU)
#define MAX_DELAY (TIMER_TICK*256)

#endif // TIMER1_CONFIG_H_INCLUDED
