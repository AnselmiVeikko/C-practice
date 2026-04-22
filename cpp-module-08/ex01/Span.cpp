#include "Span.hpp"

Span::Span(unsigned int n) : _maxElements(n)
{}

Span::~Span()
{}

void Span::addNumber(int n)
{
    if (_numbers.size() >= _maxElements)
        throw std::out_of_range("Couldn't add number: " + std::to_string(n) + ", vector is already full");
    else
        _numbers.push_back(n);
}

int Span::longestSpan()
{
    if (_numbers.size() < 2)
        throw std::runtime_error("Faulty vector detected, not enough elements to run any comparisons");

    int longest = std::abs(_numbers[1] - _numbers[0]);

    for (size_t i = 1; i < _numbers.size(); i++)
    {
        int span = std::abs(_numbers[i] - _numbers[i - 1]);
        if (span > longest)
            longest = span;
    }
    return longest;
}

int Span::shortestSpan()
{
    if (_numbers.size() < 2)
        throw std::runtime_error("Faulty vector detected, not enough elements to run any comparisons");

    int shortest = std::abs(_numbers[1] - _numbers[0]);

    for (size_t i = 1; i < _numbers.size(); i++)
    {
        int span = std::abs(_numbers[i] - _numbers[i - 1]);
        if (span < shortest)
            shortest = span;
    }
    return shortest;
}