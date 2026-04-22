#include "iter.hpp"
#include <iostream>

void toupper(std::string& str)
{
    for (size_t i = 0; i < str.length(); i++)
    {
        char c = std::toupper(str[i]);
        str[i] = c;
    }
}

void addone(int& n)
{
    n = n + 1;
}

int main(void)
{
    std::string str_arr[5] = {"zero", "one", "two", "three", "four"};

    std::cout << "STRINGS BEFORE ITER(toupper): " << std::endl;

    for (size_t i = 0; i < 5; i++)
    {
        std::cout << str_arr[i] << std::endl;
    }

    ::iter(str_arr, 5, toupper);

    std::cout << "STRINGS AFTER ITER(toupper): " << std::endl;

    for (size_t i = 0; i < 5; i++)
    {
        std::cout << str_arr[i] << std::endl;
    }

    int int_arr[5] = {0, 1, 2, 3, 4};

    std::cout << "INTEGERS BEFORE ITER(addone): " << std::endl;

    for (size_t i = 0; i < 5; i++)
    {
        std::cout << int_arr[i] << std::endl;
    }

    ::iter(int_arr, 5, addone);

    std::cout << "INTEGERS AFTER ITER(addone): " << std::endl;

    for (size_t i = 0; i < 5; i++)
    {
        std::cout << int_arr[i] << std::endl;
    }


}