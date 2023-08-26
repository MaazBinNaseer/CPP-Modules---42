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

/*
* ---------------------- STRINGSTREAM ---------------------------------------
--> Difference between isstringstream and stringstream
--> The difference is that the [stringstream] takes input and output from the 
--> string whereas, the isstringstream reads only from the string and formats 
--> it to the user type. 
* --------------------------------------------------------------------------
*/

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
//* --------------- NANF FUNCTION ------------------
//* --------------------------------------------------
std::string ScalarConverter::string_nanf(const std::string& literal)
{
    if(literal == "nan")
        return("nan");
    else if (literal == "-inf")
        return("-inf");
    else if (literal == "+inf")
        return("+inf");
    return (literal);
}

//* ---------------------------------------------------
//* --------------- STRING TO CHAR  ------------------
//* --------------------------------------------------
char ScalarConverter::string_ToChar(const std::string charLiteral)
{
    std::string literal = string_nanf(charLiteral);
    if (literal == "nan" || literal == "-inf" || literal == "+inf" || literal.size() != 1) 
    {
        std::cout << "char: ";
        throw ScalarConverter::Impossible();
    }
    else if(!isprint(literal[0]))
    {
        std::cout << "char: Non displayable" << std::endl;
    }
    else
    {
        std::cout << "char: " << static_cast<char>(literal[0]) << std::endl;
    }
    return(static_cast<char>(literal[0]));
}


//* ---------------------------------------------------
//* --------------- STRING TO INT --------------------
//* --------------------------------------------------
int ScalarConverter::string_ToInt(std::string intLiteral)
{
    std:: string literal = string_nanf(intLiteral);
    std::stringstream convert;
    if (literal == "nan" || literal == "-inf" || literal == "+inf") 
        throw ScalarConverter::Impossible();
    convert << intLiteral;
    int integer;
    convert >> integer;
    std::cout << "integer: " << integer << std::endl;
    return (integer);

}

//* ---------------------------------------------------
//* --------------- STRING TO DOUBLE -----------------
//* --------------------------------------------------
double  ScalarConverter::string_ToDouble(std::string doubleLiteral)
{
    std::string literal = string_nanf(doubleLiteral);
    double value = 0.0;   
    if (literal == "nan" || literal == "-inf" || literal == "+inf") 
    {
        std::cout << "double: " << literal << std::endl;
    }
    else 
    {
        std::istringstream convert (doubleLiteral);
        if (!(convert >> value))
            throw ScalarConverter::Impossible();
        std::cout << std::fixed << std::setprecision(1) << "double is: " << value << std::endl;
    }
    return (value);
}

//* ---------------------------------------------------
//* --------------- STRING TO FLOAT ------------------
//* --------------------------------------------------
float ScalarConverter::string_ToFloat(std::string inputLiteral)
{
    std::string literal;
    float value = 0.0f;
    
    literal = string_nanf(inputLiteral);
    if (literal == "nan" || literal == "-inf" || literal == "+inf") 
    {
        std::cout << "float: " << literal << "f" << std::endl;
    } 
    else 
    {
        std::cout << std::fixed << std::setprecision(1) << static_cast<float>(std::atof(literal.c_str())) << "f" <<std::endl;
    }
    return value;
}

ScalarConverter::~ScalarConverter()
{
    std::cout << "Destrutor ScalarConverter is called" << std::endl;
}

//*Method 1
        // std::stringstream convert;
        // convert << literal;
        // if (!(convert >> value)) {
        //     throw ScalarConverter::Impossible();
        // }
        // std::cout << std::fixed << std::setprecision(1) << "The value for the float literal is: " << value << "f" << std::endl;
        //* Method 2 