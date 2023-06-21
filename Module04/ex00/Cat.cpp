/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbin-nas <mbin-nas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 13:29:39 by mbin-nas          #+#    #+#             */
/*   Updated: 2023/06/21 20:03:16 by mbin-nas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

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

