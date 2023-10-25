/*
 * led.h
 *
 * Created: 12/27/2022 8:15:57 PM
 *  Author: ayman
 */ 


#ifndef LED_H_
#define LED_H_

#include "../../MCAL/dio/dio.h"
#include "../../MCAL/timer/timer.h"
#include "../../MCAL/interrupt/Interrupt.h"

u8 led_state ; 

u8 led_int( u8 ledPort , u8 ledPin ) ;

u8 led_on( u8 ledPort , u8 ledPin ) ;

u8 led_off( u8 ledPort , u8 ledPin ) ;

u8 led_toggle( u8 ledPort , u8 ledPin ) ;












#endif /* LED_H_ */