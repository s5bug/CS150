/*
 * Program Name: interview
 * Programmer Name: Aly Cerruti
 * Description: A C++ program that interviews the user and prints their
 *              responses.
 * Date: 2021-02-08 */

// Include integer types
#include <cstdint>

// Get cout and cin
#include <iostream>

// Format numbers when printing
#include <iomanip>

// Include string type
#include <string>

int main(int argc, char* argv[]) {
    // Interviewee's name
    std::string name;

    // Interviewee's age
    std::uint32_t age;

    // Interviewee's DOB
    std::int32_t birthYear;
    std::uint8_t birthMonth;
    std::uint8_t birthDay;

    // Interviewee's number of classes
    std::uint8_t numClasses;

    // Interviewee's remaining credit count
    std::float_t creditsToGraduate;

    // Interviewee's favorite movie
    std::string favoriteMovie;

    // Interviewee's favorite food
    std::string favoriteFood;

    // Ask interviewee their name
    std::cout << "What is your name? " << std::flush;
    std::getline(std::cin, name);

    // Ask interviewee for their age
    std::cout << name << ", what is your age? " << std::flush;
    std::string ageStr;
    std::getline(std::cin, ageStr);
    age = std::stoi(ageStr);

    // Ask interviewee for their DOB
    std::cout << name << ", when were you born (YYYY-MM-DD)? " << std::flush;
    std::string dobString;
    std::getline(std::cin, dobString);

    std::string yearString = dobString.substr(0, 4);
    std::string monthString = dobString.substr(5, 7);
    std::string dayString = dobString.substr(8, 10);

    birthYear = std::stoi(yearString);
    birthMonth = std::stoi(monthString);
    birthDay = std::stoi(dayString);

    // Ask interviewee for their number of classes
    std::cout << name << ", how many classes are you taking? " << std::flush;
    std::string numClassesStr;
    std::getline(std::cin, numClassesStr);
    numClasses = std::stoi(numClassesStr);

    // Ask interviewee for their needed amount of credits
    std::cout << name << ", how many credits do you need to graduate? " << std::flush;
    std::string creditsToGraduateStr;
    std::getline(std::cin, creditsToGraduateStr);
    creditsToGraduate = std::stof(creditsToGraduateStr);

    // Ask interviewee for their favorite movie
    std::cout << name << ", what's your favorite movie? " << std::flush;
    std::getline(std::cin, favoriteMovie);

    // Ask interviewee for their favorite food
    std::cout << name << ", what's your favorite food? " << std::flush;
    std::getline(std::cin, favoriteFood);

    // Separate the output
    std::cout << std::endl;
    
    // Print details
    std::cout << "Name: " << name << std::endl;
    std::cout << "Age: " << age << std::endl;

    std::cout << "Date of Birth: ";
    char prev = std::cout.fill('0');
    std::cout << std::setw(4) << birthYear;
    std::cout << "-";
    // Mark as unsigned or else C++ treats this as a char
    std::cout << std::setw(2) << unsigned(birthMonth);
    std::cout << "-";
    std::cout << std::setw(2) << unsigned(birthDay);
    std::cout.fill(prev);
    std::cout << std::endl;

    std::cout << "Class Count: " << unsigned(numClasses) << std::endl;
    std::cout << "Credits to Graduate: " << creditsToGraduate << std::endl;
    std::cout << "Favorite Movie: " << favoriteMovie << std::endl;
    std::cout << "Favorite Food: " << favoriteFood << std::endl;
}
