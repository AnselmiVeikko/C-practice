#include "ScalarConverter.hpp"
#include <iostream>
#include <limits>



static bool isChar(const std::string& input)
{
    if (input.length() == 1 && !std::isdigit(input[0]))
        return true;
    return false;
}

static bool isInt(const std::string& input)
{
    try
    {
        size_t pos;
        stoi(input, &pos);
        return pos == input.length();
    }
    catch (const std::exception&)
    {
        return false;
    }
}

static bool isFloat(const std::string& input)
{

    if (input == "nanf" || input == "+inff" || input == "-inff")
            return true;

    if (input.length() > 1 && input.back() == 'f')
    {
        try
        {
            std::stof(input.substr(0, input.length() - 1));
            return true;
        }
        catch (const std::exception&)
        {
            return false;
        }
    }
    return false;
}

static bool isDouble(const std::string& input)
{
    if (input == "nan" || input == "+inf" || input == "-inf")
            return true;

    if (input.length() > 1 && input.find('.') != std::string::npos)
    {
        try
        {
            std::stod(input);
            return true;
        }
        catch (const std::exception&)
        {
            return false;
        }
        
    }
    return false;
}

static void convertChar(const std::string& input)
{
    char c = input[0];

    std::cout << "char: " << c << std::endl;
    std::cout << "int: " << static_cast<int>(c) << std::endl;

    std::cout.setf(std::ios::fixed);
    std::cout.precision(1);

    std::cout << "float: " << static_cast<float>(c) << "f" << std::endl;
    std::cout << "double: " << static_cast<double>(c) << std::endl;
}

static void convertInt(const std::string& input)
{
    int n = stoi(input);

    if (n >= -128 && n <= 127)
    {
        if (n >= 32 && n <= 126)
            std::cout << "char: " << static_cast<char>(n) << std::endl;
        else
            std::cout << "char: Non displayable" << std::endl;
    }
    else
        std::cout << "char: impossible" << std::endl;

    std::cout << "int: " << n << std::endl;

    std::cout.setf(std::ios::fixed);
    std::cout.precision(1);

    std::cout << "float: " << static_cast<float>(n) << "f" << std::endl;
    std::cout << "double: " << static_cast<double>(n) << std::endl;

}

static void convertFloat(const std::string& input)
{
    if (input == "nanf" || input == "+inff" || input == "-inff")
    {
        std::cout << "char: impossible" << std::endl;
        std::cout << "int: impossible" << std::endl;
        std::cout << "float: " << input << std::endl;
        std::cout << "double: " << input.substr(0, input.length() - 1) << std::endl;
        return ;
    }

    float f = stof(input);

    if (f >= -128 && f <= 127)
    {
        if (f >= 32 && f <= 126)
            std::cout << "char: " << static_cast<char>(f) << std::endl;
        else
            std::cout << "char: Non displayable" << std::endl;
    }
    else
        std::cout << "char: impossible" << std::endl;

    if (static_cast<double>(f) < std::numeric_limits<int>::min() || static_cast<double>(f) > std::numeric_limits<int>::max())
        std::cout << "int: impossible" << std::endl;
    else
        std::cout << "int: " << static_cast<int>(f) << std::endl;

    std::cout.setf(std::ios::fixed);
    std::cout.precision(1);

    std::cout << "float: " << f << "f" << std::endl;
    std::cout << "double: " << static_cast<double>(f) << std::endl;
}

static void convertDouble(const std::string& input)
{
    if (input == "nan" || input == "+inf" || input == "-inf")
    {
        std::cout << "char: impossible" << std::endl;
        std::cout << "int: impossible" << std::endl;
        std::cout << "float: " << input << "f" << std::endl;
        std::cout << "double: " << input << std::endl;
        return ;
    }

    double d = stod(input);

    if (d >= -128 && d <= 127)
    {
        if (d >= 32 && d <= 126)
            std::cout << "char: " << static_cast<char>(d) << std::endl;
        else
            std::cout << "char: Non displayable" << std::endl;
    }
    else
        std::cout << "char: impossible" << std::endl;

    if (d < std::numeric_limits<int>::min() || d > std::numeric_limits<int>::max())
        std::cout << "int: impossible" << std::endl;
    else
        std::cout << "int: " << static_cast<int>(d) << std::endl;

    std::cout.setf(std::ios::fixed);
    std::cout.precision(1);

    if (d < std::numeric_limits<float>::min())
        std::cout << "float: -inff" << std::endl;
    else if (d > std::numeric_limits<float>::max())
        std::cout << "float: +inff" << std::endl;
    else
        std::cout << "float: " << static_cast<float>(d) << "f" << std::endl;
    
    std::cout << "double: " << d << std::endl;

}

static void ft_impossible()
{
    std::cout << "char: impossible" << std::endl;
    std::cout << "int: impossible" << std::endl;
    std::cout << "float: impossible" << std::endl;
    std::cout << "double: impossible" << std::endl;
}

void ScalarConverter::convert(const std::string& input)
{
    if      (isChar(input))   convertChar(input);
    else if (isInt(input))    convertInt(input);
    else if (isFloat(input))  convertFloat(input);
    else if (isDouble(input)) convertDouble(input);
    else                      ft_impossible();
}