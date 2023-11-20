#include "Boiler.h"
#include <iostream>

void Boiler::heat_water() {
    std::cout << brand << " boiler is heating water." << std::endl;
}

void Boiler::display_info() {
    std::cout << "Brand: " << brand << std::endl;
    std::cout << "Color: " << color << std::endl;
    std::cout << "Power: " << power << " W" << std::endl;
    std::cout << "Volume: " << volume << " liters" << std::endl;
    std::cout << "Heating Temperature: " << heating_temperature << "°C" << std::endl;
}
