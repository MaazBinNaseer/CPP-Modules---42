/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbin-nas <mbin-nas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 17:55:13 by mbin-nas          #+#    #+#             */
/*   Updated: 2023/08/22 12:48:47 by mbin-nas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter()
{
    std::cout << "Constructor ScalarConverter(string) is called" << std::endl;
}

int ScalarConverter::string_ToInt(std::string literal)
{
    int integer = 0;
    int number = literal.length();
    
    for(int i =0; i < number; i++)
       integer = integer * 10 + ((int)literal[i] - 48);
       
    std::cout << "Int: " << integer << std::endl; 
    return (integer);
}

double  ScalarConverter::string_ToDouble(std::string literal)
{
    //* Lets say we have the number 3.1495
    
    size_t start_pos = 0;
    double result = 0.0;
    double factor = 1.0;
    bool isNegative = false;
    
    if(literal[0] == '-')
    {
        isNegative = true;
        start_pos = 1;
    }
    else
        start_pos = 0;
        
    //* Need to check the digit before decimal point
    while(literal.size() && std::isdigit(literal[start_pos]))
    {
        result = result * 10 + (literal[start_pos] - '0');
        start_pos++;        
    }
    //* Need to parse after decimal point
    if(start_pos < literal.size() && literal[start_pos] == '.')
    {
        start_pos++;
        while(start_pos < literal.size() && std::isdigit(literal[start_pos]))
        {
            factor *= 0.1;
            result += (literal[start_pos] - '0') * factor;
            start_pos++;
        }
    }

    if(isNegative)
        result = -result;
    std::cout << "Double: " << result << std::endl;
    return (result);
}

ScalarConverter::~ScalarConverter()
{
    std::cout << "Destrutor ScalarConverter is called" << std::endl;
}