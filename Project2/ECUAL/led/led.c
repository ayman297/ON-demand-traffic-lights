/*
 * led.c
 *
 * Created: 12/27/2022 8:18:57 PM
 *  Author: ayman
 */ 
#include "led.h"

u8 led_int( u8 ledPort , u8 ledPin ) 
{
	led_state = ok ;
	DIO_init(ledPort , ledPin , output);
	return led_state ;
}
u8 led_on( u8 ledPort , u8 ledPin ) 
{
	led_state = ok ;
	DIO_write(ledPort , ledPin , high);
	return led_state ;
}

u8 led_off( u8 ledPort , u8 ledPin ) 
{
	led_state = ok ;
	DIO_write(ledPort , ledPin , low);
	return led_state ;
}
u8 led_toggle( u8 ledPort , u8 ledPin )
{
	led_state = ok ;
	DIO_toggle(ledPort,ledPin);
	return led_state ;
}

