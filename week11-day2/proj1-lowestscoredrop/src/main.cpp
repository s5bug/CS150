/*
 * Program Name: lowestscoredrop
 * Programmer Name: Aly Cerruti
 * Description: Calculates total score after dropping a lowest score.
 * Date: 2021-04-16 */

#include <array>
#include <iostream>
#include <string>

std::string ordinal(int index) {
    switch(((index % 10) + 10) % 10) {
        case 1:
            return "st";
        case 2:
            return "nd";
        case 3:
            return "rd";
        default:
            return "th";
    }
}

#define NUM_SCORES 5

void getScore(int index, int& score);
void calcAverage(std::array<int, NUM_SCORES> scores);
int findLowest(std::array<int, NUM_SCORES> scores);

int main(int argc, char* argv[]) {
    std::array<int, NUM_SCORES> scores;

    for(int i = 0; i < scores.size(); i++) {
        getScore(i, scores[i]);
    }

    calcAverage(scores);
}

void getScore(int index, int& score) {
    do {
        std::cout << "Enter the " << (index + 1) << ordinal(index + 1) << " test score: " << std::flush;
        std::string scoreStr;
        std::getline(std::cin, scoreStr);
        score = std::stoi(scoreStr);
        if(score < 0 || score > 100) {
            std::cout << "Please enter a score between 0 and 100." << std::endl;
        }
    } while (score < 0 || score > 100);
}

void calcAverage(std::array<int, NUM_SCORES> scores) {
    int lowest = findLowest(scores);

    int sum = 0;
    for(int i = 0; i < scores.size(); i++) {
        sum += scores[i];
    }

    sum -= lowest;

    int avg = sum / (scores.size() - 1);

    std::cout << "The average of the " << (scores.size() - 1) << " highest scores is " << avg << std::endl;
}

int findLowest(std::array<int, NUM_SCORES> scores) {
    int min = 100;
    for(int i = 0; i < scores.size(); i++) {
        min = std::min(min, scores[i]);
    }
    return min;
}
