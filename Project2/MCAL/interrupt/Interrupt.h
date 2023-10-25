/*
 * Interrupt.h
 *
 * Created: 12/30/2022 2:41:45 PM
 *  Author: ayman
 */ 


#ifndef INTERRUPT_H_
#define INTERRUPT_H_

#include "../../utilities/STD_TYPES.h"
#include "../../utilities/MATH_BIT.h"
#include "../../utilities/register.h"



#define EXT_INT_0 __vector_1
#define EXT_INT_1 __vector_2
#define EXT_INT_2 __vector_3

typedef enum MCUCR_bit
{
	ISC00 , ISC01 , ISC10 , ISC11 
} MCUCR_bit ;

typedef enum GICR_bit
{
   GICR0 ,GICR1 ,GICR2 ,GICR3 ,GICR4 ,INT2 , INT0 , INT1  
} GICR_bit ;
u8 interrupt_state ;


u8 interrupt0init (void);


#define ISR(INT_VECT) void INT_VECT(void) __attribute__ ((signal,used));\
void INT_VECT(void)




#endif /* INTERRUPT_H_ */