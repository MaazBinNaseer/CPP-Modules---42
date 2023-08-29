#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>

template <typename T>
class Array
{
    private:
        unsgined int _size;
        T *_array;
    public:
        Array();
        Array(unsigned int n); //* Needs to be filled with default n elements array
        Array(const Array& value);
        Array& operator=(const Array& value);
        unsigned int size() const;   
        ~Array();
    class OutofBounds: public std::exception
    {
        public:
            const char *what(void) throw();
    }
};

#include "Array.tpp"
#endif