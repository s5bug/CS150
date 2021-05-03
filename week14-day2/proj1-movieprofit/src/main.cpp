/*
 * Program Name: movieprofit
 * Programmer Name: Aly Cerruti
 * Description: Displays information about profit scores from movies.
 * Date: 2021-05-03 */

#include <iostream>
#include <string>

#include "moviedata.hpp"

void display(std::ostream& out, MovieData movie) {
    out << "Movie title: " << movie.getTitle() << std::endl;
    out << "Directed by: " << movie.getDirector() << std::endl;
    out << "Released: " << movie.getYearReleased() << std::endl;
    out << "Running time: " << movie.getRunningTime() << " minutes" << std::endl;
    out << "Budget: $" << movie.getBudget() << std::endl;
    out << "Box office: $" << movie.getBoxOffice() << std::endl;

    if(movie.getProfit() > 0) {
        out << "Profit: $" << movie.getProfit() << std::endl;
    } else {
        out << "Loss: $" << -movie.getProfit() << std::endl;
    }
}

int main(int argc, char* argv[]) {
    MovieData shrekMovie("Shrek", "Andrew Adamson, Vicky Jenson", 2001, 90, 60'000'000, 484'400'000);
    MovieData cars2Movie("Cars 2", "John Lasseter", 2011, 106, 200'000'000, 562'100'000);

    display(std::cout, shrekMovie);
    std::cout << std::endl;
    display(std::cout, cars2Movie);
}
