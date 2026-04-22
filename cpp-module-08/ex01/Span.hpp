#pragma once

#include <vector>
#include <stdexcept>

class Span
{
    private:
            std::vector<int> _numbers;
            unsigned int     _maxElements;

    public:
            Span() = delete;
            Span(unsigned int n);
            Span(const Span& other) = delete;
            Span& operator=(const Span& other) = delete;
            ~Span();

            void addNumber(int n);
            void addNumbers();
            int shortestSpan();
            int longestSpan();

        template<typename It>
        void addNumbers(It first, It last)
        {
                size_t count = std::distance(first, last);

                if (_numbers.size() + count > _maxElements)
                        throw std::out_of_range("Can't add numbers to vector, maximum size would be exceeded");
                else
                        _numbers.insert(_numbers.end(), first, last);
        }
};