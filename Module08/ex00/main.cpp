/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbin-nas <mbin-nas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 16:42:22 by mbin-nas          #+#    #+#             */
/*   Updated: 2023/09/19 12:19:44 by mbin-nas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int main()
{
    std::vector<int> array;
    array.push_back(1);
    array.push_back(2);
    array.push_back(3);
    array.push_back(4);
    int find = 2;

    
    std::vector<int>::iterator result = easyfind(array, find);
    if (result != array.end())
        std::cout << "Found ya: " << *result << std::endl;
    else
        std::cout << "ERROR: Out of Range/Not existant " << std::endl;
    return (0);
}