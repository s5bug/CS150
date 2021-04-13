/*
 * Program Name: freezingboiling
 * Programmer Name: Aly Cerruti
 * Description: Displays the status of various liquids given a temperature.
 * Date: 2021-03-15 */

#include <cmath>
#include <cstdint>
#include <iostream>
#include <string>

const std::double_t freezing_ethyl_alcohol = -173.0;
const std::double_t freezing_mercury = -38.0;
const std::double_t freezing_oxygen = -362.0;
const std::double_t freezing_water = 32.0;

const std::double_t boiling_ethyl_alcohol = 172.0;
const std::double_t boiling_mercury = 676.0;
const std::double_t boiling_oxygen = -306.0;
const std::double_t boiling_water = 212.0;

int main(int argc, char* argv[]) {
    std::cout << "Enter a temperature (°F): " << std::flush;
    std::string temperatureStr;
    std::getline(std::cin, temperatureStr);
    std::double_t temperature = std::stod(temperatureStr);

    std::cout << "At this temperature: " << std::endl;

    if(temperature <= freezing_ethyl_alcohol)
        std::cout << "- Ethyl Alcohol freezes" << std::endl;
    if(temperature <= freezing_mercury)
        std::cout << "- Mercury freezes" << std::endl;
    if(temperature <= freezing_oxygen)
        std::cout << "- Oxygen freezes" << std::endl;
    if(temperature <= freezing_water)
        std::cout << "- Water freezes" << std::endl;
    
    if(temperature >= boiling_ethyl_alcohol)
        std::cout << "- Ethyl Alcohol boils" << std::endl;
    if(temperature >= boiling_mercury)
        std::cout << "- Mercury boils" << std::endl;
    if(temperature >= boiling_oxygen)
        std::cout << "- Oxygen boils" << std::endl;
    if(temperature >= boiling_water)
        std::cout << "- Water boils" << std::endl;
}
