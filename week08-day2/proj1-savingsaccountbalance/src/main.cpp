/*
 * Program Name: savingsaccountbalance
 * Programmer Name: Aly Cerruti
 * Description: Calculates the balance of a savings account at various points.
 * Date: 2021-03-29 */

#include <iostream>
#include <string>

int main(int argc, char* argv[]) {
    int startingBalance;
    std::cout << "Starting balance (in $): " << std::flush;
    std::string startingBalanceStr;
    std::getline(std::cin, startingBalanceStr);
    startingBalance = std::stoi(startingBalanceStr);

    double interestRate;
    std::cout << "Annual interest rate (in %): " << std::flush;
    std::string interestRateStr;
    std::getline(std::cin, interestRateStr);
    // Turn the yearly interest rate into a monthly interest rate
    interestRate = std::stod(interestRateStr) / 12.0;

    int balance = startingBalance;
    int totalDeposit = 0;
    int totalWithdrawal = 0;
    int totalInterest = 0;
    for(int month = 0; month < 3; month++) {
        std::cout << "Month " << (month + 1) << ":" << std::endl;
        int amtDeposited;
        do {
            std::cout << "How much has been deposited this month (in $)? " << std::flush;
            std::string amtDepositedStr;
            std::getline(std::cin, amtDepositedStr);
            amtDeposited = std::stoi(amtDepositedStr);
        } while(amtDeposited < 0);
        totalDeposit += amtDeposited;

        int depositedBalace = balance + amtDeposited;

        int amtWithdrawled;
        do {
            std::cout << "How much has been withdrawled this month (in $)? " << std::flush;
            std::string amtWithdrawledStr;
            std::getline(std::cin, amtWithdrawledStr);
            amtWithdrawled = std::stoi(amtWithdrawledStr);
        } while(amtWithdrawled < 0 || amtWithdrawled > depositedBalace);
        totalWithdrawal += amtWithdrawled;

        depositedBalace -= amtWithdrawled;

        int avgBalance = (balance + depositedBalace) / 2;

        int gainedFromInterest = interestRate * avgBalance;
        totalInterest += gainedFromInterest;

        balance = depositedBalace + gainedFromInterest;
        std::cout << std::endl;
    }

    std::cout << "Starting balance: $" << startingBalance << std::endl;
    std::cout << "Total deposit: $" << totalDeposit << std::endl;
    std::cout << "Total withdrawal: $" << totalWithdrawal << std::endl;
    std::cout << "Total interest: $" << totalInterest << std::endl;
    std::cout << "Final balance: $" << balance << std::endl;
}
