#include "LCD_interface.h"

void LCD_voidLcdInit(uint8_t Copy_u8LcdPort){
    DIO_voidSetPinDirection(Copy_u8LcdPort, RS, OUTPUT_PIN);
    DIO_voidSetPinDirection(Copy_u8LcdPort, EN, OUTPUT_PIN);
    DIO_voidSetPinDirection(Copy_u8LcdPort, D4, OUTPUT_PIN);
    DIO_voidSetPinDirection(Copy_u8LcdPort, D5, OUTPUT_PIN);
    DIO_voidSetPinDirection(Copy_u8LcdPort, D6, OUTPUT_PIN);
    DIO_voidSetPinDirection(Copy_u8LcdPort, D7, OUTPUT_PIN);
    TIMER0_voidDelayMilliSeconds(4);
    LCD_voidLcdSendCommand(Copy_u8LcdPort, 0x03);
    TIMER0_voidDelayMicroSeconds(39);
    LCD_voidLcdSendCommand(Copy_u8LcdPort, 0x02);
    LCD_voidLcdSendCommand(Copy_u8LcdPort, 0x28);
    TIMER0_voidDelayMicroSeconds(37);
    LCD_voidLcdSendCommand(Copy_u8LcdPort, 0x1);
    LCD_voidLcdSendCommand(Copy_u8LcdPort, 0x6);
    LCD_voidLcdSendCommand(Copy_u8LcdPort, 0xC);
    TIMER0_voidDelayMilliSeconds(1.53);
}
void LCD_voidLcdSendCommand(uint8_t Copy_u8LcdPort, uint8_t Copy_u8LcdCommand){
    DIO_voidSetPinValue(Copy_u8LcdPort, RS, LOW);
    DIO_voidSetPinValue(Copy_u8LcdPort, D4, GETBIT(Copy_u8LcdCommand, 4));
    DIO_voidSetPinValue(Copy_u8LcdPort, D5, GETBIT(Copy_u8LcdCommand, 5));
    DIO_voidSetPinValue(Copy_u8LcdPort, D6, GETBIT(Copy_u8LcdCommand, 6));
    DIO_voidSetPinValue(Copy_u8LcdPort, D7, GETBIT(Copy_u8LcdCommand, 7));
    DIO_voidSetPinValue(Copy_u8LcdPort, EN, HIGH); TIMER0_voidDelayMicroSeconds(1);
    DIO_voidSetPinValue(Copy_u8LcdPort, EN, LOW);  TIMER0_voidDelayMilliSeconds(1);
    DIO_voidSetPinValue(Copy_u8LcdPort, D4, GETBIT(Copy_u8LcdCommand, 0));
    DIO_voidSetPinValue(Copy_u8LcdPort, D5, GETBIT(Copy_u8LcdCommand, 1));
    DIO_voidSetPinValue(Copy_u8LcdPort, D6, GETBIT(Copy_u8LcdCommand, 2));
    DIO_voidSetPinValue(Copy_u8LcdPort, D7, GETBIT(Copy_u8LcdCommand, 3));
    DIO_voidSetPinValue(Copy_u8LcdPort, EN, HIGH); TIMER0_voidDelayMicroSeconds(1);
    DIO_voidSetPinValue(Copy_u8LcdPort, EN, LOW);  TIMER0_voidDelayMilliSeconds(1);
}
void LCD_voidLcdSendData(uint8_t Copy_u8LcdPort, uint8_t Copy_u8LcdData){
    DIO_voidSetPinValue(Copy_u8LcdPort, RS, HIGH);
    DIO_voidSetPinValue(Copy_u8LcdPort, D4, GETBIT(Copy_u8LcdData, 4));
    DIO_voidSetPinValue(Copy_u8LcdPort, D5, GETBIT(Copy_u8LcdData, 5));
    DIO_voidSetPinValue(Copy_u8LcdPort, D6, GETBIT(Copy_u8LcdData, 6));
    DIO_voidSetPinValue(Copy_u8LcdPort, D7, GETBIT(Copy_u8LcdData, 7));
    DIO_voidSetPinValue(Copy_u8LcdPort, EN, HIGH); TIMER0_voidDelayMicroSeconds(1);
    DIO_voidSetPinValue(Copy_u8LcdPort, EN, LOW);  TIMER0_voidDelayMilliSeconds(1);
    DIO_voidSetPinValue(Copy_u8LcdPort, D4, GETBIT(Copy_u8LcdData, 0));
    DIO_voidSetPinValue(Copy_u8LcdPort, D5, GETBIT(Copy_u8LcdData, 1));
    DIO_voidSetPinValue(Copy_u8LcdPort, D6, GETBIT(Copy_u8LcdData, 2));
    DIO_voidSetPinValue(Copy_u8LcdPort, D7, GETBIT(Copy_u8LcdData, 3));
    DIO_voidSetPinValue(Copy_u8LcdPort, EN, HIGH); TIMER0_voidDelayMicroSeconds(1);
    DIO_voidSetPinValue(Copy_u8LcdPort, EN, LOW);  TIMER0_voidDelayMilliSeconds(1);
}
void LCD_voidLcdSendString(uint8_t Copy_u8LcdPort, uint8_t Copy_u8LcdLine, uint8_t u8Copy_LcdData[]){
    uint8_t i = 0;
    if(Copy_u8LcdLine == FIRSTLINE){
        LCD_voidLcdSendCommand(Copy_u8LcdPort, FIRSTLINE);
    }
    else if(Copy_u8LcdLine == SECONDLINE){
        LCD_voidLcdSendCommand(Copy_u8LcdPort, SECONDLINE);
    }
    while(u8Copy_LcdData[i] != '\0'){
        LCD_voidLcdSendData(Copy_u8LcdPort, u8Copy_LcdData[i]);
        i++;
    }
}
void LCD_voidLcdSendNumber(uint8_t Copy_u8LcdPort, uint16_t Copy_u8LcdNumber){

    int8_t array[5], i = 0;
    while(Copy_u8LcdNumber != 0){
        array[i] = (Copy_u8LcdNumber % 10) + '0';
        Copy_u8LcdNumber /= 10;
        i++;
    }
    i--;

    for(;i >= 0; i--){
        LCD_voidLcdSendData(Copy_u8LcdPort, array[i]);
    }
}
