/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbin-nas <mbin-nas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 13:04:29 by mbin-nas          #+#    #+#             */
/*   Updated: 2023/06/12 19:02:30 by mbin-nas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(): ClapTrap() 
{
    std::cout << BBLU << "ScavTrap constructor called. Name: " << name << RST << std::endl;
}

ScavTrap::ScavTrap(const std::string& name): ClapTrap(name) {
    std::cout << BBLU << "ScavTrap constructor called. Name: " << name << RST << std::endl;
}

ScavTrap::~ScavTrap()
{
    std::cout << BBLU <<"ScavTrap destructor was called " << RST << std::endl;
}

void ScavTrap::guardGate()
{
    std::cout << BBLU << "The ScavTrap is now in guard mode" << RST << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& value) : ClapTrap(value)
{
    std::cout << BBLU << "ScavTrap Copy constructor was called" << RST << std::endl;
    *this = value;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& other) {
    if (this != &other) {
        this->name = other.name;
        this->health_point = other.health_point;
        this->energy_point = other.energy_point;
        this->attack_damage = other.attack_damage;
    }
    std::cout << BBLU <<"ScavTrap Copy assignment operator called" << RST << std::endl;
    return *this;
}

void ScavTrap::attack(const std::string& target)
{
      if (energy_point > 0 && health_point > 0) {
        std::cout << BBLU << "ScavTrap " << name << " attacks " << target << " causing " << attack_damage << " points of damage!" << RST << std::endl;
        energy_point--;
    } else {
        std::cout << "ScavTrap " << name << " has no hit points or energy points left and cannot attack!" << std::endl;
    }
}