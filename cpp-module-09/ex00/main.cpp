#include "BitcoinExchange.hpp"
#include <iostream>

static bool validateArgs(int argc, char *argv[])
{
     if (argc != 2)
    {
        std::cerr << "Error: One argument expected" << std::endl;
        return false;
    }

    std::string input(argv[1]);

    if (input.size() < 5)
    {
        std::cerr << "Error: Bad input file" << std::endl;
        return false;
    }

    if (input.substr(input.size() - 4) != ".txt")
    {
        std::cerr << "Error: invalid input file. *.txt file expected" << std::endl;
        return false;
    }

    return true;
}

int main(int argc, char *argv[])
{
    if (!validateArgs(argc, argv))
        return 1;
    
    BitcoinExchange bcex;

    try
    {
        bcex = BitcoinExchange(argv[1], "./ratedata.csv");
    }
    catch (const std::exception &e)
    {
        std::cout << e.what() << std::endl;
        return 1;
    }

    bcex.execData();

    return 0;
}