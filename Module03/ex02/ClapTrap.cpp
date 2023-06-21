/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbin-nas <mbin-nas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/21 12:14:24 by mbin-nas          #+#    #+#             */
/*   Updated: 2023/06/21 12:14:25 by mbin-nas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
    std::cout << BGRN <<"Default Constructor is being called from ClapTrap" << RST << std::endl;
}

ClapTrap::ClapTrap(const std::string& name)
{
    std::cout << BGRN << "Constructor is being called from ClapTrap" << RST << std::endl;
    this->name = name;
    this->health_point = 100;
    this->energy_point = 100;
    this->attack_damage = 30;
}

ClapTrap::ClapTrap(const ClapTrap& value)
{
     std::cout << BGRN << "Copy constructor was called" << RST << std::endl;
    *this = value;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& other)
{
       if (this != &other) {
            this->health_point = other.getHealth();
        }
    std::cout << BGRN << "Copy assignment operator called " << RST << std::endl;
    return *this;
}

void ClapTrap::attack(const std::string& target)
{
    if (energy_point > 0 && health_point > 0) 
    {
        std::cout << BGRN << "ClapTrap " << name << " attacks " << target << " causing " << attack_damage << " points of damage !" << RST << std::endl;
        energy_point--;
    } 
    else 
    {
        std::cout << "ClapTrap " << name << " has no hit points or energy points left and cannot attack!" << std::endl;
    }
}

ClapTrap::~ClapTrap()
{
    std::cout << BGRN << "Destructor is being called from ClapTrap" << RST << std::endl;
}

int ClapTrap::getHealth() const
{
    return (health_point);
}

int ClapTrap::getEnergy() const
{
    return (energy_point);
}

void ClapTrap::takeDamage(unsigned int amount)
{ 
     if (health_point >= amount && energy_point > 0) {
        health_point -= amount;
        std::cout << BGRN << "ClapTrap " << name << " takes " << amount << " points of damage." << RST << std::endl;
    }
    else {
        health_point = 0;
        std::cout << "ClapTrap " << name << " takes " << amount << " points of damage and has reached 0 health points." << std::endl;
    }
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if(energy_point != 0)
    {
        std::cout << "CalpTrap " << name << " " << amount << "takes points for repair" << std::endl;
        health_point = health_point + amount;
        energy_point--;
    }
}
std::ostream& operator<<(std::ostream& out, const ClapTrap& value)
{
    out << "The Energy is -> " << value.getEnergy() << std::endl;
    out << "The Health is -> " << value.getHealth() << std::endl;

    return(out);
}

