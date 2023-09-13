/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbin-nas <mbin-nas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 20:34:04 by mbin-nas          #+#    #+#             */
/*   Updated: 2023/09/13 14:07:01 by mbin-nas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

#include <iostream>
#include <cstdlib>
template <typename T>
class Array
{
    private:
        unsigned int _size;
        T *_array;
    public:
        Array<T>():_size(0)
        {
            _array = new T[_size];
        }
        Array<T>(unsigned int no): _size(no)
        {
            _array = new T[_size];
        }
        Array<T>(const Array<T> &value):_size(value.size())
        {
            _array = new T[_size];
            for(std::size_t i = 0; i < _size; i++)
            {
                _array[i] = value._array[i];
            }
        }
        Array<T> &operator=(const Array<T> &value)
        {
            if (this != &value)
            {
                if(_array != NULL)
                    delete [] _array;
                _size = value._size;
                _array = new T[_size];
                for(unsigned int i = 1; i < _size; i++)
                    _array[i] = value._array[i];
            }
            return (*this);
        }
        T &operator[](std::size_t i) 
        {
            if (_array == NULL ||  i >= _size)
                throw std::runtime_error("Out of Bounds");
            return (_array[i]);
	    }
        T const &operator[](std::size_t i) const 
        {
            if (_array == NULL || i >= _size)
                throw std::runtime_error("Out of Bounds");
            return (_array[i]);
        }
        unsigned int size() const
        {
            return (_size);
        }   
        ~Array<T>() 
        {
            if(_array != NULL)
                delete[] _array;
        }
};
#endif