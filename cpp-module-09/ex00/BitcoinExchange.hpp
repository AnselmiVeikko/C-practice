#pragma once

#include <list>
#include <utility>
#include <exception>
#include <fstream>
#include <string>

using rateMap = const std::list<std::pair<std::string, double>>;

enum badValue 
{
    NEGATIVE_VALUE    = -1,
    TOO_LARGE_VALUE   = -2,
    EMPTY_VALUE       = -3,
    UNKNOWN_TYPE      = -4,
    BAD_SYNTAX        = -5
};

class BitcoinExchange
{
    private:
        std::ifstream                             _valueData;
        std::ifstream                             _rateData;
        std::list<std::pair<std::string, double>> _valueMap;
        std::list<std::pair<std::string, double>> _rateMap;

    public:
        BitcoinExchange();
        BitcoinExchange(const std::string& valueFile, const std::string& rateFile);
        BitcoinExchange(const BitcoinExchange& other) = delete;
        BitcoinExchange& operator=(const BitcoinExchange& other);
        ~BitcoinExchange();
        
        void copyValueData();
        void copyRateData();
        void execData();

        class invalidDateException : public std::exception
        {
            public:
                virtual const char* what() const noexcept override;
        };

        class invalidValueException : public std::exception
        {
            public:
                virtual const char* what() const noexcept override;
        };
};

bool               confirmDate (const std::string& date);
bool               confirmValue(double value);
const std::string  valueError  (int errorCode);

rateMap::const_iterator findClosestDate(const std::string& date, rateMap& rateData);