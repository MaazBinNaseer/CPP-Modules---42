/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbin-nas <mbin-nas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 17:56:22 by mbin-nas          #+#    #+#             */
/*   Updated: 2023/06/14 13:54:34 by mbin-nas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
{
    std::cout << "Animal constructor is called" << std::endl;
    this->type = "Animal";
}

Animal::Animal(const Animal& value)
{
    std::cout << "Animal [copy] constructor is called" << std::endl;
    *this = value;
}

Animal& Animal::operator=(const Animal& other)
{
    if(this != &other)
        this->type = "Animal";
    std::cout << "Animal [copy] assignment is called " << std::endl;
    return (*this);
}

std::string Animal::getType() const
{
    return (type);
}

void  Animal::makeSound() const {
    std::cout << "By Default: The animal does not have any sound yet!" << std::endl;
}

Animal::~Animal()
{
    std::cout << "Destructor for animal has been called" << std::endl;
}