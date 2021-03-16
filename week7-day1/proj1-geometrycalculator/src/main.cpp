/*
 * Program Name: geometrycalculator
 * Programmer Name: Aly Cerruti
 * Description: Calculates the area of different 2d shapes.
 * Date: 2021-03-15 */

#include <cmath>
#include <cstdint>
#include <iostream>
#include <string>

#define M_PI (3.14159265358979323846)

const std::string menu =
    "1. Calculate the Area of a Circle\n"
    "2. Calculate the Area of a Rectangle\n"
    "3. Calculate the Area of a Triangle\n"
    "4. Quit\n"
    "\n"
    "Enter you choice (1-4): ";

int main(int argc, char* argv[]) {
    std::string optionStr;
    std::int64_t option;

    do {
        while(true) {
            std::cout << menu << std::flush;
            std::getline(std::cin, optionStr);
            try {
                option = std::stoi(optionStr);
                if(option < 1 || option > 4) {
                    std::cout << option << " is not a valid option." << std::endl;
                } else break;
            } catch(std::invalid_argument& e) {
                std::cout << "\"" << optionStr << "\" is not a valid option." << std::endl;
            } catch(std::out_of_range& e) {
                std::cout << optionStr << " is not a valid option." << std::endl;
            }
        }

        switch(option) {    
            case 1: {
                std::cout << "Radius of the circle? " << std::flush;
                std::string radiusStr;
                std::getline(std::cin, radiusStr);
                std::double_t radius = std::stod(radiusStr);

                std::double_t area = M_PI * radius * radius;

                std::cout << "Area of the circle: " << area << std::endl;
                break;
            }
            case 2: {
                std::cout << "Width of rectangle? " << std::flush;
                std::string widthStr;
                std::getline(std::cin, widthStr);
                std::double_t width = std::stod(widthStr);

                std::cout << "Height of rectangle? " << std::flush;
                std::string heightStr;
                std::getline(std::cin, heightStr);
                std::double_t height = std::stod(heightStr);

                std::double_t area = width * height;

                std::cout << "Area of rectangle: " << area << std::endl;
                break;
            }
            case 3: {
                std::cout << "Base of triangle? " << std::flush;
                std::string baseStr;
                std::getline(std::cin, baseStr);
                std::double_t base = std::stod(baseStr);

                std::cout << "Height of triangle? " << std::flush;
                std::string heightStr;
                std::getline(std::cin, heightStr);
                std::double_t height = std::stod(heightStr);

                std::double_t area = 0.5 * base * height;

                std::cout << "Area of triangle: " << area << std::endl;
                break;
            }
            default: break;
        }
    } while(option != 4);
}
