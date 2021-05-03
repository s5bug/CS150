#include "moviedata.hpp"

std::string MovieData::getTitle() {
    return title;
}

std::string MovieData::getDirector() {
    return director;
}

std::uint32_t MovieData::getYearReleased() {
    return yearReleased;
}

std::uint16_t MovieData::getRunningTime() {
    return runningTime;
}

std::uint64_t MovieData::getBudget() {
    return budget;
}

std::uint64_t MovieData::getBoxOffice() {
    return boxOffice;
}

std::int64_t MovieData::getProfit() {
    return boxOffice - budget;
}
