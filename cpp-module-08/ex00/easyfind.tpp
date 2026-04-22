#pragma once

#include <algorithm>
#include <stdexcept>

template <typename T>
typename T::const_iterator easyfind(const T& container, int n)
{
    const auto it = std::find(container.begin(), container.end(), n);
    if (it == container.end())
        throw std::out_of_range("was not found in the container");
    return it;
}