/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbin-nas <mbin-nas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 13:35:49 by mbin-nas          #+#    #+#             */
/*   Updated: 2023/06/13 14:06:39 by mbin-nas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"


FragTrap::FragTrap(const std::string& name): ClapTrap(name)
{
     std::cout << BYLW <<"Constructor Name " << name <<  " is being called from FragTrap" << RST << std::endl;
}

FragTrap::FragTrap(const FragTrap& value)
{
     std::cout << BYLW << "FragTrap Copy constructor was called " << RST << std::endl;
     *this = value;
}

FragTrap& FragTrap::operator=(const FragTrap& other)
{
      if (this != &other) {
        this->name = other.name;
        this->health_point = other.health_point;
        this->energy_point = other.energy_point;
        this->attack_damage = other.attack_damage;
    }
    std::cout << BYLW <<"FragTrap Copy assignment operator called" << RST << std::endl;
    return *this;
}

FragTrap::~FragTrap()
{
     std::cout << BYLW <<"FragTrap destructor was called " << RST << std::endl;
}

void FragTrap::highFivesGuys()
{
     std::cout << BYLW << "The ScavTrap is now in guard mode" << RST << std::endl;
}


