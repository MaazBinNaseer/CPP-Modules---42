/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbin-nas <mbin-nas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/21 19:50:40 by mbin-nas          #+#    #+#             */
/*   Updated: 2023/06/21 20:02:43 by mbin-nas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat()
{
    std::cout << "WrongCat constructor is called" << std::endl;
    type = "WrongCat";
}

WrongCat::WrongCat(const WrongCat& value) : WrongAnimal(value)
{
    std::cout << "WrongCat [copy] constructor is called" << std::endl;
    *this = value;
}

WrongCat& WrongCat::operator=(const WrongCat& other)
{
    if(this != &other)
        this->type = type;
    std::cout << "WrongCat [copy] assignment is called " << std::endl;
    return (*this);
}

void WrongCat::makeSound() const
{
    std::cout << "NOOO NOOOOO"  << std::endl;
}

WrongCat::~WrongCat()
{
    std::cout << "Destructor for WrongCat has been called" << std::endl;
}

