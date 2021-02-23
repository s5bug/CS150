/*
 * Program Name: boxoffice
 * Programmer Name: Aly Cerruti
 * Description: A C++ program that calculates the profit statistics of a movie.
 * Date: 2021-02-22 */

#include <cstdint>
#include <iomanip>
#include <iostream>
#include <string>

const std::float_t adultTicketPrice = 6.00f;
const std::float_t childTicketPrice = 3.00f;
const std::float_t theaterPercentage = 0.20f;

int main(int argc, int* argv[]) {
    std::cout << "Movie name: " << std::flush;
    std::string movieName;
    std::getline(std::cin, movieName);  

    std::cout << "Number of adult tickets sold: " << std::flush;
    std::string numAdultTicketsStr;
    std::getline(std::cin, numAdultTicketsStr);
    std::int32_t numAdultTickets = std::stoi(numAdultTicketsStr);

    std::cout << "Number of child tickets sold: " << std::flush;
    std::string numChildTicketsStr;
    std::getline(std::cin, numChildTicketsStr);
    std::int32_t numChildTickets = std::stoi(numChildTicketsStr);

    std::float_t adultTicketRevenue = adultTicketPrice * numAdultTickets;
    std::float_t childTicketRevenue = childTicketPrice * numChildTickets;
    std::float_t totalRevenue = adultTicketRevenue + childTicketRevenue;

    std::float_t theaterRevenueCut = totalRevenue * theaterPercentage;
    std::float_t distributorLosses = theaterRevenueCut - totalRevenue;

    std::cout << "Movie Name: \"" << movieName << "\"" << std::endl;
    std::cout << "Adult Tickets Sold: " << numAdultTickets << std::endl;
    std::cout << "Child Tickets Sold: " << numChildTickets << std::endl;

    std::cout << "Gross Box Office Profit: $" <<
        std::fixed << std::setprecision(2) << totalRevenue << std::endl;
    std::cout << "Amount Paid to Distributor: $" <<
        std::fixed << std::setprecision(2) << distributorLosses << std::endl;
    std::cout << "Net Box Office Profit: $" <<
        std::fixed << std::setprecision(2) << theaterRevenueCut << std::endl;
}
