/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbin-nas <mbin-nas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 18:05:02 by mbin-nas          #+#    #+#             */
/*   Updated: 2023/08/24 16:44:18 by mbin-nas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

int main()
{
  try 
  {
        ScalarConverter::string_ToFloat("42.0f"); 
        ScalarConverter::string_ToDouble("nan");
        ScalarConverter::string_ToInt("42.0f");
        ScalarConverter::string_ToChar("5");

    } 
    catch (const ScalarConverter::Impossible & e) {
        std::cerr << e.what() << std::endl;
    }
}
