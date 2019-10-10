#ifndef _SYSTEM_H
#define _SYSTEM_H

#include <iostream>
#include <string.h>
#include <time.h>
#include <stdio.h>

#include "version.hpp"

#define CPU_TEMPERATURE "/sys/class/thermal/thermal_zone0/temp"

class System
{
private:
    char * system_name;
    char * system_version;


public:
    System();

    // Get system date & time
    //std::string get_current_date_time(char * option) const;
    
    virtual ~System();

    //void set_software_version();
    std::string get_software_version();

    double get_core_temperature() const;


    void alarm_temperature();
};

#endif // _SYSTEM_H

