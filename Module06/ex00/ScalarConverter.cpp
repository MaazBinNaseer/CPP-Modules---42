/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbin-nas <mbin-nas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 17:55:13 by mbin-nas          #+#    #+#             */
/*   Updated: 2023/08/24 16:35:13 by mbin-nas         ###   ########.fr       */
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

}

//* ---------------------------------------------------
//* --------------- STRING TO DOUBLE -----------------
//* --------------------------------------------------
double  ScalarConverter::string_ToDouble(std::string literal)
{

}

//* ---------------------------------------------------
//* --------------- STRING TO FLOAT ------------------
//* --------------------------------------------------
float ScalarConverter::string_ToFloat(std::string literal)
{
    
}

ScalarConverter::~ScalarConverter()
{
    std::cout << "Destrutor ScalarConverter is called" << std::endl;
}