/*
 * main.c
 *
 *  Created on: Dec 2, 2022
 *      Author: nadin
 */
#include "STD_Types.h"
#include "BIT_Math.h"
#include <util/delay.h>

#include "DIO.h"

int main(void)
{
//	uint8 Local_u8Counter = 0;
	DIO_voidInit();
	while(1)
	{
			  DIO_enuWritePin(DIO_PIN_NUM_0, DIO_HIGH);
			  DIO_enuWritePin(DIO_PIN_NUM_7, DIO_HIGH);
		      _delay_ms(1000);
		      DIO_enuWritePin(DIO_PIN_NUM_1, DIO_HIGH);
		      DIO_enuWritePin(DIO_PIN_NUM_6, DIO_HIGH);
		      _delay_ms(1000);
		      DIO_enuWritePin(DIO_PIN_NUM_2, DIO_HIGH);
		      DIO_enuWritePin(DIO_PIN_NUM_5, DIO_HIGH);
		      _delay_ms(1000);
		      DIO_enuWritePin(DIO_PIN_NUM_3, DIO_HIGH);
		      DIO_enuWritePin(DIO_PIN_NUM_4, DIO_HIGH);
		      _delay_ms(1000);
		      DIO_enuWritePin(DIO_PIN_NUM_3, DIO_LOW);
		      DIO_enuWritePin(DIO_PIN_NUM_4, DIO_LOW);
		      _delay_ms(1000);
		      DIO_enuWritePin(DIO_PIN_NUM_2, DIO_LOW);
		      DIO_enuWritePin(DIO_PIN_NUM_5, DIO_LOW);
		      _delay_ms(1000);
		      DIO_enuWritePin(DIO_PIN_NUM_1, DIO_LOW);
		      DIO_enuWritePin(DIO_PIN_NUM_6, DIO_LOW);
	}
}
