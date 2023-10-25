/*
 * dio.c
 *
 * Created: 12/27/2022 6:31:15 PM
 *  Author: ayman
 */ 
#include "dio.h"

u8 DIO_init(u8 PortNumber , u8 PinNumber , u8 direction)
{
	error_state = ok ;
	
	 if (direction == input)
	 {
		 switch (PortNumber) 
		 {
			 case PORT_A :DDRA= CLR_BIT (DDRA,PinNumber);break;
			 case PORT_B :DDRB= CLR_BIT (DDRB,PinNumber);break;
			 case PORT_C: DDRC= CLR_BIT (DDRC,PinNumber);break;
			 case PORT_D :DDRD= CLR_BIT (DDRD,PinNumber);break;
			 default:error_state = Not_ok ;break;
		 }
		 
	 }else if (direction==output) 
	 {
		 switch (PortNumber)
		 {
			 case PORT_A :DDRA= SET_BIT (DDRA,PinNumber);break;
			 case PORT_B :DDRB= SET_BIT (DDRB,PinNumber);break;
			 case PORT_C: DDRC= SET_BIT (DDRC,PinNumber);break;
			 case PORT_D :DDRD= SET_BIT (DDRD,PinNumber);break;
			 default:error_state = Not_ok ;break;

		 }
      }else
	  {
		  //error
		  error_state = Not_ok ;

	  } 
	  return error_state ;
}
u8 DIO_write(u8 PortNumber , u8 PinNumber , u8 value)
{
	error_state = ok ;
	if (value == low)
	{
		switch (PortNumber)
		{
			case PORT_A :PORTA= CLR_BIT (PORTA,PinNumber);break;
			case PORT_B :PORTB= CLR_BIT (PORTB,PinNumber);break;
			case PORT_C: PORTC= CLR_BIT (PORTC,PinNumber);break;
			case PORT_D :PORTD= CLR_BIT (PORTD,PinNumber);break;
			default:error_state = Not_ok ;break;
		}
		
	}else if (value==high)
	{
		switch (PortNumber)
		{
			case PORT_A :PORTA= SET_BIT (PORTA,PinNumber);break;
			case PORT_B :PORTB= SET_BIT (PORTB,PinNumber);break;
			case PORT_C: PORTC= SET_BIT (PORTC,PinNumber);break;
			case PORT_D :PORTD= SET_BIT (PORTD,PinNumber);break;
			default:error_state = Not_ok ;break;
			
		}
	}else
	{
		//error
		error_state = Not_ok ;
	}
	return error_state ;
}
u8 DIO_read(u8 PortNumber , u8 PinNumber , u8 * value)
{
	error_state = ok ;
	switch (PortNumber)
	{
		case PORT_A : * value = GET_BIT(PINA,PinNumber);break;
		case PORT_B : * value = GET_BIT(PINB,PinNumber);break;
		case PORT_C : * value = GET_BIT(PINC,PinNumber);break;
		case PORT_D : * value = GET_BIT(PIND,PinNumber);break;
		default:error_state = Not_ok;break;
	}
	return error_state ;
}
u8 DIO_toggle(u8 PortNumber , u8 PinNumber )
{
	error_state = ok ;
	switch (PortNumber)
	{
		case PORT_A :PORTA= TOGGLE_BIT (PORTA,PinNumber);break;
		case PORT_B :PORTB= TOGGLE_BIT (PORTB,PinNumber);break;
		case PORT_C: PORTC= TOGGLE_BIT (PORTC,PinNumber);break;
		case PORT_D :PORTD= TOGGLE_BIT (PORTD,PinNumber);break;
		default:error_state = Not_ok;break;
	}
	return error_state ;
}
