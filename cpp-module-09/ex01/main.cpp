#include <iostream>
#include "RPN.hpp"

int main(int argc, char *argv[])
{
    if (argc != 2)
    {
        std::cerr << "Error: One argument expected" << std::endl;
        return 1;
    }

    std::string formula(argv[1]);

    RPN::execute(formula);
    
    return 0;
}