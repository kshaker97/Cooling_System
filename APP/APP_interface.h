#ifndef APP_INTERFACE_H_INCLUDED
#define APP_INTERFACE_H_INCLUDED

#include "APP_config.h"
#include "APP_private.h"

#include "../MCAL/DIO/DIO_interface.h"
#include "../MCAL/TIMER0/TIMER0_interface.h"
#include "../MCAL/TIMER1/TIMER1_interface.h"
#include "../MCAL/ADC/ADC_interface.h"
#include "../MCAL/INTERRUPT/INTERRUPT_interface.h"

#include "../ECUAL/LED/LED_interface.h"
#include "../ECUAL/BUTTON/BUTTON_interface.h"
#include "../ECUAL/BUZZER/BUZZER_interface.h"
#include "../ECUAL/DCMOTOR/DCMOTOR_interface.h"
#include "../ECUAL/SEVENSEGMENT/SEVENSEGMENT_interface.h"
#include "../ECUAL/LCD/LCD_interface.h"

void APP_voidInit(void);
void APP_voidStart(void);

#endif // APP_INTERFACE_H_INCLUDED
