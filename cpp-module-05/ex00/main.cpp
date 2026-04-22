#include "Bureaucrat.hpp"
#include <iostream>

int main(void)
{
    try
    {
        Bureaucrat failure("Gabriel", 0);
    }
    catch (const std::exception& e)
    {
        std::cout << e.what() << std::endl;
    }

    /////////////////////////////////////////////////////////////////////
    
    Bureaucrat rookie("Gideon", 150);

    std::cout << rookie << std::endl;
    try
    {
        rookie.decrementGrade();
    }
    catch (const std::exception& e)
    {
        std::cout << e.what() << std::endl;
    }

    std::cout << rookie << std::endl;

    rookie.incrementGrade();

    std::cout << rookie << std::endl;

    //////////////////////////////////////////////////////////////////////

    Bureaucrat master("Bob", 1);

    std::cout << master << std::endl;

    try
    {
        master.incrementGrade();
    }
    catch (const std::exception& e)
    {
        std::cout << e.what() << std::endl;
    }

    std::cout << master << std::endl;

    master.decrementGrade();

    std::cout << master << std::endl;
}