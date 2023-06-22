/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbin-nas <mbin-nas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 14:17:25 by mbin-nas          #+#    #+#             */
/*   Updated: 2023/06/22 13:02:21 by mbin-nas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
    std::cout << "------------------------------------" << std::endl;
    std::cout << "Constructor [Brain] is being called" << std::endl;
    for (int i = 0; i < 100; ++i)
    {
        ideas[i] = " I have the best idea of JHJHJKHKJHJKHJKH ";  // or some default value
    }
    std::cout << "------------------------------------" << std::endl;

}

Brain::Brain(const Brain& other)
{
    std::cout<< "Copy constructor of [Brain] is being called " << std::endl;
    for (int i = 0; i < 100; ++i)
    {
        ideas[i] = other.ideas[i];
    }
}

Brain& Brain::operator=(const Brain& other)
{
    if(this != &other)
    {
        for (int i = 0; i < 100; ++i)
            ideas[i] = other.ideas[i];
    }
    std::cout << "Copy Assignment [Brain] is being called" << std::endl;
    return (*this);
}

Brain::~Brain()
{
    std::cout << "------------------------------------" << std::endl;
    std::cout << "Destructor [Brain] is being called " << std::endl; 
    std::cout << "------------------------------------" << std::endl;

}
