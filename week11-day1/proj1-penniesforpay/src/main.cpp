/*
 * Program Name: penniesforpay
 * Programmer Name: Aly Cerruti
 * Description: Calculates the salary for someone paid 2^n pennies per day.
 * Date: 2021-04-12 */

#include <cstdint>
#include <iomanip>
#include <iostream>
#include <string>

int main(int argc, char* argv[]) {
    int daysWorked;
    do {
        std::cout << "Number of days worked? " << std::flush;
        std::string daysWorkedStr;
        std::getline(std::cin, daysWorkedStr);
        daysWorked = std::stoi(daysWorkedStr);
        if(daysWorked < 1 || daysWorked > 31)
            std::cout << "Please enter a number between 1 and 31." << std::endl;
    } while (daysWorked < 1 || daysWorked > 31);

    std::cout << "Day\tSalary" << std::endl;

    // I don't feel like dealing with the potential of integer overflow
    // The salary total after 31 days is 2^31 - 1, but my for loop would
    // overflow that into -2^31, and subtracting would underflow back
    // to the target value, both of which are considered undefined
    // behavior in C++. With -fsanitize=undefined in Clang (there's not
    // an equivalent in GCC or MSVC as far as I know) these operations
    // would throw exceptions and the program would not complete.
    //
    // Therefore, this integer is unsigned, making 2^31 a valid value.
    unsigned int pennyCount = 1;
    for(int day = 1; day <= daysWorked; day++, pennyCount *= 2) {
        std::cout << day << "\t$" <<
            std::fixed << std::setprecision(2) << (pennyCount / 100.0) <<
            std::endl;
    }

    // The salary on the nth day is 2^(n - 1)
    // The total salary after n days is 2^n - 1
    pennyCount--;

    std::cout << "Total salary: $" <<
        std::fixed << std::setprecision(2) << (pennyCount / 100.0) <<
        std::endl;

    return EXIT_SUCCESS;
}
