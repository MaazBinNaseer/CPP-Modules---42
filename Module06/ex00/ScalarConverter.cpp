/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbin-nas <mbin-nas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 17:55:13 by mbin-nas          #+#    #+#             */
/*   Updated: 2023/08/24 16:45:06 by mbin-nas         ###   ########.fr       */
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
    std::stringstream convert;
    convert << literal;
    int integer;
    convert >> integer;
    std::cout << "The value for the integer is: " << integer << std::endl;
    return (integer);

}

//* ---------------------------------------------------
//* --------------- STRING TO DOUBLE -----------------
//* --------------------------------------------------
double  ScalarConverter::string_ToDouble(std::string literal)
{
    return (0);
}

//* ---------------------------------------------------
//* --------------- STRING TO FLOAT ------------------
//* --------------------------------------------------
float ScalarConverter::string_ToFloat(std::string literal)
{
    return (0);
    
}

ScalarConverter::~ScalarConverter()
{
    std::cout << "Destrutor ScalarConverter is called" << std::endl;
}