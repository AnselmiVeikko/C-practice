#include "BitcoinExchange.hpp"
#include <stdexcept>
#include <algorithm>
#include <iostream>

BitcoinExchange::BitcoinExchange()
{}

BitcoinExchange::BitcoinExchange(const std::string& valueFile, const std::string& rateFile)
{
    _valueData.open(valueFile);
    _rateData.open(rateFile);
    
    if (!_valueData.is_open()) 
    {
        throw std::runtime_error("Failed to open file: " + valueFile);
    }
    if (!_rateData.is_open()) 
    {
        _valueData.close();
        throw std::runtime_error("Failed to open file: " + rateFile);
    }

    try
    {
        copyRateData();
        copyValueData();
    }
    catch (const std::exception &e)
    {
        throw ;
    }
    _valueData.close();
    _rateData.close();
}

BitcoinExchange& BitcoinExchange::operator=(const BitcoinExchange& other)
{
    if (this != &other)
    {
        _valueMap = other._valueMap;
        _rateMap = other._rateMap;
    }
    return *this;
}

BitcoinExchange::~BitcoinExchange()
{}

void BitcoinExchange::copyValueData()
{
    std::string line;
    
    std::getline(_valueData, line); //skip first line.
    
    while (std::getline(_valueData, line))
    {
        size_t pos = line.find(" | ");

        if (pos == std::string::npos)
        {
            _valueMap.push_back({line, BAD_SYNTAX});
            continue ;
        }

        std::string date = line.substr(0, pos);
        std::string value = line.substr(pos + 3);

        double val;

        if (value.empty())
            val = EMPTY_VALUE;

        else
        {
            try
            {
                val = std::stod(value);

                if (val < 0)
                    val = NEGATIVE_VALUE;

                else if (val > 1000)
                    val = TOO_LARGE_VALUE;
            }
            catch (const std::exception)
            {
                val = UNKNOWN_TYPE;
            }
        }
        _valueMap.push_back({date, val}); //can stoi throw here? Add extra steps?
    }
}

void BitcoinExchange::copyRateData()
{
    std::string line;
    
    std::getline(_rateData, line); //skip first line.
    
    while (std::getline(_rateData, line))
    {
        size_t pos = line.find(",");

        std::string date = line.substr(0, pos);
        std::string value = line.substr(pos + 1); //this only works with perfect .csv file. Is it reasonable to request perfection in this case?

        _rateMap.push_back({date, std::stod(value)}); //can stod throw here? Add extra steps for security?
    }
}

void BitcoinExchange::execData()
{
    size_t i = 2;

    for (const auto& pair : _valueMap)
    {
        if (!confirmDate(pair.first))
        {
            std::cerr << "Error in value data: line " << i << ": Invalid date => " << pair.first << std::endl;
            i++;
            continue ;
        }

        if (!confirmValue(pair.second))
        {
            std::cerr << "Error in value data: line " << i << ": " << valueError(static_cast<int>(pair.second)) << std::endl;
            i++;
            continue ;
        }
        
        rateMap::const_iterator it;

        try
        {
            it = findClosestDate(pair.first, _rateMap);
        }
        catch (const std::exception &e)
        {
            std::cout << e.what() << std::endl;
        }

        if (it != _rateMap.end())
        {
            std::cout << pair.first << " => " << pair.second << " = " << (pair.second * it->second) << std::endl; 
        }

        else
        {
            std::cout << "No matching/previous date found for: " << pair.first << std::endl;
        }
        i++;
    }
}

const char* BitcoinExchange::invalidDateException::what() const noexcept
{
    return "Error: bad input => ";
}