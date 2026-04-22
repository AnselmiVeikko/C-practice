#include "Data.hpp"
#include "Serializer.hpp"
#include <iostream>

int main(void)
{
    Data source_data;
    Data* ptr = &source_data;

    std::cout << ptr << std::endl;

    uintptr_t raw = Serializer::serialize(ptr);

    std::cout << raw << std::endl;

    ptr = Serializer::deserialize(raw);

    std::cout << ptr << std::endl;
}