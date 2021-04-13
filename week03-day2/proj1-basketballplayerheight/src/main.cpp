/*
 * Program Name: basketballplayerheight
 * Programmer Name: Aly Cerruti
 * Description: A C++ program that computes a human readable height from a
 *              total number of inches.
 * Date: 2021-02-15 */

#include <iostream>

// there are 12 inches per foot
const std::int32_t inPerFt = 12;

int main(int argc, char* argv[]) {
    // our player is 73 inches
    std::int32_t sizeIn = 73;

    // std::div gives back a Quotient and a Remainder in
    // a single call
    std::div_t feetAndInches = std::div(sizeIn, inPerFt);

    // number of full feet and remaining inches
    std::int32_t numFeet = feetAndInches.quot;
    std::int32_t remInches = feetAndInches.rem;

    std::cout << sizeIn << " inch(es) = " <<
        numFeet << "'" << remInches << "\"" << std::endl;
}
