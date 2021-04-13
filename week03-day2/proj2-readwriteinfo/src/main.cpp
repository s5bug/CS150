/*
 * Program Name: readwriteinfo
 * Programmer Name: Aly Cerruti
 * Description: A C++ program that reads and displays employee information that
 *              gets pulled from a file.
 * Date: 2021-02-15 */

#include <fstream>
#include <functional>
#include <iostream>
#include <string>

int main(int argc, char* argv[]) {
    std::cout << "Path to employee data? " << std::flush;

    std::string filePath;
    std::getline(std::cin, filePath);

    std::ifstream fileStream(filePath);

    std::uint64_t employeeId;
    std::string employeeFn;
    std::string employeeLn;
    std::uint64_t employeeHoursWorked;
    std::double_t employeePayRate;

    fileStream >> employeeId;
    fileStream >> employeeFn;
    fileStream >> employeeLn;
    fileStream >> employeeHoursWorked;
    fileStream >> employeePayRate;

    std::double_t employeeTotalPay = employeeHoursWorked * employeePayRate;

    std::cout << "Path to output file? " << std::flush;
    
    std::string outputPath;
    std::getline(std::cin, outputPath);

    // C++ lacks a `std::tee` that will write to a file and stdout at the same time,
    // so I'll just make a closure that writes my data to an arbitrary ostream.
    // We haven't covered references in class yet, and I have no clue how they work,
    // but adding &s here made this compile, so if it ain't broke don't fix it.
    std::function<void (std::ostream&)> displayData = [&](std::ostream& output) {
        output << "Employee's ID: " << employeeId << std::endl;
        output << "Employee's First Name: " << employeeFn << std::endl;
        output << "Employee's Last Name: " << employeeLn << std::endl;
        output << "Employee's Hours Worked: " << employeeHoursWorked << std::endl;
        output << "Employee's Pay Rate: " << employeePayRate << std::endl;
        output << "Employee's Total Pay: " << employeeTotalPay << std::endl;
    };

    std::ofstream outputStream(outputPath);

    displayData(outputStream);
    displayData(std::cout);
}
