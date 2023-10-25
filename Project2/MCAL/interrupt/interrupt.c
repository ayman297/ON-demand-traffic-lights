/*
 * interrupt.c
 *
 * Created: 1/1/2023 5:51:26 PM
 *  Author: ayman
 */ 
#include "../interrupt/Interrupt.h"
u8 interrupt0init (void)
{
	interrupt_state = ok ;
	// enable global interrupt
	SET_BIT(SREG,7);
	
	//chose interrupt sense by ISC00 , ISC01
	// for rising edge
	SET_BIT(MCUCR,ISC00);SET_BIT(MCUCR,ISC01);
	
	//enable external interrupt
	SET_BIT(GICR,INT0);
	return interrupt_state ;
}
