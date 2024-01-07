#include "APP_interface.h"

extern uint8_t SEVENSEGMENT_DATA[];

volatile uint16_t Temperature;
volatile uint8_t DutyCycle;

void APP_voidInit(void){

    ADC_voidChannelInit(0);

    LED_voidInit(LED_PORT, LED_0);
    BUZZER_voidInit(BUZZER_PORT, BUZZER_0);
    LCD_voidInit(LCD_PORT);

    INTERRUPT_voidGlobalInterruptEnable();
    TIMER0_voidInterruptEnable();
    TIMER0_voidInit();

    SEVENSEGMENT_voidInit(SEVENSEGMENT_CONTROL_PORT, SEVENSEGMENT_DATA_PORT, SEVENSEGMENT_EN0);
    SEVENSEGMENT_voidInit(SEVENSEGMENT_CONTROL_PORT, SEVENSEGMENT_DATA_PORT, SEVENSEGMENT_EN1);

    DCMOTOR_voidDcInit(DCMOTOR_PORT, DCMOTOR_0);

}

void APP_voidStart(void){

        SEVENSEGMENT_voidTurnOn(SEVENSEGMENT_CONTROL_PORT, SEVENSEGMENT_EN0);
        SEVENSEGMENT_voidTurnOff(SEVENSEGMENT_CONTROL_PORT, SEVENSEGMENT_EN1);
        SEVENSEGMENT_voidDisplay(SEVENSEGMENT_DATA_PORT, SEVENSEGMENT_DATA[(Temperature/10)/10]);
        TIMER0_voidDelayMilliSeconds(4);
        SEVENSEGMENT_voidTurnOff(SEVENSEGMENT_CONTROL_PORT, SEVENSEGMENT_EN0);
        SEVENSEGMENT_voidTurnOn(SEVENSEGMENT_CONTROL_PORT, SEVENSEGMENT_EN1);
        SEVENSEGMENT_voidDisplay(SEVENSEGMENT_DATA_PORT, SEVENSEGMENT_DATA[(Temperature/10)%10]);
        TIMER0_voidDelayMilliSeconds(4);

    if(((Temperature/10) > 35)){

        LED_voidTurnOn(LED_PORT, LED_0);
        BUZZER_voidSoundOn(BUZZER_PORT, BUZZER_0);
        if(((Temperature/10) > 50)){
            DCMOTOR_voidSetDutyCycle(DCMOTOR_PORT, DCMOTOR_0, 100);

        }
        else{
            DCMOTOR_voidSetDutyCycle(DCMOTOR_PORT, DCMOTOR_0, (Temperature/10) * 2);
        }

    }
    else{
        LED_voidTurnOff(LED_PORT, LED_0);
        BUZZER_voidSoundOff(BUZZER_PORT, BUZZER_0);
        DutyCycle = 0;
        DCMOTOR_voidSetDutyCycle(DCMOTOR_PORT, DCMOTOR_0, 0);
    }
}

ISR(TIMER0_OVF_VECT){
    static uint16_t Timer_Counter = 0;
    if(Timer_Counter == 200){
        LCD_voidSendCommand(LCD_PORT, 0x01);
        LCD_voidSendString(LCD_PORT, FIRSTLINE, (uint8_t*)"Temperature: ");
        LCD_voidSendNumber(LCD_PORT, Temperature/10);
        LCD_voidSendString(LCD_PORT, SECONDLINE, (uint8_t*)"Duty Cycle: ");
        LCD_voidSendNumber(LCD_PORT, DutyCycle);
        Timer_Counter = 0;
    }

        Temperature = ADC_u16ChannelRead(0);
        DutyCycle = DCMOTOR_u8GetDutyCycle(DCMOTOR_PORT, DCMOTOR_0);
    Timer_Counter++;
}


