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

Dog::Dog() : Animal(), brain(new Brain())
{
    std::cout << "Dog constructor is called" << std::endl;
    type = "Dog";
}


Dog::Dog(const Dog& value) : Animal(value), brain(new Brain(*(value.brain)))
{
    std::cout << "Dog [copy] constructor is called" << std::endl;
    type = value.type;
}

Dog& Dog::operator=(const Dog& other)
{
    if(this != &other)
    {
        Animal::operator=(other);
        delete brain;
        brain = new Brain(*(other.brain));
    }
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