#include "Span.hpp"
#include <vector>
#include <random>
#include <iostream>

#define MAX_SIZE 10000

int main()
{
    
    std::cout << "---SIMPLE TEST BEGINS---" << std::endl;

    Span sp = Span(5);

    try
    {
        sp.addNumber(6);
        sp.addNumber(3);
        sp.addNumber(17);
        sp.addNumber(9);
        sp.addNumber(11);
        sp.addNumber(12);
    }
    catch (const std::exception& e)
    {
        std::cout << e.what() << std::endl;
    }

    std::cout << sp.shortestSpan() << std::endl;
    std::cout << sp.longestSpan() << std::endl;

    std::cout << "---SIMPLE TEST ENDS---\n\n" << std::endl;

    std::cout << "---EMPTY VECTOR TEST BEGINS---" << std::endl;

    Span empty = Span(0);

    try
    {
        empty.addNumber(777);
    }
    catch (const std::exception& e)
    {
        std::cout <<  e.what() << std::endl;
    }

    try
    {
        std::cout << empty.shortestSpan() << std::endl;
    }
    catch (const std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }

    try
    {
        std::cout << empty.longestSpan()  << std::endl;
    }
    catch (const std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }

    std::cout <<"---EMPTY VECTOR TEST ENDS---\n\n" << std::endl;

    std::cout << "---CUSTOM TEST WITH MAX_SIZE BEGINS---" << std::endl;

    Span csp = Span(MAX_SIZE);

    std::vector<int> vec;
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<> dist(0, 2147483647);

    for (int i = 0; i < MAX_SIZE; ++i)
    {
        vec.push_back(dist(gen));
    }

    try
    {
        csp.addNumbers(vec.begin(), vec.end());
    }
    catch (const std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }

    try
    {
        std::cout << csp.shortestSpan() << std::endl;
        std::cout << csp.longestSpan() << std::endl;
    }
    catch (const std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }

    std::cout << "---CUSTOM TEST WITH MAX_SIZE ENDS---\n\n" << std::endl;

    std::cout << "---ADDNUMBERS OVERFLOW TEST BEGINS---" << std::endl;

    Span small = Span(1);

    try
    {
        small.addNumbers(vec.begin(), vec.end());
    }
    catch (const std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }

    std::cout << "---ADDNUMBERS OVERFLOW TEST ENDS---" << std::endl;

    return 0;
}