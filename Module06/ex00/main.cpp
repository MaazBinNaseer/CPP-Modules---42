/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbin-nas <mbin-nas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 18:05:02 by mbin-nas          #+#    #+#             */
/*   Updated: 2023/08/22 16:02:23 by mbin-nas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

int main()
{
  ScalarConverter::string_ToInt("nanf");
  ScalarConverter::string_ToDouble("42.0f");
  ScalarConverter::string_ToFloat("nan");
}
