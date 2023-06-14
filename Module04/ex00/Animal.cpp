/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbin-nas <mbin-nas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 17:56:22 by mbin-nas          #+#    #+#             */
/*   Updated: 2023/06/13 17:56:23 by mbin-nas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
{
    std::cout << "Animal constructor is called" << std::endl;
    this->type = type;
}

Animal::Animal(const Animal& value)
{
    std::cout << "Animal [copy] constructor is called" << std::endl;
    *this = value;
}

Animal& Animal::operator=(const Animal& other)
{
    if(this != &other)
        this->type = type;
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

//#---------------------------[Dog Class]---------------------------------

Dog::Dog()
{
    std::cout << "Dog constructor is called" << std::endl;
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
}


//#------------------------ Cat Class ----------------------------

Cat::Cat()
{
    std::cout << "Cat constructor is called" << std::endl;
    type = "Cat";
}

Cat::Cat(const Cat& value) : Animal(value)
{
    std::cout << "Cat [copy] constructor is called" << std::endl;
    *this = value;
}



Cat& Cat::operator=(const Cat& other)
{
    if(this != &other)
        this->type = type;
    std::cout << "Cat [copy] assignment is called " << std::endl;
    return (*this);
}

void Cat::makeSound() const
{
    std::cout << "Meow Meow!"  << std::endl;
}

Cat::~Cat()
{
    std::cout << "Destructor for Cat has been called" << std::endl;
}