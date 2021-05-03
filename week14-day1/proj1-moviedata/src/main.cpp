/*
 * Program Name: moviedata
 * Programmer Name: Aly Cerruti
 * Description: Displays data about some movies.
 * Date: 2021-05-03 */

#include <iostream>
#include <string>

#include "moviedata.hpp"

void display(std::ostream& out, MovieData movie) {
    out << "Movie title: " << movie.getTitle() << std::endl;
    out << "Directed by: " << movie.getDirector() << std::endl;
    out << "Released: " << movie.getYearReleased() << std::endl;
    out << "Running time: " << movie.getRunningTime() << " minutes" << std::endl;
}

int main(int argc, char* argv[]) {
    MovieData shrekMovie("Shrek", "Andrew Adamson, Vicky Jenson", 2001, 90);
    MovieData cars2Movie("Cars 2", "John Lasseter", 2011, 106);

    display(std::cout, shrekMovie);
    std::cout << std::endl;
    display(std::cout, cars2Movie);
}
