#include "inventory.hpp"

void Inventory::setItemNumber(int iItemNumber) {
    itemNumber = iItemNumber;
}

void Inventory::setQuantity(int iQuantity) {
    quantity = iQuantity;
}

void Inventory::setCost(double iCost) {
    cost = iCost;
}

int Inventory::getItemNumber() {
    return itemNumber;
}

int Inventory::getQuantity() {
    return quantity;
}

double Inventory::getCost() {
    return cost;
}

double Inventory::getTotalCost() {
    return quantity * cost;
}
