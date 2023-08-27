/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbin-nas <mbin-nas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 17:55:13 by mbin-nas          #+#    #+#             */
/*   Updated: 2023/08/26 13:50:38 by mbin-nas         ###   ########.fr       */
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
        throw ScalarConverter::Impossible();
    else if(!isprint(literal[0]))
        std::cout << "char: Non displayable" << std::endl;
    else
        std::cout << "char: " << static_cast<char>(literal[0]) << std::endl;
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
        for(size_t i = 0; i < doubleLiteral.size(); ++i)
        {
            if(doubleLiteral[i] == 'f')
                continue;
             else if(!isdigit(doubleLiteral[i]) && doubleLiteral[i] != 'f')
                    throw ScalarConverter::Impossible();
        }
        // value = static_cast<double>(literal[0]);
        std::cout << std::fixed << std::setprecision(1) << "double: " << value << std::endl;
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
    /* 
    *   Iterate throught the condition if 
    * - It is valid input such as 42.0f 
    * - Valid float number
    * - Valid Negative Number
    */
    else if(isdigit(literal[0]) || (literal[0] == '-' && literal.size() > 1))
        {
            for(size_t i = 0; i < literal.size(); ++i)
            {
                if(literal[i] == 'f' || literal[i] == '.')
                    continue;
                if(!isdigit(literal[i]))
                    throw ScalarConverter::Impossible();
            }
            value = static_cast<float>(std::atof(literal.c_str()));
            std::cout << std::fixed << std::setprecision(1) << "Float: "<< value << "f" <<std::endl;
        }
    else 
            throw ScalarConverter::Impossible();
    return (value);
}

void ScalarConverter::Converter(std::string ConLiteral)
{
    try 
    {
        string_ToChar(ConLiteral);
    } 
    catch (const Impossible & e) 
    {
        std::cerr << "char: " << e.what() << std::endl;
    }

    try 
    {
        string_ToInt(ConLiteral);
    } 
    catch (const Impossible & e) 
    {
        std::cerr << "int: " << e.what() << std::endl;
    }

    try 
    {
        string_ToFloat(ConLiteral);
    } 
    catch (const Impossible & e) 
    {
        std::cerr << "float: " << e.what() << std::endl;
    }

    try 
    {
        string_ToDouble(ConLiteral);
    } 
    catch (const Impossible & e) 
    {
        std::cerr << "double: " << e.what() << std::endl;
    }
}


ScalarConverter::~ScalarConverter()
{
    std::cout << "Destructor ScalarConverter is called" << std::endl;
}

//*Method 1
        // std::stringstream convert;
        // convert << literal;
        // if (!(convert >> value)) {
        //     throw ScalarConverter::Impossible();
        // }
        // std::cout << std::fixed << std::setprecision(1) << "The value for the float literal is: " << value << "f" << std::endl;
//* Method 2 