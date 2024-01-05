#ifndef DIO_PRIVATE_H_INCLUDED
#define DIO_PRIVATE_H_INCLUDED

#define INPUT_PIN  0
#define OUTPUT_PIN 1

#define INPUT_PORT  0x00
#define OUTPUT_PORT 0xFF

#define LOW  0
#define HIGH 1

#define DIO_PORTB 'B'
#define DIO_PORTC 'C'
#define DIO_PORTD 'D'

#define PIN0 0
#define PIN1 1
#define PIN2 2
#define PIN3 3
#define PIN4 4
#define PIN5 5
#define PIN6 6
#define PIN7 7

#define PORTB *((volatile uint8_t*) 0x38)
#define DDRB  *((volatile uint8_t*) 0x37)
#define PINB  *((volatile uint8_t*) 0x36)

#define PORTC *((volatile uint8_t*) 0x35)
#define DDRC  *((volatile uint8_t*) 0x34)
#define PINC  *((volatile uint8_t*) 0x33)

#define PORTD *((volatile uint8_t*) 0x32)
#define DDRD  *((volatile uint8_t*) 0x31)
#define PIND  *((volatile uint8_t*) 0x30)

#endif // DIO_PRIVATE_H_INCLUDED
