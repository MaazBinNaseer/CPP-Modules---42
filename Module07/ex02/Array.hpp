/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbin-nas <mbin-nas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 20:34:04 by mbin-nas          #+#    #+#             */
/*   Updated: 2023/08/29 20:40:41 by mbin-nas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

#include <iostream>

template <typename T>
class Array
{
    private:
        unsigned int _size;
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
    };
};

#include "Array.tpp"
#endif