/*
 * Program Name: celsiustofahrenheit
 * Programmer Name: Aly Cerruti
 * Description: A C++ program that converts Celsius to Fahrenheit.
 * Date: 2021-02-22 */

#include <cstdint>
#include <iomanip>
#include <iostream>
#include <string>

int main(int argc, char* argv[]) {
    std::cout << "Input a temperature in Celsius: " << std::flush;
    std::string celsiusStr;
    std::getline(std::cin, celsiusStr);
    std::float_t celsius = std::stof(celsiusStr);

    std::float_t fahrenheit = celsius * (9.0f / 5.0f) + 32.0f;

    std::cout << celsius << "°C = " << fahrenheit << "°F" << std::endl;
}
