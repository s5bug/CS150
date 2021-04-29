/*
 * Program Name: inventory
 * Programmer Name: Aly Cerruti
 * Description: Handles an inventory.
 * Date: 2021-04-28 */

#include <functional>
#include <iomanip>
#include <iostream>
#include <string>

#include "inventory.hpp"

template<typename T>
T query(std::string propertyName, std::function<T (std::string)> fromString, std::function<bool (T)> predicate, std::string failureMessage) {
    T result;
    do {
        std::string str;
        std::cout << "Enter item " << propertyName << ": " << std::flush;
        std::getline(std::cin, str);
        result = fromString(str);
        if(!predicate(result))
            std::cout << failureMessage << std::endl;
    } while(!predicate(result));
    return result;
}

int main(int argc, char* argv[]) {
    const std::string nonNegativeFailure = "Please enter a nonnegative number."; 

    const std::function<int (std::string)> intFromString = [](std::string s) { return std::stoi(s); };
    const std::function<bool (int)> nonNegativeInt = [](int i) { return i >= 0; };

    const std::function<double (std::string)> doubleFromString = [](std::string s) { return std::stod(s); };
    const std::function<bool (double)> nonNegativeDouble = [](double d) { return d >= 0.0; };

    int itemNumber = query<int>("number", intFromString, nonNegativeInt, nonNegativeFailure);
    int quantity = query<int>("quantity", intFromString, nonNegativeInt, nonNegativeFailure);
    double cost = query<double>("cost", doubleFromString, nonNegativeDouble, nonNegativeFailure);

    Inventory inv(itemNumber, quantity, cost);

    std::cout << "Total cost of inventory for item " << inv.getItemNumber() <<
        ": $" << std::fixed << std::setprecision(2) << inv.getTotalCost() << std::endl;
}
