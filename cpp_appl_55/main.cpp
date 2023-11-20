#include "Boiler.h"

int main() {
    
    Boiler boiler_example = { "ExampleBrand", "White", 1500, 30, 60 };

    
    boiler_example.display_info();
    boiler_example.heat_water();

    return 0;
}
