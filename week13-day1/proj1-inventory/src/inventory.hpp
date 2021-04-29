#ifndef _INVENTORY_HPP_
#define _INVENTORY_HPP_

class Inventory {
    int itemNumber;
    int quantity;
    double cost;

    public:
    Inventory() : itemNumber(0), quantity(0), cost(0.0) {}
    Inventory(int iItemNumber, int iQuantity, double iCost) : itemNumber(iItemNumber), quantity(iQuantity), cost(iCost) {}

    void setItemNumber(int iItemNumber);
    void setQuantity(int iQuantity);
    void setCost(double iCost);

    int getItemNumber();
    int getQuantity();
    double getCost();

    double getTotalCost();
};

#endif
