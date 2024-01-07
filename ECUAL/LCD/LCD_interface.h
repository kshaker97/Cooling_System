#ifndef LCD_INTERFACE_H_INCLUDED
#define LCD_INTERFACE_H_INCLUDED

#include "../../MCAL/DIO/DIO_interface.h"
#include "../../MCAL/TIMER0/TIMER0_interface.h"

#include "LCD_config.h"
#include "LCD_private.h"

void LCD_voidInit(uint8_t Copy_u8LcdPort);
void LCD_voidSendCommand(uint8_t Copy_u8LcdPort, uint8_t Copy_u8LcdCommand);
void LCD_voidSendData(uint8_t Copy_u8LcdPort, uint8_t Copy_LcdData);
void LCD_voidSendString(uint8_t Copy_u8LcdPort, uint8_t Copy_u8LcdLine, uint8_t Copy_u8LcdData[]);
void LCD_voidSendNumber(uint8_t Copy_u8LcdPort, uint16_t Copy_u8LcdNumber);



#endif // LCD_INTERFACE_H_INCLUDED
