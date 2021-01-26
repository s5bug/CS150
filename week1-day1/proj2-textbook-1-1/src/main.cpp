/*
 * Program Name: helloworld
 * Programmer Name: Aly Cerruti
 * Description: A basic C++ "Hello World" program that prints a constant string
                to stdout.
 * Date: 2021-01-26 */

#include <iostream>

int main(int argc, char* argv[]) {
    double hours, rate, pay;
    
    // Get the number of hours worked.
    std::cout << "How many hours did you work? " << std::flush;
    std::cin >> hours;
    
    // Get the hourly pay rate.
    std::cout << "How much do you get paid per hour? " << std::flush;
    std::cin >> rate;
    
    // Calculate the pay.
    pay = hours * rate;
    
    // Display the pay.
    std::cout << "You have earned $" << pay << std::endl;
    
    return 0;
}
