/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbin-nas <mbin-nas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/22 14:12:09 by mbin-nas          #+#    #+#             */
/*   Updated: 2023/06/22 14:24:40 by mbin-nas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"
#include <iostream>

Cure::Cure() 
{ 
    std::cout << "-----------------------------------------" << std::endl;
    std::cout << "The constructor for Cure is being called " <<std::endl;
    std::cout << "-----------------------------------------" << std::endl;
    type = "cure"; 
}

Cure::Cure(const Cure& other)
{
    std::cout << "[------Copy constructor of the cure is called ----- ]" << std::endl;
    *this = other;
}

Cure& Cure::operator=(const Cure& other)
{
    if(this != &other)
        this->type = "cure";
    std::cout << "[------Copy assignment operator of the cure is called ----- ]" << std::endl;
}


Cure::~Cure()
{
    std::cout << "-----------------------------------------" << std::endl;
    std::cout << "The Destructor for Cure is being called " <<std::endl;
    std::cout << "-----------------------------------------" << std::endl;

}

Cure* Cure::clone() const
{ 
     return new Cure(*this); 
}
void Cure::use(ICharacter& target)
{
    std::cout << "* heals " << target.getName() << "’s wounds *" << std::endl;
}
