/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbin-nas <mbin-nas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 17:55:10 by mbin-nas          #+#    #+#             */
/*   Updated: 2023/08/23 17:51:27 by mbin-nas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALAR_HPP 
#define SCALAR_HPP

#include <iostream>
#include <string>
#include <iomanip>
#include <limits>
#include <sstream>

class ScalarConverter
{
    private:
        std::string _literal;
        ScalarConverter();
    public:
        ScalarConverter(std::string literal);
        static int string_ToInt(std::string literal);
        static char string_ToChar(std::string literal);
        static float string_ToFloat(std::string literal);
        static double string_ToDouble(std::string literal);
        void Converter(std::string string); //* Needs to be void to convert it to different variables
        ~ScalarConverter();
};

#endif