#include "BitcoinExchange.hpp"

const std::string valueError(int errorCode)
{
    if (errorCode == NEGATIVE_VALUE)
    {
        return "negative value detected";
    }
    if (errorCode == TOO_LARGE_VALUE)
    {
        return "too large value detected";
    }
    if (errorCode == EMPTY_VALUE)
    {
        return "empty value detected";
    }
    if (errorCode == UNKNOWN_TYPE)
    {
        return "unknown type detected";
    }
    if (errorCode == BAD_SYNTAX)
    {
        return "critical syntax error detected";
    }
    return "unknown error";
}

bool confirmValue(double value)
{
    if (value < 0)
        return false;
    return true;
}