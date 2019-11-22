#include "engines.hpp"
#include <wiringPi.h>
#include <softPwm.h>

Engines::Engines() : 
    pwm_0(PWM_O),
    pwm_1(PWM_O), 
    state_motor(OFF), 
    engine_1(ENGINE_1), 
    engine_2(ENGINE_2), 
    engine_3(ENGINE_3), 
    engine_4(ENGINE_4)
{
    pinMode(engine_1, OUTPUT);
    pinMode(engine_2, OUTPUT);
    pinMode(engine_3, OUTPUT);
    pinMode(engine_4, OUTPUT); 

    wiringPiSetup();
    softPwmCreate(pwm_0, 0, 100);
    softPwmCreate(pwm_1, 0, 100);
    start_stop(state_motor);
}

void Engines::forward(STATE_MOTOR state, ENGINE eng)
{
   digitalWrite(engine_1, );      
}

void Engines::backward()
{
    digitalWrite(engine_1, )
}

void Engines::turnleft()
{

}

void Engines::turnright()
{

}

void Engines::start_stop(STATE_MOTOR state)
{
    pinMode(engine_1, state);
    pinMode(engine_2, state);
    pinMode(engine_3, state);
    pinMode(engine_4, state);
}

void Engines::set_speed(int speed)
{
    softPwmWrite(pwm_0, )
}