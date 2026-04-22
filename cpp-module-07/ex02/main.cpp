#include <iostream>
#include <string>
#include "Array.hpp"

int main(void)
{
    Array<std::string> strings(10);

    for (size_t i = 0; i < strings.size(); i++)
    {
        strings[i] = "Hello";
    }

    Array<std::string> deepCopy = strings;

    for (size_t i = 0; i < deepCopy.size(); i++)
    {
        deepCopy[i] = "World";
    }
    
    std::cout << "ORIGINAL STRINGS:" << std::endl;

    for (size_t i = 0; i < strings.size(); i++)
    {
        std::cout << strings[i] << std::endl;
    }

    std::cout << "DEEP COPIED STRINGS:" << std::endl;


    for (size_t i = 0; i < deepCopy.size(); i++)
    {
        std::cout << deepCopy[i] << std::endl;
    }

    try
    {
        std::cout << strings[-1] << std::endl;
    }
    catch (const std::exception& e)
    {
        std::cout << e.what() << std::endl;
    }

    try
    {
        std::cout << strings[strings.size()] << std::endl;
    }
    catch (const std::exception& e)
    {
        std::cout << e.what() << std::endl;
    }
    
}


//#define MAX_VAL 750
//int main(int, char**)
//{
//    Array<int> numbers(MAX_VAL);
//    int* mirror = new int[MAX_VAL];
//    srand(time(NULL));
//    for (int i = 0; i < MAX_VAL; i++)
//    {
//        const int value = rand();
//        numbers[i] = value;
//        mirror[i] = value;
//    }
//    //SCOPE
//    {
//        Array<int> tmp = numbers;
//        Array<int> test(tmp);
//    }
//
//    for (int i = 0; i < MAX_VAL; i++)
//    {
//        if (mirror[i] != numbers[i])
//        {
//            std::cerr << "didn't save the same value!!" << std::endl;
//            return 1;
//        }
//    }
//    try
//    {
//        numbers[-2] = 0;
//    }
//    catch(const std::exception& e)
//    {
//        std::cerr << e.what() << '\n';
//    }
//    try
//    {
//        numbers[MAX_VAL] = 0;
//    }
//    catch(const std::exception& e)
//    {
//        std::cerr << e.what() << '\n';
//    }
//
//    for (int i = 0; i < MAX_VAL; i++)
//    {
//        numbers[i] = rand();
//        std::cout << numbers[i] << std::endl;
//    }
//    delete [] mirror;//
//    return 0;
//}