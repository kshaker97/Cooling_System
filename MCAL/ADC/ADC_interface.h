#ifndef ADC_INTERFACE_H_INCLUDED
#define ADC_INTERFACE_H_INCLUDED

#include "../../UTILITIES/BIT_MATH.h"
#include "../../UTILITIES/STD_TYPES.h"

#include "../DIO/DIO_private.h"
#include "ADC_private.h"
#include "ADC_config.h"

void ADC_voidChannelInit(uint8_t Copy_u8AdcChannel);
uint16_t ADC_u16ChannelRead(uint8_t Copy_u8AdcChannel);

#endif // ADC_INTERFACE_H_INCLUDED
