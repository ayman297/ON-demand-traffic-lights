/*
 * dio.h
 *
 * Created: 12/27/2022 12:50:01 AM
 *  Author: ayman
 */ 


#ifndef DIO_H_
#define DIO_H_
#include "../../utilities/STD_TYPES.h"
#include "../../utilities/MATH_BIT.h"
#include "../../utilities/register.h"

typedef  enum PortNumber
{
	PORT_A , PORT_B, PORT_C , PORT_D 
} PortNumber ;

typedef enum PinNumber
{
	PIN_0 , PIN_1 , PIN_2 , PIN_3 , PIN_4 , PIN_5 , PIN_6 , PIN_7
} PinNumber ;

typedef  enum direction
{
	input , output
} direction ;

typedef  enum value
{
	low , high
} value ;


u8 error_state ;



u8 DIO_init(u8 PortNumber , u8 PinNumber , u8 direction);

u8 DIO_write(u8 PortNumber , u8 PinNumber , u8 value);

u8 DIO_toggle(u8 PortNumber , u8 PinNumber );

u8 DIO_read(u8 PortNumber , u8 PinNumber , u8 * value);









#endif 