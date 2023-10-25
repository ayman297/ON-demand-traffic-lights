/*
 * button.c
 *
 * Created: 1/5/2023 7:04:58 PM
 *  Author: ayman
 */ 
#include "button.h"


u8 ButtonInit( u8 buttonPort , u8 buttonPin )
{
	button_state = ok ;
	DIO_init(buttonPort , buttonPin , input);
	return 	button_state ;

}

u8 ButtonRread( u8 buttonPort , u8 buttonPin , u8 * button_st )
{
	button_state = ok ;
	DIO_read(buttonPort,buttonPin, button_st);
	return 	button_state ;
}