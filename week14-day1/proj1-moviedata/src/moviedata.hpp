#ifndef _MOVIEDATA_HPP_
#define _MOVIEDATA_HPP_

#include <cstdint>
#include <string>

class MovieData {
    std::string title;
    std::string director;
    std::uint32_t yearReleased;
    std::uint16_t runningTime;

public:
    MovieData(
        std::string title,
        std::string director,
        std::uint32_t yearReleased,
        std::uint16_t runningTime
    ) : title(title), director(director), yearReleased(yearReleased), runningTime(runningTime) {}

    std::string getTitle();
    std::string getDirector();
    std::uint32_t getYearReleased();
    std::uint16_t getRunningTime();
};

#endif
