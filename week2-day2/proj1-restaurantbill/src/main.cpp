/*
 * Program Name: restaurantbill
 * Programmer Name: Aly Cerruti
 * Description: A C++ program that computes tax and tip for a restaurant bill.
 * Date: 2021-02-08 */

#include <iostream>

int main(int argc, char* argv[]) {
    float mealCharge = 44.50F;

    float tax = 6.75F / 100.0F;
    float tip = 15.00F / 100.0F;

    std::cout << "Meal cost: $" << mealCharge << std::endl;

    float taxAdded = mealCharge * tax;
    float taxTotal = mealCharge + taxAdded;

    std::cout << "Amount paid in tax: $" << taxAdded << " (Subtotal: $" << taxTotal << ")" << std::endl;

    float tipAdded = taxTotal * tip;
    float tipTotal = taxTotal + tipAdded;

    std::cout << "Amount paid in tip: $" << tipAdded << std::endl;
    std::cout << "Total: $" << tipTotal << std::endl;
}
