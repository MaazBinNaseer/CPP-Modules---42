/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbin-nas <mbin-nas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 13:29:39 by mbin-nas          #+#    #+#             */
/*   Updated: 2023/06/22 13:01:21 by mbin-nas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include "Animal.hpp"
#include "Cat.hpp"

Cat::Cat() : Animal(), brain(new Brain())
{
    std::cout << "-------------------------" << std::endl;
    std::cout << "Cat constructor is called" << std::endl;
    std::cout << "-------------------------" << std::endl;
    type = "Cat";
}


Cat::Cat(const Cat& value) : Animal(value), brain(new Brain(*(value.brain)))
{
    std::cout << "Cat [copy] constructor is called" << std::endl;
    type = value.type;
}

Cat& Cat::operator=(const Cat& other)
{
    if(this != &other)
    {
        Animal::operator=(other);
        delete brain;
        brain = new Brain(*(other.brain));
    }
    std::cout << "Cat [copy] assignment is called " << std::endl;
    return (*this);
}

void Cat::makeSound() const
{
    std::cout << "Meow Meow" << std::endl;
}

Cat::~Cat()
{
    std::cout << "---------------------------------------" << std::endl;
    std::cout << "Destructor for Cat has been called" << std::endl;
    std::cout << "---------------------------------------" << std::endl;
    delete (brain);
}

