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
//* --------------- CONST THROW ISSUES ---------------
//* --------------------------------------------------
const char *ScalarConverter::Impossible::what(void) const throw()
{
    return ("impossible");
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
    std::istringstream convert (literal);
    double value;   
    convert >> value;
    std::cout << std::fixed << std::setprecision(1) << "The value for the double is: " << value << std::endl;
    return (0);
}

//* ---------------------------------------------------
//* --------------- NANF FUNCTION ------------------
//* --------------------------------------------------
std::string ScalarConverter::string_nanf(const std::string& literal)
{
    if(literal == "nan")
        return("nanf");
    else if (literal == "-inf")
        return("-inf");
    else if (literal == "+inf")
        return("+inf");
    return (literal);
}

//* ---------------------------------------------------
//* --------------- STRING TO FLOAT ------------------
//* --------------------------------------------------
float ScalarConverter::string_ToFloat(std::string inputLiteral)
{
    std::string literal;
    float value = 0.0f;
    
    literal = string_nanf(inputLiteral);
    if (literal == "nanf" || literal == "-inff" || literal == "+inff") 
    {
        std::cout << "float: " << literal << std::endl;
    } 
    else 
    {
        std::stringstream convert;
        convert << literal;
        if (!(convert >> value)) {
            throw ScalarConverter::Impossible();
        }
        std::cout << "The value for the float literal is: " << value << "f" << std::endl;
    }
    return value;
}

ScalarConverter::~ScalarConverter()
{
    std::cout << "Destrutor ScalarConverter is called" << std::endl;
}