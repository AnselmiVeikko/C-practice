#pragma once

#include <cstddef>

template <typename T>
class Array
{
    private:
            T*           _elements;
            unsigned int _size;

    public:
            Array();
            Array(unsigned int n);
            Array(const Array& other);
            Array& operator=(const Array& other);
            ~Array();

            T& operator[](unsigned int n);

            unsigned int size() const;
};

#include "Array.tpp"