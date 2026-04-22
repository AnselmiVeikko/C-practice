#pragma once

template <typename T>

Array<T>::Array() : _elements(nullptr), _size(0)
{}

template <typename T>
Array<T>::Array(unsigned int n) : _elements(new T[n]()), _size(n)
{}

template <typename T>
Array<T>::Array(const Array& other) : _elements(new T[other._size]), _size(other._size)
{
    for (unsigned int i = 0; i < _size; i++)
    {
        _elements[i] = other._elements[i];
    }
}

template <typename T>
Array<T>& Array<T>::operator=(const Array& other)
{
    if (this != &other)
    {
        delete[] _elements;
        _size = other._size;
        _elements = new T[_size];
        
        for (unsigned int i = 0; i < _size; i++)
            _elements[i] = other._elements[i];
    }
}

template <typename T>
T& Array<T>::operator[](unsigned int n)
{
    if (n >= _size)
    {
        throw std::out_of_range("Index out of range");
    }
    return _elements[n];    
}

template <typename T>
Array<T>::~Array()
{
    delete[] _elements;
}

template <typename T>
unsigned int Array<T>::size() const { return _size; }