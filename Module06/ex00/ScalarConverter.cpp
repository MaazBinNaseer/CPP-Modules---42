/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbin-nas <mbin-nas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 17:55:13 by mbin-nas          #+#    #+#             */
/*   Updated: 2023/08/22 16:05:07 by mbin-nas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter()
{
    std::cout << "Constructor ScalarConverter(string) is called" << std::endl;
}

//* ---------------------------------------------------
//* --------------- STRING TO INT --------------------
//* --------------------------------------------------
int ScalarConverter::string_ToInt(std::string literal)
{
    int integer = 0;
    int number = literal.length();
    
    for(int i = 0; i < number; i++)
    {
        if (literal[i] == '.')
                break;
        else if(literal[i] < '0' || literal[i] > '9')
        {
            std::cout << "int: impossibile" << std::endl;
            return (0);
        } 
        else if (integer > (INT32_MAX - (literal[i] - '0')) / 10)
        {
            std::cout << "int: INTEGER BUFFER OVERFLOW " << std::endl;
            return (0);
        }
           integer = integer * 10 + ((int)literal[i] - 48);
    }
    std::cout << "Int: " << integer << std::endl; 
    return (integer);
}

//* ---------------------------------------------------
//* --------------- STRING TO DOUBLE -----------------
//* --------------------------------------------------
double  ScalarConverter::string_ToDouble(std::string literal)
{
    //* Lets say we have the number 3.1495
    size_t start_pos = 0;
    double result = 0.0;
    double factor = 1.0;
    bool isNegative = false;
    //* Negative needs to be skipped if the double is negative
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

//* ---------------------------------------------------
//* --------------- STRING TO FLOAT ------------------
//* --------------------------------------------------
float ScalarConverter::string_ToFloat(std::string literal)
{
        float result = 0.0f;
        bool isNegative = false;
        bool decimal = false;
        float decimalMultiply = 0.1f;

        for(size_t i = 0; i < literal.size(); ++i) 
        {
            char c = literal[i];
            if (c == '-')
                isNegative = true;
            else if (c == '.')
                decimal = true; 
            else if (std::isdigit(c)) 
            {
                if(decimal) 
                {
                    result += (c - '0') * decimalMultiply;
                    decimalMultiply *= 0.1f;
                }
                 else
                    result = result * 10 + (c - '0');
            }
            else if((literal.substr(i,3) == "nan") && (i + 2 == literal.size() - 1))
            {
                std::cout << "Float: nanf" << std::endl;
                return(0);
            }
            else 
            {
                std::cerr << "Invalid character " << c << std::endl;
                return (0.0f);   
            }
        }
        if (isNegative)
            result *= -1.0f;
        std::cout << "Float: " << std::fixed << std::showpoint << std::setprecision(1) << result << "f" << std::endl; 
        return (result);
}

ScalarConverter::~ScalarConverter()
{
    std::cout << "Destrutor ScalarConverter is called" << std::endl;
}