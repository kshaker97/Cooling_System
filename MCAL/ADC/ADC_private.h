#ifndef ADC_PRIVATE_H_INCLUDED
#define ADC_PRIVATE_H_INCLUDED

#define MUX0  0
#define MUX1  1
#define MUX2  2
#define MUX3  3
#define ADLAR 5
#define REFS0 6
#define REFS1 7

#define ADPS0 0
#define ADPS1 1
#define ADPS2 2
#define ADIE  3
#define ADIF  4
#define ADFR  5
#define ADSC  6
#define ADEN  7

#define ADMUX  *((volatile uint8_t*) 0x27)
#define ADCSRA *((volatile uint8_t*) 0x26)
#define ADCH   *((volatile uint8_t*) 0x25)
#define ADCL   *((volatile uint8_t*) 0x24)
#define ADC    *((volatile uint16_t*) 0x24)

#endif // ADC_PRIVATE_H_INCLUDED
