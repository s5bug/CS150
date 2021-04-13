/*
 * Program Name: softwaresales
 * Programmer Name: Aly Cerruti
 * Description: Calculates the cost of a purchase, with quantity discounts.
 * Date: 2021-03-08 */

#include <iomanip>
#include <iostream>
#include <string>

int main(int argc, char* argv[]) {
    std::string unitsPurchasedStr;
    std::int32_t unitsPurchased;
    while(true) {
        std::cout << "How many units were purchased? " << std::flush;
        std::getline(std::cin, unitsPurchasedStr);
        try {
            // std::stoi, at least on MSVC 2019, accepts "1993jooj" as 1993.
            // Dunno how to make it not do that. :/
            unitsPurchased = std::stoi(unitsPurchasedStr);
            if(unitsPurchased < 0) {
                std::cout << unitsPurchased << " is negative. " <<
                    "Please input a nonnegative amount of units." << std::endl;
            } else break;
        } catch(std::invalid_argument& e) {
            std::cout << "\"" << unitsPurchasedStr << "\" is not a number." << std::endl;
        } catch(std::out_of_range& e) {
            std::cout << unitsPurchasedStr << " is too many units to buy at once. " <<
                "What do you need more than 2 billion units for, anyways?" << std::endl;
        }
    }
    
    std::double_t priceMultiplier;
    if(unitsPurchased >= 100) {
        priceMultiplier = 0.50;
    } else if(unitsPurchased >= 50) {
        priceMultiplier = 0.60;
    } else if(unitsPurchased >= 20) {
        priceMultiplier = 0.70;
    } else if(unitsPurchased >= 10) {
        priceMultiplier = 0.80;
    } else {
        priceMultiplier = 1.00;
    }

    std::double_t priceBeforeDiscount = unitsPurchased * 99.0;
    std::double_t price = priceBeforeDiscount * priceMultiplier;

    std::cout << "Total price: $" <<
        std::fixed << std::setprecision(2) << price << std::endl;
}
