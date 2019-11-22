////////////////////////////////////////////////////////////////////////////////
//
// Name:        Engines.hpp
// Date:        15/09/2019
// Author:      Hacene YOUNSI    
// email:       hacene.younsi@hotmail.com
//
// version:     1.0.1
// status:      Developement
//
// license:     GPL
//
// Purpose:     This file defines Engines Robot Control, speed engines, navigation
//              politics, GPIO to control the Engines.
//
// (C) Copyright 2019 Fennec Corporation, All Rights Reserved
////////////////////////////////////////////////////////////////////////////////

#ifndef _ENGINES_H
#define _ENGINES_H

typedef enum e_STATE_MOTOR
{
    OFF, 
    ON
} STATE_MOTOR;

typedef enum eMOTORS
{
    ENGINE_1 = 4, // GPIO 23
    ENGINE_2 = 5, // GPIO 24
    ENGINE_3 = 22, // GPIO 5
    ENGINE_4 = 23 // GPIO 6
} ENGINE;

typedef enum eSPEED_CTR
{
    PWM_O = 1,
    PWM_1 = 26
} SPEED_CTR;

class Engines
{
    
private:
    int speed;
    SPEED_CTR pwm_0;
    SPEED_CTR pwm_1;
    STATE_MOTOR state_motor;
    ENGINE engine_1;
    ENGINE engine_2;
    ENGINE engine_3;
    ENGINE engine_4;
    bool isMoving;
    
public:
    Engines(/* args */);
    ~Engines();
    
    // Navigation

    void forward(STATE_MOTOR state, ENGINE engine_1, ENGINE engine_2, ENGINE engine_3, ENGINE engine_4);
    void backward(STATE_MOTOR state, ENGINE engine_1, ENGINE engine_2, ENGINE engine_3, ENGINE engine_4);
    void turnleft(STATE_MOTOR state, ENGINE engine_1, ENGINE engine_2, ENGINE engine_3, ENGINE engine_4);
    void turnright(STATE_MOTOR state, ENGINE engine_1, ENGINE engine_2, ENGINE engine_3, ENGINE engine_4);

    void start_engine(ENGINE engine);
    // Speed control

    void slow_down(int speed);
    void speed_up(int speed);
    void set_speed(int speed);
    void start_stop(STATE_MOTOR state);
};


#endif //_ENGINES_H