/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbin-nas <mbin-nas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/21 12:12:47 by mbin-nas          #+#    #+#             */
/*   Updated: 2023/06/21 13:27:39 by mbin-nas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
    std::cout << "Default {ClapTrap constructor} is being called " << std::endl;
}


ClapTrap::ClapTrap(const std::string name)
{
    std::cout << "Constructor is being called from {ClapTrap}" << std::endl;
    this->name = name;
    this->health_point = 10;
    this->attack_damage = 10;
    this->energy_point = 10;
}

void ClapTrap::attack(const std::string& target)
{
    if (energy_point > 0 && health_point > 0) 
    {
        std::cout << "ClapTrap " << name << " attacks " << target << " causing " << attack_damage << " points of damage !" << std::endl;
        energy_point--;
    } 
    else 
    {
        std::cout << "ClapTrap " << name << " has no hit points or energy points left and cannot attack!" << std::endl;
    }
}

ClapTrap::ClapTrap(const ClapTrap& other)
{
    std::cout << "{Copy constructor} was called from CalpTrap" << std::endl;
    *this = other;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& other)
{
    if(this != &other)
        {
            name = other.name;
            health_point = other.health_point;
            energy_point = other.energy_point;
            attack_damage = other.attack_damage;   
        }
    std::cout << "{Copy assignment} operator called " << std::endl;
    return *this;
}


ClapTrap::~ClapTrap()
{
    std::cout << "{Destructor} is being called from ClapTrap" << std::endl;
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
        std::cout << "ClapTrap " << name << " takes " << amount << " points of damage." << std::endl;
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
        std::cout << "CalpTrap " << name << " " << amount << " takes points for repair and has used single point of energy !" << std::endl;
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

