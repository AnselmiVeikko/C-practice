#include "easyfind.hpp"
#include <iostream>
#include <vector>

int main(void)
{
    std::vector<int> vec = {1, 2, 3, 4, 5};
    std::vector<int>::const_iterator vec_it;

    int badValue = 0;
    
    try
    {
        vec_it = ::easyfind(vec, badValue);
    }
    catch (const std::exception& e)
    {
        std::cout << "Value: " << badValue << " " << e.what() << std::endl;
    }
    
    int goodValue = 4;

    try
    {
        vec_it = ::easyfind(vec, goodValue);
        std::cout << *vec_it << std::endl;
    }
    catch (const std::exception& e)
    {
        std::cout << "Value: " << goodValue << " " << e.what() << std::endl;
    }
}