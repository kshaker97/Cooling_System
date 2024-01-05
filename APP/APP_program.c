#include "APP_interface.h"

extern uint8_t SEVENSEGMENT_DATA[];

volatile uint16_t Temperature;
volatile uint8_t DutyCycle;

void APP_voidInit(void){

    ADC_voidChannelInit(0);

    LED_voidLedInit(LED_PORT, LED_0);
    BUZZER_voidBuzzerInit(BUZZER_PORT, BUZZER_0);
    LCD_voidLcdInit(LCD_PORT);

    INTERRUPT_voidGlobalInterruptEnable();
    TIMER0_voidTimerInterruptEnable();
    TIMER0_voidTimerInit();

    SEVENSEGMENT_voidSevenSegmentInit(SEVENSEGMENT_CONTROL_PORT, SEVENSEGMENT_DATA_PORT, SEVENSEGMENT_EN0);
    SEVENSEGMENT_voidSevenSegmentInit(SEVENSEGMENT_CONTROL_PORT, SEVENSEGMENT_DATA_PORT, SEVENSEGMENT_EN1);

    DCMOTOR_voidDcMotorInit(DCMOTOR_PORT, DCMOTOR_0);

}

void APP_voidStart(void){

        SEVENSEGMENT_voidSevenSegmentOn(SEVENSEGMENT_CONTROL_PORT, SEVENSEGMENT_EN0);
        SEVENSEGMENT_voidSevenSegmentOff(SEVENSEGMENT_CONTROL_PORT, SEVENSEGMENT_EN1);
        SEVENSEGMENT_voidSevenSegmentDisplay(SEVENSEGMENT_DATA_PORT, SEVENSEGMENT_DATA[(Temperature/10)/10]);
        TIMER0_voidDelayMilliSeconds(4);
        SEVENSEGMENT_voidSevenSegmentOff(SEVENSEGMENT_CONTROL_PORT, SEVENSEGMENT_EN0);
        SEVENSEGMENT_voidSevenSegmentOn(SEVENSEGMENT_CONTROL_PORT, SEVENSEGMENT_EN1);
        SEVENSEGMENT_voidSevenSegmentDisplay(SEVENSEGMENT_DATA_PORT, SEVENSEGMENT_DATA[(Temperature/10)%10]);
        TIMER0_voidDelayMilliSeconds(4);

    if(((Temperature/10) > 35)){

        LED_voidTurnLedOn(LED_PORT, LED_0);
        BUZZER_voidBuzzerOn(BUZZER_PORT, BUZZER_0);
        if(((Temperature/10) > 50)){
            DCMOTOR_voidSetDcMotorDutyCycle(DCMOTOR_PORT, DCMOTOR_0, 100);

        }
        else{
            DCMOTOR_voidSetDcMotorDutyCycle(DCMOTOR_PORT, DCMOTOR_0, (Temperature/10) * 2);
        }

    }
    else{
        LED_voidTurnLedOff(LED_PORT, LED_0);
        BUZZER_voidBuzzerOff(BUZZER_PORT, BUZZER_0);
        DutyCycle = 0;
        DCMOTOR_voidSetDcMotorDutyCycle(DCMOTOR_PORT, DCMOTOR_0, 0);
    }
}

ISR(TIMER0_OVF_VECT){
    static uint16_t Timer_Counter = 0;
    if(Timer_Counter == 200){
        LCD_voidLcdSendCommand(LCD_PORT, 0x01);
        LCD_voidLcdSendString(LCD_PORT, FIRSTLINE, (uint8_t*)"Temperature: ");
        LCD_voidLcdSendNumber(LCD_PORT, Temperature/10);
        LCD_voidLcdSendString(LCD_PORT, SECONDLINE, (uint8_t*)"Duty Cycle: ");
        LCD_voidLcdSendNumber(LCD_PORT, DutyCycle);
        Timer_Counter = 0;
    }

        Temperature = ADC_u16ChannelRead(0);
        DutyCycle = DCMOTOR_u8GetDcMotorDutyCycle(DCMOTOR_PORT, DCMOTOR_0);
    Timer_Counter++;
}


