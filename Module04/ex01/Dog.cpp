/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbin-nas <mbin-nas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 13:29:43 by mbin-nas          #+#    #+#             */
/*   Updated: 2023/06/14 14:31:51 by mbin-nas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"

Dog::Dog()
{
    std::cout << "Dog constructor is called" << std::endl;
    brain = new Brain();
    type = "Dog";
}

Dog::Dog(const Dog& value) : Animal(value)
{
    std::cout << "Dog [copy] constructor is called" << std::endl;
    *this = value;
}

Dog& Dog::operator=(const Dog& other)
{
    if(this != &other)
        this->type = other.type;
    std::cout << "Dog [copy] assignment is called " << std::endl;
    return (*this);
}

void Dog::makeSound() const
{
    std::cout << "Woof Woof" << std::endl;
}

Dog::~Dog()
{
    std::cout << "Destructor for Dog has been called" << std::endl;
    delete (brain);
}