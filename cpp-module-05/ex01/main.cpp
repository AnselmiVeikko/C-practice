#include "Bureaucrat.hpp"
#include "Form.hpp"
#include <iostream>

int main(void)
{
    try
    {
        Form trash("trash", 0, 1);
    }
    catch (const std::exception& e)
    {
        std::cout << e.what() << std::endl;
    }

/////////////////////////////////////////////////////////////////////

    Bureaucrat rookie("Rookie", 14);

    std::cout << rookie << std::endl;

    Form       contract("Building contract", 120, 50);

    std::cout << contract << std::endl;

    rookie.signForm(contract);

    std::cout << contract << std::endl;
}