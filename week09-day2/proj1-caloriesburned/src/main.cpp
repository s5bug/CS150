/*
 * Program Name: caloriesburned
 * Programmer Name: Aly Cerruti
 * Description: Calculates the number of calories burned spending time on a
 *              treadmill.
 * Date: 2021-04-07 */

#include <iostream>

// You burn 3.9 calories per minute on the treadmill.
const double caloriesPerMinute = 3.9;

int main(int argc, char* argv[]) {
    for(int minutes = 10; minutes <= 30; minutes += 5) {
        std::cout << "After " << minutes << " minutes, you will have burned " <<
            (minutes * caloriesPerMinute) << " calories." << std::endl;
    }
}
