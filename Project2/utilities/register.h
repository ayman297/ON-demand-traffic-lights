/*
 * register.h
 * DIO REGISTER
 * Created: 12/27/2022 12:02:51 AM
 *  Author: ayman
 */ 


#ifndef REGISTER_H_
#define REGISTER_H_
           // for DIO register
#define PORTA *((volatile u8*)0x3B)
#define DDRA  *((volatile u8*)0x3A)
#define PINA  *((volatile u8*)0x39)

#define PORTB *((volatile u8*)0x38)
#define DDRB  *((volatile u8*)0x37)
#define PINB  *((volatile u8*)0x36)

#define PORTC *((volatile u8*)0x35)
#define DDRC  *((volatile u8*)0x34)
#define PINC  *((volatile u8*)0x33)

#define PORTD *((volatile u8*)0x32)
#define DDRD  *((volatile u8*)0x31)
#define PIND  *((volatile u8*)0x30)


                   // for timer register
				   
#define TCCR0 *((volatile u8 *)0x53)  /* timer 0 control register*/
#define TCNT0 *((volatile u8 *)0x52)  /* timer 0 control register*/
#define TIFR  *((volatile u8 *)0x58)  /* timer 0 control register*/
#define OCR0  *((volatile u8 *)0x5C)  /* timer 0 control register*/

#define TCCR2 *((volatile u8 *)0x45)  /* timer 2 control register*/
#define TCNT2 *((volatile u8 *)0x44)  /* timer 2 control register*/


                   // for  interrupt register
#define SREG *((volatile u8 *)0x5F)
#define MCUCR *((volatile u8 *)0x55)
#define MCUCSR *((volatile u8 *)0x54)
#define GICR *((volatile u8 *)0x5B)


             
				   
				   
				   





#endif