/*
 * Program Name: markup
 * Programmer Name: Aly Cerruti
 * Description: Marks up a price.
 * Date: 2021-04-19 */

#include <iomanip>
#include <iostream>
#include <string>

double calculateRetail(double wholesale, double markup) {
    return wholesale * (1.0 + markup);
}

int main(int argc, char* argv[]) {
    std::cout << "Wholesale price (in $)? " << std::flush;
    std::string wholesaleStr;
    std::getline(std::cin, wholesaleStr);
    double wholesale = std::stod(wholesaleStr);

    std::cout << "Markup percentage (in %)? " << std::flush;
    std::string markupStr;
    std::getline(std::cin, markupStr);
    double markup = std::stod(markupStr) / 100.0;

    std::cout << "Retail price: $" << std::fixed << std::setprecision(2) << calculateRetail(wholesale, markup) << std::endl;
}
