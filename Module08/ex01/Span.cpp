/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbin-nas <mbin-nas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 19:58:09 by mbin-nas          #+#    #+#             */
/*   Updated: 2023/09/05 22:09:47 by mbin-nas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(): _N(4294967295) {};

Span::Span(unsigned int const N): _N(N)
{}


void Span::addNumber(int number)
{
    this->_numberAdd = number;
    _array.push_back(_numberAdd);
}

void Span::numberAdd(unsigned int begin, unsigned int end, unsigned int NoOfTimes)
{
    for(unsigned int i = 0; i < NoOfTimes; i++)
    {
        //* Need to fill the array/container/block with the values
        for(unsigned int j = begin; j <= end; j++)
        {
            _array.push_back(j);
        }
    }
}

// std::ostream &operator<<(std::ostream &os, const Span &value)
// {
    
    
    
// }


Span::~Span() {};