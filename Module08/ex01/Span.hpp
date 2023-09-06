/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbin-nas <mbin-nas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 19:59:08 by mbin-nas          #+#    #+#             */
/*   Updated: 2023/09/06 13:48:50 by mbin-nas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <vector>
#include <exception>

class Span
{
    private: 
        unsigned int _N;
        unsigned int _numberAdd;
        std::vector <int> _array;
    public:
        Span();
        Span(unsigned int const N);
        Span(const Span &value);
        Span& operator=(const Span& obj);
        void    addNumber(int number); //* can I make this into vector container and then fill it
        void    numberAdd(unsigned int begin, unsigned int end, unsigned int noTimes);
        void    printArray() const;
      
      
        ~Span();

class SizeError:public std::exception
{
    public:
        const char* what() const throw();
};
    
};


#endif