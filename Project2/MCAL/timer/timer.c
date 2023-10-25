/*
 * timer.c
 *
 * Created: 12/29/2022 11:02:34 PM
 *  Author: ayman
 */ 

#include "../timer/timer.h"


 
 u8 timer_5Sec (void)
 {
	 timer_state = ok ;
	 /*for normal mode */
	 TCCR0 = CLR_BIT(TCCR0,TCCR0_WGM00);
	 TCCR0 = CLR_BIT(TCCR0,TCCR0_WGM01);
	 TCNT0 = periodic_5_Sec;
	 
       /*for 64 prescaler */
	 TCCR0=SET_BIT(TCCR0,TCCR0_CS00);
	 TCCR0=SET_BIT(TCCR0,TCCR0_CS01);
	 TCCR0=CLR_BIT(TCCR0,TCCR0_CS02);
     u32 counter = 0 ;
	 while (counter!=no_of_over_flow_for_5_Sec)
	 {
		 while((TIFR=GET_BIT(TIFR,TOV0))==0);
		 TIFR = SET_BIT(TIFR,TOV0);
		 counter++;
		 if (reset==1)
		 {
			 break;
		 }
	 }
	 TCNT0 = periodic_5_Sec;
	 counter = 0;
	 return timer_state ;
	 
 }
 
 u8 timer_500mSec (void)
 {
	 timer_state = ok ;
	 /*for normal mode */
	 TCCR0 = CLR_BIT(TCCR0,TCCR0_WGM00);
	 TCCR0 = CLR_BIT(TCCR0,TCCR0_WGM01);
	 TCNT0 = periodic_500m_Sec;
	 
	 /*for 8 prescaler */
	 TCCR0=CLR_BIT(TCCR0,TCCR0_CS00);
	 TCCR0=SET_BIT(TCCR0,TCCR0_CS01);
	 TCCR0=CLR_BIT(TCCR0,TCCR0_CS02);
	 u32 counter = 0 ;
	 while (counter!=no_of_over_flow_for_500m_Sec)
	 {
		 while((TIFR=GET_BIT(TIFR,TOV0))==0);
		 TIFR = SET_BIT(TIFR,TOV0);
		 counter++;
		 if (reset==1)
		 {
			 break;
		 }
	 }
	 TCNT0 = periodic_500m_Sec;
	 counter = 0;
	 return timer_state ;
	 
 }
 u8 timer_250mSec (void)
 {
	 timer_state = ok ;
	 /*for normal mode */
	 TCCR2 = CLR_BIT(TCCR2,TCCR2_WGM20);
	 TCCR2 = CLR_BIT(TCCR2,TCCR2_WGM21);
	 TCNT2 = periodic_250m_Sec;
	 
	 /*for 8 prescaler */
	 TCCR2=CLR_BIT(TCCR2,TCCR2_CS22);
	 TCCR2=SET_BIT(TCCR2,TCCR2_CS21);
	 TCCR2=CLR_BIT(TCCR2,TCCR2_CS20);
	 u32 counter = 0 ;
	 while (counter!=no_of_over_flow_for_250m_Sec)
	 {
		 while((TIFR=GET_BIT(TIFR,TOV2))==0);
		 TIFR = SET_BIT(TIFR,TOV2);
		 counter++;
	 }
	 TCNT2 = periodic_250m_Sec;
	 counter = 0;
	 return timer_state ; 
 }
