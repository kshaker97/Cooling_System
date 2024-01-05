# On_Demand_Traffic_Light_Control_System

## Description
Cooling system useds LM35 sensor to measure room temperature. Temperature is displayed on the first line of 16x2 LCD Display and on two digits seven segments. If the temperature exceeds 35 C. A Led lights on, buzzer sounds on and a Dc motor fan operates to lower room temperature below 35 C. Dc motor duty cycle is displayed on the second line of 16x2 LCD Display.
## System Design
1. APPLICATION LAYER
2. ECUAL
   - LED - BUTTON - BUZZER - DC MOTOR - LCD - SEVEN SEGMENT - LM35
4. MCAL
   - DIO - TIMER0 - TIMER1 - INTERRUPT - ADC
6. UTILITES
   - STD_TYPES - BIT_MATH
## Hardware Design
* LM35 sensor is connected to PINC0 aT PORTC.
* 16x2 Hd44780 LCD is connected to PORTC.
  - (RS : PINC0, EN : PINC2, D4 : PINC3, D5 : PINC4, D6 : PINC5, D7 : PINC7).
* DC MOTOR is connected to PINB1 at PORTB.
* LED is connected to PINB4 at PORTB.
* BUZZER is connected to PINB5 at PORTB.
* SEVEN SEGMENT is connected to PORTD and PORTB.
  - (a : PIND0, b : PIND1, c : PIND2, d : PIND3, e : PIND4, f : PIND5, g : PIND6, . : PIND7, EN0 : PINB2, EN1 : PINB3). 
## Schematic
![11(LCD)](https://github.com/kshaker97/Cooling_System/assets/145481109/89372a8f-ccb1-4e07-a90e-e69f77ced972)
