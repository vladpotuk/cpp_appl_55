#ifndef BOILER_H
#define BOILER_H

#include <string>

struct Boiler {
    std::string brand;
    std::string color;
    int power;
    int volume;
    int heating_temperature;

    void heat_water();
    void display_info();
};

#endif 
