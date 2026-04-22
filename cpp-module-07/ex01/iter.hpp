#pragma once

#include <cstddef>

template <typename T>
void iter(T* array, size_t len, void(*f)(T&))
{
    for (size_t i = 0; i < len; i++)
    {
        f(array[i]);
    }
}