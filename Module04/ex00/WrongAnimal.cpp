/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbin-nas <mbin-nas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 13:15:25 by mbin-nas          #+#    #+#             */
/*   Updated: 2023/06/21 20:18:22 by mbin-nas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
    std::cout << "Default constructor of [Wrong Animal] is being called" << std::endl;
    this->type = "Wrong Animal";
}

WrongAnimal::WrongAnimal(std::string name)
{
    std::cout << "Constructor [Wrong Animal] is being called" << std::endl; 
    this->name = name;
}

WrongAnimal::WrongAnimal(const WrongAnimal& other)
{
    std::cout << "Copy constructor of the [Wrogn Animal] is being called" << std::endl;
     *this = other.type;
     *this = other.name;
}


std::string WrongAnimal::getType() const
{
    return (type);
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& other)
{
    if (this != &other)
      { 
           this->type = other.type;
           this->name = other.name;
      }
    std:: cout << "Copy Assignment of [Wrong Animal] being called " << std::endl;
    return (*this);
}

void  WrongAnimal::makeSound() const {
    std::cout << "By Default: The animal does not have any sound yet!" << std::endl;
}

WrongAnimal::~WrongAnimal()
{
    std::cout << "Destructor constructor of [Wrong Animal] is being called" << std::endl;
}


