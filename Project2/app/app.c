/*
 * app.c
 *
 * Created: 1/5/2023 8:36:42 PM
 *  Author: ayman
 */ 
#include "app.h"

u8 Red_flag = 0 ;

u8 app_init (void)
{
	app_state = ok ;
	flag = start_state ; 
	led_int(cars_led,red);
	led_int(cars_led,yellow);
	led_int(cars_led,green);
	
	led_int(pedestrians_led,red);
	led_int(pedestrians_led,yellow);
	led_int(pedestrians_led,green);
	
	ButtonInit(pedestrian_button,crosswalk_button);
	interrupt0init();
	return app_state ;
	
}
u8 set_for_car_stop_for_pedestrians (void)
{
	app_state = ok ;
	if (reset==1)
	{
		return Not_ok ;
	}
	led_on(cars_led,green);
	led_on(pedestrians_led,red);
	flag = on ;
	timer_5Sec();
	led_off(cars_led,green);
	led_off(pedestrians_led,red);
	return app_state ;
	
}
u8 toggle_for_car_stop_for_pedestrians (void)
{
	app_state = ok ;
	if (reset==1)
	{
		return Not_ok ;
	}
	led_on(pedestrians_led,red);
	flag = on ;
	for(int i = 0 ; i<10 ; i++)
	{
		led_toggle(cars_led,yellow);
		flag = on ;
		timer_500mSec();
		
	}
		led_off(cars_led,yellow);
		led_off(pedestrians_led,red);
		return app_state ;
	
}
u8 stop_for_car_set_for_pedestrians (void)
{
	app_state = ok ;
	if (reset==1)
	{
		return Not_ok ;
	}
	flag = start_state ;
	led_on(pedestrians_led,green);
	led_on(cars_led,red);
	timer_5Sec();
	
	led_off(pedestrians_led,green);
	led_off(cars_led,red);
	return app_state ;
	
}
u8 toggle_for_car_set_for_pedestrians (void)
{
	app_state = ok ;
	if (reset==1)
	{
		return Not_ok ;
	}
	led_on(pedestrians_led,green);
	flag = off ;
	for(int i = 0 ; i<10 ; i++)
	{
		led_toggle(cars_led,yellow);
		flag = off ;
		timer_500mSec();
		
	}
	led_off(cars_led,yellow);
	led_off(pedestrians_led,green);
	return app_state ;
	
}
u8 pedestrians_mode (void)
{
	app_state = ok ;
	
	led_off(cars_led,red);
	led_off(pedestrians_led,red);
	led_off(cars_led,green);
	led_off(pedestrians_led,green);
	
	for(int i = 0 ; i<10 ; i++)
	{
		led_toggle(cars_led,yellow);
		led_toggle(pedestrians_led,yellow);
		timer_500mSec();
		}
	led_off(cars_led,yellow);
	led_off(pedestrians_led,yellow);
	return app_state ;
}
u8 normal_mode (void)
{
	app_state = ok ;
	set_for_car_stop_for_pedestrians();
	toggle_for_car_stop_for_pedestrians();
	stop_for_car_set_for_pedestrians();
	toggle_for_car_set_for_pedestrians();
	return app_state ;
	
}
ISR(EXT_INT_0)
{ButtonRread(pedestrian_button,crosswalk_button,&state);
	
	timer_250mSec();
	ButtonRread(pedestrian_button,crosswalk_button,&state);
	
	if (state==0)
	{
		if (flag ==start_state)
		{
			//do no thing
		}
		else if(flag ==off)
		{
			//do no thing
		}
		else if (flag ==on)
		{
			pedestrians_mode ();
			stop_for_car_set_for_pedestrians();
			toggle_for_car_set_for_pedestrians();
			reset=1;
			
	    }
		else
		{
			//do no thing
		}
	}
	else
	{
		//do no thing
	}

}
		
		
		
		