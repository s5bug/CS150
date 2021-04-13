/*
 * Program Name: greatestleast
 * Programmer Name: Aly Cerruti
 * Description: Calculates the greatest and least integers of a set.
 * Date: 2021-04-12 */

#include <iostream>
#include <utility>

int main(int argc, char* argv[]) {
    std::cout << "Enter a list of numbers, separated by whitespace." << std::endl;
    std::cout << "Enter a -99 to end." << std::endl;
    int input;
    int min;
    int max;
    do {
        std::cin >> input;
        min = std::min(min, input);
        max = std::max(max, input);
    } while (input != -99);

    std::cout << "Minimum number: " << min << std::endl;
    std::cout << "Maximum number: " << max << std::endl;
}
