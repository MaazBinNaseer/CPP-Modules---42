/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbin-nas <mbin-nas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/22 13:48:16 by mbin-nas          #+#    #+#             */
/*   Updated: 2023/06/22 14:01:47 by mbin-nas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include <iostream>



AMateria:: AMateria()
{
    std::cout << " -------------------------------------------" << std::endl;
    std::cout << "The Constructor for the AMateria is called " << std::endl;
    std::cout << " -------------------------------------------" << std::endl;
}

AMateria::AMateria(const AMateria& other)
{
    std::cout << "[---- Copy constructor for the AMateria is called ----] " << std::endl;
    *this = other;
}

AMateria& AMateria::operator=(const AMateria& other)
{
    if(this != &other)
        this->type = other.type;
        
    std::cout<< "[------- Copy assignment for the AMateria is called --]" << std::endl;
    return(*this);
}

AMateria::~AMateria()
 {
    std::cout << " -------------------------------------------" << std::endl;
    std::cout << "The Deconstructor for the AMateria is called " << std::endl;
    std::cout << " -------------------------------------------" << std::endl;
 }

std::string const & AMateria::getType() const
{
    return type;
}