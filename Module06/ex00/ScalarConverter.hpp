/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbin-nas <mbin-nas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 17:55:10 by mbin-nas          #+#    #+#             */
/*   Updated: 2023/08/22 12:22:26 by mbin-nas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALAR_HPP 
#define SCALAR_HPP

#include <iostream>
#include <string>

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
        void conveter(std::string string); //* Needs to be void to convert it to different variables
        ~ScalarConverter();
};

#endif