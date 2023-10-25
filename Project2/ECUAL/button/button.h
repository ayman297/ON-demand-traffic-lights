/*
 * button.h
 *
 * Created: 1/5/2023 7:01:53 PM
 *  Author: ayman
 */ 


#ifndef BUTTON_H_
#define BUTTON_H_

#include "../../MCAL/dio/dio.h"
#include "../../MCAL/timer/timer.h"
#include "../../MCAL/interrupt/Interrupt.h"
u8 button_state ;

u8 ButtonInit( u8 buttonPort , u8 buttonPin );

u8 ButtonRread( u8 buttonPort , u8 buttonPin , u8 * button_st );



#endif /* BUTTON_H_ */