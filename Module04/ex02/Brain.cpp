/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbin-nas <mbin-nas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 14:17:25 by mbin-nas          #+#    #+#             */
/*   Updated: 2023/06/22 13:01:57 by mbin-nas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
    std::cout << "------------------------------------" << std::endl;
    std::cout << "Constructor [Brain] is being called" << std::endl;
    std::cout << "------------------------------------" << std::endl;

}

Brain::Brain(const Brain& other)
{
    std::cout<< "Copy constructor of [Brain] is being called " << std::endl;
    *this = other;
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
    
    std::cout << "Destructor [Brain] is being called " << std::endl;
    std::cout << "------------------------------------" << std::endl;

}
