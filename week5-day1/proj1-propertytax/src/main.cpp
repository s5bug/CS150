/*
 * Program Name: propertytax
 * Programmer Name: Aly Cerruti
 * Description: Calculates property tax.
 * Date: 2021-03-01 */

#include <iostream>
#include <string>

const double ASSESS_FACTOR = .60,        // Factor to figure assessment value
             SENIOR_EXEMPTION = 5000.00; // Senior citizen homeowner exemption

const int NUM_QTRS = 4; // Number of annual (quarterly) payments

int main(int argc, char* argv[]) {
    double actualValue, // Actual value of property
    assessedValue,      // Assessed value of property
    taxRate,            // County tax amount per $100
    propertyTax,        // Amount of tax on property
    quarterlyPmt;       // Amount due per payment

    std::cout << "Actual value of property? " << std::flush;
    std::string actualValueStr;
    std::getline(std::cin, actualValueStr);
    actualValue = std::stod(actualValueStr);

    assessedValue = actualValue * ASSESS_FACTOR - SENIOR_EXEMPTION;

    std::cout << "County tax amount per $100? " << std::flush;
    std::string taxRateStr;
    std::getline(std::cin, taxRateStr);
    taxRate = std::stod(taxRateStr);

    propertyTax = assessedValue * (taxRate / 100.0);
    quarterlyPmt = propertyTax * (1.0 / 4.0);

    std::cout << "Annual tax: " << propertyTax << std::endl;
    std::cout << "Quarterly tax: " << quarterlyPmt << std::endl;
}
