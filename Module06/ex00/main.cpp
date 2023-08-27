/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbin-nas <mbin-nas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 18:05:02 by mbin-nas          #+#    #+#             */
/*   Updated: 2023/08/26 13:42:28 by mbin-nas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

int main()
{
  try 
  {
        ScalarConverter::string_ToFloat(""); 
        ScalarConverter::string_ToDouble("42.0kjk");
        ScalarConverter::string_ToInt("42.0kjk");
        ScalarConverter::string_ToChar("42.0kjk");

    } 
    catch (const ScalarConverter::Impossible & e) {
        std::cerr << e.what() << std::endl;
    }
}
