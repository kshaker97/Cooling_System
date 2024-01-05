#ifndef INTERRUPT_INTERFACE_H_INCLUDED
#define INTERRUPT_INTERFACE_H_INCLUDED

#include "../../UTILITIES/BIT_MATH.h"
#include "../../UTILITIES/STD_TYPES.h"

#include "../DIO/DIO_private.h"
#include "INTERRUPT_private.h"
#include "INTERRUPT_config.h"

void INTERRUPT_voidGlobalInterruptEnable(void);
void INTERRUPT_voidExternalInterrupt0Enable(void);
void INTERRUPT_voidExternalInterrupt1Enable(void);

#endif // INTERRUPT_INTERFACE_H_INCLUDED
