#ifndef _CONTROL_H
#define _CONTROL_H

// Control power, wich can be turned on and off

class Control
{
    // Defaul constructor
    Control();

    // Destructor
    ~Control();

    //Return level batterie
    double get_power() const;

    // Check if system is on

    bool is_on() const;

    // Turn off the system (same as setting power to 0)

    void power_off();
};

#endif // _CONTROL_H
//jeremy.zyra@hotmail.fr