/*
 * app.h
 *
 * Created: 1/5/2023 4:27:28 PM
 *  Author: ayman
 */ 


#ifndef APP_H_
#define APP_H_

#include "../ECUAL/led/led.h"
#include "../ECUAL/button/button.h"

#define cars_led PORT_A
#define pedestrians_led PORT_B
#define pedestrian_button PORT_D
#define crosswalk_button 2
#define start_state 5
u8 flag ; 
u8 state ;
u8 extern reset;
typedef  enum lights
{
	red , yellow, green 
} lights ;
u8 app_state ;

u8 app_init (void);
u8 set_for_car_stop_for_pedestrians (void);
u8 toggle_for_car_stop_for_pedestrians (void);
u8 stop_for_car_set_for_pedestrians (void);
u8 toggle_for_car_set_for_pedestrians (void);
u8 pedestrians_mode (void);
u8 normal_mode (void);



#endif /* APP_H_ */