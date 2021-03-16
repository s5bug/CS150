/*
 * Program Name: complexifs
 * Programmer Name: Aly Cerruti
 * Description: Displays a list of relationships between two numbers.
 * Date: 2021-03-15 */

#include <cstdint>
#include <iostream>
#include <string>

int main(int argc, char* argv[]) {
    std::cout << "Give me an integer: " << std::flush;
    std::string firstStr;
    std::getline(std::cin, firstStr);
    std::int32_t first = std::stoi(firstStr);

    std::cout << "Give me another integer: " << std::flush;
    std::string secondStr;
    std::getline(std::cin, secondStr);
    std::int32_t second = std::stoi(secondStr);

    if(first >= second) {
        std::cout << "The first number is not smaller than the second number, ";
        if(first % second == 0) {
            std::cout << "the first number is evenly divisible by the second number, ";
            if(first == second) {
                std::cout << "and they are in fact equal." << std::endl;
            } else {
                std::cout << "but they are not equivalent." << std::endl;
            }
        } else {
            std::cout << "and the first number is not evenly divisible by the second number." << std::endl;
        }
    } else {
        std::cout << "The first number is bigger than the second number." << std::endl;
    }
}
