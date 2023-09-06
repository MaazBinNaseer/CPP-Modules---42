/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbin-nas <mbin-nas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 19:58:09 by mbin-nas          #+#    #+#             */
/*   Updated: 2023/09/06 13:45:47 by mbin-nas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(): _N() {};

Span::Span(unsigned int const N): _N(N)
{}

/* ------------------------------------------------------
* ---------------- EXCEPTIONS ---------------------------
--------------------------------------------------------*/
const char* Span::SizeError::what(void) const throw()
{
    return ("Invalid Size Error");
}

/* ------------------------------------------------------
* ---------------- METHODS ---------------------------
--------------------------------------------------------*/

void Span::printArray() const
{
    for (std::vector<int>::const_iterator it = _array.begin(); it != _array.end(); ++it) {
        std::cout << *it << std::endl;
    }
    std::cout << std::endl;
}

void Span::addNumber(int number)
{
    this->_numberAdd = number;
    if(this->_array.size() > this->_N)
        throw SizeError();
    _array.push_back(_numberAdd);
}

void Span::numberAdd(unsigned int begin, unsigned int end, unsigned int NoOfTimes)
{
    if (_array.size() + NoOfTimes * (end - begin + 1) > _N)
        throw SizeError();
    for(unsigned int i = 0; i < NoOfTimes; i++)
    {
        //* Need to fill the array/container/block with the values
        for(unsigned int j = begin; j <= end; j++)
        {
            _array.push_back(j);
        }
    }
}

Span::~Span() {};