////////////////////////////////////////////////////////////////////////////////
//
// Name:        gpio.h
// Date:        11/10/2019
// Author:      Hacene YOUNSI    
// email:       hacene.younsi@hotmail.com
//
// version:     1.0.1
// status:      Developement
// license:     GPL
//
// Purpose:     gpio.h is a software to control RPi gpio, this software works only in a 
//              Raspberry Pi model B 3+. 
//
// (C) Copyright 2019 Fennec Corporation, All Rights Reserved
////////////////////////////////////////////////////////////////////////////////

#ifndef _RPiAPI_H
#define _RPiAPI_H

/*
C doesn't have true/false by default.
*/

#ifndef TRUE
    #define TRUE (1==1)
    #define FALSE (!TRUE)
#endif

// GCC warning suppressor

#define UNU __attribute__((unused))

// Mask for the bottom 64 pins which belong to the Raspberry Pi
//  The others are available for other devices

#define PI_GPIO_MASK (0xFFFFFFC0)

// RPi GPIO modes

#define RPi_MODE_PINS            0
#define RPi_MODE_GPIO            1
#define RPi_MODE_UNINITIALISED  -1

// Pins modes
/*
typedef enum eMODE
{
    INPUT,
    OUPUT, 
    PWM_OUPUT,
    GPIO_CLOCK
} eMODE;
*/
#define INPUT       0
#define OUPUT       1
#define PWM_OUPUT   2
#define GPIO_CLOCK  3

#define LOW 0
#define HIGH 1

// Pi model types and versions numbers

#define PI_MODEL_B3_PLUS 13

// Threads

#define PI_THREAD(X) void *X (UNU void *dummy)

#ifdef __cplusplus
extern "C" {
#endif

// Core RPi API functions
extern void RPiAPI_version(int *major, int *minor);
extern int RPiAPI_setup(void);

extern void RPiAPI_pin_mode(int pin, int mode);
//extern void RPiAPI_pin_mode(int pin, eMODE mode);



#ifdef __plusplus
}
#endif

#endif //_RPiAPI_H