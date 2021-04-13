/*
 * Program Name: stadiumseating
 * Programmer Name: Aly Cerruti
 * Description: A C++ program that computes total revenue generated from an
 *              amount of tickets sold.
 * Date: 2021-02-22 */

#include <cstdint>
#include <iomanip>
#include <iostream>
#include <string>

const std::float_t aSeatCost = 15.00f;
const std::float_t bSeatCost = 12.00f;
const std::float_t cSeatCost = 9.00f;

int main(int argc, char* argv[]) {
    std::cout << "Number of Class A seats sold? " << std::flush;
    std::string aSeatsStr;
    std::getline(std::cin, aSeatsStr);
    std::int32_t aSeats = std::stoi(aSeatsStr);

    std::cout << "Number of Class B seats sold? " << std::flush;
    std::string bSeatsStr;
    std::getline(std::cin, bSeatsStr);
    std::int32_t bSeats = std::stoi(bSeatsStr);

    std::cout << "Number of Class C seats sold? " << std::flush;
    std::string cSeatsStr;
    std::getline(std::cin, cSeatsStr);
    std::int32_t cSeats = std::stoi(cSeatsStr);

    std::float_t aSeatRevenue = aSeatCost * aSeats;
    std::float_t bSeatRevenue = bSeatCost * bSeats;
    std::float_t cSeatRevenue = cSeatCost * cSeats;

    std::float_t totalRevenue = aSeatRevenue + bSeatRevenue + cSeatRevenue;

    std::cout << "Total revenue: $" <<
        std::fixed << std::setprecision(2) << totalRevenue << std::endl;
}
