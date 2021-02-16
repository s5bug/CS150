/*
 * Program Name: landcalculation
 * Programmer Name: Aly Cerruti
 * Description: A C++ program that computes the number of square feet and
 *              square meters in one acre of land.
 * Date: 2021-02-15 */

#include <iostream>

const std::double_t sqFtPerAcre = 43560.0L;
const std::double_t sqFtPerSqM = 10.7639L;

int main(int argc, char* argv[]) {
    std::double_t sizeAcres = 1.0L;

    std::double_t sizeSqFt = sizeAcres * sqFtPerAcre;
    std::double_t sizeSqM = sizeSqFt / sqFtPerSqM;

    std::cout << sizeAcres << " acre(s) = " << sizeSqFt << " sq. ft." << std::endl;
    std::cout << sizeAcres << " acre(s) = " << sizeSqM << " sq. m." << std::endl;
}
