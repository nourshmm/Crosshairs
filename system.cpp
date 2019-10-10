#include "system.hpp"
#include <fstream>

using namespace std;

System::System()
{
}

System::~System()
{
}

double System::get_core_temperature() const
{
    ifstream f(CPU_TEMPERATURE);

    if(!f)
        return 0.0;

    long temp = 0;
    f >> temp;

    f.close();

    return static_cast<double>(temp) / 1000.0;
}

void System::alarm_temperature()
{
    double tmpr;
    tmpr = (double) get_core_temperature();
    if (tmpr > 40.0)
    {
        std::cout << "alarm" << std::endl;
    }
    
}

std::string System::get_software_version()
{
    return VERSION;
}


/*
std::string System::get_current_date_time(char * option) const
{
    std::string option_1 = "date";
    std::string option_2 = "time";

    time_t now = time(0);
    struct tm t_struct;
    char buffer[80];
    t_struct = *localtime(&now);

    if(option_1.compare("date"))
    {
        strftime(buffer, sizeof(buffer), "%Y-%m-%d", &t_struct);
    } else if (option_2.compare("time"))
    {
        strftime(buffer, sizeof(buffer), "%X", &t_struct);
    }
    
    return buffer;  
}
*/

std::string get_software_version()
{
    
}