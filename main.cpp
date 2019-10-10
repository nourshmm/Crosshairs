#include <iostream>
#include "system.hpp"

using namespace std;

int main(int argc, char *argv[])
{
    System system;
    cout << "temperature : " << system.get_core_temperature() << " °C" << endl;
    system.alarm_temperature();
    //cout << system.get_current_date_time() << endl;
    cout << system.get_software_version() << endl;
    cout << "End" << endl;
    return 0;
}
