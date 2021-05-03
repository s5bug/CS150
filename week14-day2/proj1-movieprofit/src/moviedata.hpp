#ifndef _MOVIEDATA_HPP_
#define _MOVIEDATA_HPP_

#include <cstdint>
#include <string>

class MovieData {
    std::string title;
    std::string director;
    std::uint32_t yearReleased;
    std::uint16_t runningTime;
    std::uint64_t budget;
    std::uint64_t boxOffice;

public:
    MovieData(
        std::string title,
        std::string director,
        std::uint32_t yearReleased,
        std::uint16_t runningTime,
        std::uint64_t budget,
        std::uint64_t boxOffice
    ) : title(title), director(director), yearReleased(yearReleased), runningTime(runningTime), budget(budget), boxOffice(boxOffice) {}

    std::string getTitle();
    std::string getDirector();
    std::uint32_t getYearReleased();
    std::uint16_t getRunningTime();
    std::uint64_t getBudget();
    std::uint64_t getBoxOffice();
    std::int64_t getProfit();
};

#endif
