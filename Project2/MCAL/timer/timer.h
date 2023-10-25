/*
 * timer.h
 *
 * Created: 12/28/2022 5:57:04 PM
 *  Author: ayman
 */ 



#ifndef TIMER_H_
#define TIMER_H_

#include "../../utilities/STD_TYPES.h"
#include "../../utilities/MATH_BIT.h"
#include "../../utilities/register.h"


u8 reset   ;                        
 // al value and numbers of overflow for 5 sec delay 
#define periodic_5_Sec 211
#define no_of_over_flow_for_5_Sec 306                                 /*for choise mode use DS to set WG value */
typedef  enum TCCR0_bit
{
	TCCR0_CS00 , TCCR0_CS01, TCCR0_CS02 ,TCCR0_WGM01 , TCCR0_COM00 , TCCR0_COM01 , TCCR0_WGM00, un3
} TCCR0_bit ;
typedef  enum TCCR2_bit
{
	TCCR2_CS20 , TCCR2_CS21, TCCR2_CS22 ,TCCR2_WGM21 , TCCR2_COM20 , TCCR2_COM21 , TCCR2_WGM20, un4
} TCCR2_bit ;

#define TOV0 0
#define TOV2 6
u8 timer_state ; 

//set inti
u8 timer_5Sec (void) ;

//set intial value and numbers of overflow for 500m sec delay
#define periodic_500m_Sec 220
#define no_of_over_flow_for_500m_Sec 245
u8 timer_500mSec (void) ;

//set intial value and numbers of overflow for 250m sec delay
#define periodic_250m_Sec 238
#define no_of_over_flow_for_250m_Sec 123
u8 timer_250mSec (void) ;


#endif /* TIMER_H_ */