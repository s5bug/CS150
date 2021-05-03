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
