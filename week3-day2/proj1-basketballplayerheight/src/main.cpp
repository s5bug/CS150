/*
 * Program Name: basketballplayerheight
 * Programmer Name: Aly Cerruti
 * Description: A C++ program that computes a human readable height from a
 *              total number of inches.
 * Date: 2021-02-15 */

#include <iostream>

const std::int32_t inPerFt = 12;

int main(int argc, char* argv[]) {
    std::int32_t sizeIn = 73;

    std::div_t feetAndInches = std::div(sizeIn, inPerFt);

    std::int32_t numFeet = feetAndInches.quot;
    std::int32_t remInches = feetAndInches.rem;

    std::cout << 73 << " inch(es) = " <<
        numFeet << "'" << remInches << "\"" << std::endl;
}
