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
        ScalarConverter value;
        value.Converter("-2147483649");

    } 
    catch (const ScalarConverter::Impossible & e) 
    {
        std::cerr << e.what() << std::endl;
    }
    catch (const ScalarConverter::Overflow &e)
    {
        std:: cerr << "int: " << e.what() << std::endl;
    }

    return(0);
}
