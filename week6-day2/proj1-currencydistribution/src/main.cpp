/*
 * Program Name: currencydistribution
 * Programmer Name: Aly Cerruti
 * Description: Calculates the distribution of notes based on an input total.
 * Date: 2021-03-08 */

#include <iomanip>
#include <iostream>
#include <map>
#include <set>
#include <string>

const std::set<std::uint64_t, std::greater<std::uint64_t>> notes {
    500,
    100,
    50,
    20,
    10,
    5,
    1
};

int main(int argc, char* argv[]) {
    std::string totalCurrencyStr;
    std::int64_t totalCurrency;
    while(true) {
        std::cout << "How much currency do you need to count? " << std::flush;
        std::getline(std::cin, totalCurrencyStr);
        try {
            // std::stoi, at least on MSVC 2019, accepts "1993jooj" as 1993.
            // Dunno how to make it not do that. :/
            totalCurrency = std::stoi(totalCurrencyStr);
            if(totalCurrency < 0) {
                std::cout << totalCurrency << " is negative. " <<
                    "Please input a nonnegative amount of currency." << std::endl;
            } else break;
        } catch(std::invalid_argument& e) {
            std::cout << "\"" << totalCurrencyStr << "\" is not a number." << std::endl;
        } catch(std::out_of_range& e) {
            std::cout << totalCurrencyStr << " is too much money for any one person. " <<
                "What are you even going to buy with 9 quintillion dollars?" << std::endl;
        }
    }

    std::uint64_t totalCurrencyU = static_cast<std::uint64_t>(totalCurrency);

    // Currency distribution is just a modified "Double Dabble" division problem!
    // We can create a map that stores our "places": instead of powers of two, we have currency amounts.
    // Then, totalCurrencyU holds our repeated remainder.
    std::map<std::uint64_t, std::uint64_t, std::greater<std::uint64_t>> currencyAmounts;
    for(std::set<std::uint64_t, std::greater<std::uint64_t>>::const_iterator it = notes.cbegin(); it != notes.cend(); ++it) {
        std::lldiv_t divisionResult = std::lldiv(totalCurrencyU, *it);
        currencyAmounts[*it] = divisionResult.quot;
        totalCurrencyU = divisionResult.rem;
    }

    // Not allowed to use auto in this class :P
    for(std::map<std::uint64_t, std::uint64_t, std::greater<std::uint64_t>>::const_iterator it = currencyAmounts.cbegin(); it != currencyAmounts.cend(); ++it) {
        std::cout << "$" << it->first << ": " << it->second << std::endl;
    }
}
