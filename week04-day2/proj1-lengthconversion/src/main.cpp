/*
 * Program Name: celsiustofahrenheit
 * Programmer Name: Aly Cerruti
 * Description: A C++ program that converts Feet/Inches to Centimeters.
 * Date: 2021-02-22 */

#include <cstdint>
#include <iostream>
#include <string>

const std::int32_t inPerFt = 12;
const std::float_t cmPerIn = 2.54f;

int main(int argc, char* argv[]) {
    std::cout << "Number of feet: " << std::flush;
    std::string numFtStr;
    std::getline(std::cin, numFtStr);
    std::int32_t numFt = std::stoi(numFtStr);

    std::cout << "Number of inches: " << std::flush;
    std::string numInStr;
    std::getline(std::cin, numInStr);
    std::int32_t numIn = std::stoi(numInStr);

    std::int32_t totalIn = (numFt * inPerFt) + numIn;
    std::float_t totalCm = totalIn * cmPerIn;

    std::cout << totalIn << " in. = " <<
        totalCm << " cm." << std::endl;
}
