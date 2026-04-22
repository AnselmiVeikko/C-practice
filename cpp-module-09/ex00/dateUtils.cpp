#include "BitcoinExchange.hpp"
#include <chrono>
#include <sstream>

using sys_days = std::chrono::sys_days;
using days = std::chrono::days;

static std::chrono::year_month_day parseDate(const std::string& date)
{

    size_t pos1 = date.find('-');
    size_t pos2 = date.find('-', pos1 + 1);

    if (pos1 == std::string::npos || pos2 == std::string::npos)
        throw std::runtime_error("Invalid date detected");

    int          y;
    unsigned int m, d;

    try
    {
        y = std::stoi(date.substr(0, pos1));
        m = std::stoi(date.substr(pos1 + 1, pos2 - pos1 - 1));
        d = std::stoi(date.substr(pos2 + 1));
    }
    catch (const std::exception)
    {
        throw std::runtime_error("Invalid date detected");
    }
    return std::chrono::year_month_day{std::chrono::year{y}, std::chrono::month{m}, std::chrono::day{d}};
}

rateMap::const_iterator findClosestDate(const std::string& date, rateMap& rateData)
{
    std::chrono::year_month_day targetDate;

    try
    {
        targetDate = parseDate(date);
    }
    catch (const std::exception)
    {
        throw std::runtime_error("Invalid date detected in value data");
    }

    rateMap::const_iterator closest = rateData.end();
    days minDiff = days::max();

    for (auto it = rateData.begin(); it != rateData.end(); ++it)
    {
        std::chrono::year_month_day compareDate;
        try
        {
            compareDate = parseDate(it->first);
        }
        catch (const std::exception)
        {
            throw std::runtime_error("Invalid date detected in database");
        }

        sys_days targetSys  = sys_days{targetDate};
        sys_days compareSys = sys_days{compareDate};

        if (compareSys > targetSys)
            continue ;

        days diff = targetSys - compareSys;

        if (diff < minDiff)
        {
            minDiff = diff;
            closest = it;
        }
    }
    return closest;
}

bool confirmDate(const std::string& date)
{
    std::chrono::year_month_day ymd;

    try
    {
        ymd = parseDate(date);
    }
    catch (const std::exception)
    {
        return false;
    }

    if (!ymd.ok())
    {
        return false;
    }

    return true;
}