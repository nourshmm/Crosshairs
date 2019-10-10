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
} e_STATE_MOTOR;

typedef enum eMOTORS
{
    ENGINE_1, // GPIO 13
    ENGINE_2, // GPIO 14
    ENGINE_3, // GPIO 15
    ENGINE_4  // GPIO 16
} ENGINE;


class Engines
{
    
private:
    int speed;
public:
    Engines(/* args */);
    ~Engines();
    
    // Navigation

    void forward(e_STATE_MOTOR state, ENGINE engine_1, ENGINE engine_2, ENGINE engine_3, ENGINE engine_4);
    void backward(e_STATE_MOTOR state, ENGINE engine_1, ENGINE engine_2, ENGINE engine_3, ENGINE engine_4);
    void turnleft(e_STATE_MOTOR state, ENGINE engine_1, ENGINE engine_2, ENGINE engine_3, ENGINE engine_4);
    void turnright(e_STATE_MOTOR state, ENGINE engine_1, ENGINE engine_2, ENGINE engine_3, ENGINE engine_4);

    // Speed control

    void slow_down(int speed);
    void speed_up(int speed);
    void set_speed(int speed);
};


#endif //_ENGINES_H