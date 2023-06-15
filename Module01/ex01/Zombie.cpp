/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbin-nas <mbin-nas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/05 15:16:46 by mbin-nas          #+#    #+#             */
/*   Updated: 2023/06/15 12:23:41 by mbin-nas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie()
{
    std::cout << "Default constructor has being called" << std::endl;
}

Zombie:: Zombie(std::string name)
{
    this->name = name;
}

void Zombie::annouce(void)
{
    std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void Zombie::setName(std::string name)
{
    this->name = name;
}

// //* Destructor gets called automatically as once it goes out of the scope
Zombie::~Zombie(void)
{
    std::cout << this->name <<" : Zombie has died." << std::endl;
}