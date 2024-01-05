#include "ADC_interface.h"

void ADC_voidChannelInit(uint8_t Copy_u8AdcChannel){
    //Set ADC channel pin as input
    CLRBIT(DDRC, Copy_u8AdcChannel);
    //AVCC with external capacitor at AREF pin
    SETBIT(ADMUX, REFS0); CLRBIT(ADMUX, REFS1);
    //ADC Enable - ADC Free Running Select
    SETBIT(ADCSRA, ADEN); SETBIT(ADCSRA, ADFR);
    //ADC Prescaler Divison Factor 128
    SETBIT(ADCSRA, ADPS0); SETBIT(ADCSRA, ADPS1); SETBIT(ADCSRA, ADPS2);
}
uint16_t ADC_u16ChannelRead(uint8_t Copy_u8AdcChannel){
    //Input Channel Selection
    ADMUX = (ADMUX & 0xF0) | Copy_u8AdcChannel;
    //ADC Start Conversion
    SETBIT(ADCSRA, ADSC);
    //Wait For Conversion To Complete
    while(GETBIT(ADCSRA, ADSC) == HIGH);
    return ADC;
}
