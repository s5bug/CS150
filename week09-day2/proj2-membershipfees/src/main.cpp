/*
 * Program Name: membershipfees
 * Programmer Name: Aly Cerruti
 * Description: Displays the projected membership fees for a percentage
 *              increase over a time period.
 * Date: 2021-04-07 */

#include <iostream>

int main(int argc, char* argv[]) {
    for(
        int year = 0, price = 2500;
        year <= 6;
        year++, price *= 1.04
    ) {
        if(year == 0) continue;

        std::cout << "At year " << year << ", membership price will be $" <<
            price << "." << std::endl;
    }
}
