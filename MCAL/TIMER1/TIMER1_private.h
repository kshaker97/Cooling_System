#ifndef TIMER1_PRIVATE_H_INCLUDED
#define TIMER1_PRIVATE_H_INCLUDED

#define WGM10  0
#define WGM11  1
#define FOC1B  2
#define FOC1A  3
#define COM1B0 4
#define COM1B1 5
#define COM1A0 6
#define COM1A1 7

#define CS10  0
#define CS11  1
#define CS12  2
#define WGM12 3
#define WGM13 4
#define ICES1 6
#define ICNC1 7

#define TOIE1  2
#define OCIE1B 3
#define OCIE1A 4
#define TICIE1 5

#define TOV1  2
#define OCF1B 3
#define OCF1A 4
#define ICF1  5

#define TCCR1A *((volatile uint8_t*) 0x4F)
#define TCCR1B *((volatile uint8_t*) 0x4E)
#define TCNT1H *((volatile uint8_t*) 0x4D)
#define TCNT1L *((volatile uint8_t*) 0x4C)
#define OCR1AH *((volatile uint8_t*) 0x4B)
#define OCR1AL *((volatile uint8_t*) 0x4A)
#define OCR1A  *((volatile uint16_t*) 0x4A)
#define OCR1BH *((volatile uint8_t*) 0x49)
#define OCR1BL *((volatile uint8_t*) 0x48)
#define OCR1B  *((volatile uint16_t*) 0x48)
#define ICR1H  *((volatile uint8_t*) 0x47)
#define ICR1L  *((volatile uint8_t*) 0x46)

#endif // TIMER1_PRIVATE_H_INCLUDED
