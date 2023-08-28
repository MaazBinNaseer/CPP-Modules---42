/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbin-nas <mbin-nas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 17:55:10 by mbin-nas          #+#    #+#             */
/*   Updated: 2023/08/28 14:06:34 by mbin-nas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALAR_HPP 
#define SCALAR_HPP

#include <iostream>
#include <cctype>
#include <string>
#include <cstdlib>
#include <iomanip>
#include <limits>
#include <sstream> //*string stream
#include <exception>

class ScalarConverter
{
    private:
        std::string _literal;
        ScalarConverter();
        ScalarConverter value(const ScalarConverter value);
        ScalarConverter& operator=(const ScalarConverter& obj);
    public:
        ScalarConverter(std::string literal);
        static std::string string_nanf(const std::string& literal);
        static int string_ToInt(std::string literal);
        static char string_ToChar(const std::string literal);
        static float string_ToFloat(std::string literal);
        static double string_ToDouble(std::string literal);
        void Converter(std::string string); //* Needs to be void to convert it to different variables
        ~ScalarConverter();
        
        class Impossible: public std::exception
        {
            public:
                const char *what() const throw();
        };
        class Overflow: public std::exception
        {
            public:
                const char *what() const throw();
        };
        class OutofRange: public std::exception
        {
            public:
                const char *what() const throw();
        };
        class NonDisplayable: public std::exception
        {
            public:
                const char *what() const throw();
        };

};

#endif