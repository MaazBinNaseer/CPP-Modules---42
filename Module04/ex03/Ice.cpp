/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbin-nas <mbin-nas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/22 15:28:54 by mbin-nas          #+#    #+#             */
/*   Updated: 2023/06/22 15:28:55 by mbin-nas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"
#include <iostream>

Ice::Ice() 
{
    std::cout << "-----------------------------------------" << std::endl;
    std::cout << "The constructor for Ice is being called " <<std::endl;
    std::cout << "-----------------------------------------" << std::endl;
    type = "ice"; 
}

Ice::Ice(const Ice& other): AMateria(other)
{
    std::cout << "[------Copy constructor of the ice is called ----- ]" << std::endl;
    *this = other;
}

Ice& Ice::operator=(const Ice& other)
{
    if(this != &other)
        this->type = other.type;
    std::cout << "[------Copy assignment operator of the ice is called ----- ]" << std::endl;
    return (*this);
}

Ice::~Ice() 
{
    std::cout << "-----------------------------------------" << std::endl;
    std::cout << "The destructor for Cure is being called " <<std::endl;
    std::cout << "-----------------------------------------" << std::endl;
}


Ice* Ice::clone() const 
{ 
    return new Ice(*this); 
}

void Ice::use(ICharacter& target)
{
    std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}
