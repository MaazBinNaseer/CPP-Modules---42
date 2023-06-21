/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbin-nas <mbin-nas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/21 12:14:43 by mbin-nas          #+#    #+#             */
/*   Updated: 2023/06/21 12:14:44 by mbin-nas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : ClapTrap(), ScavTrap(), FragTrap() 
{
    ClapTrap::name = name + "_clap_name";
    ClapTrap::attack_damage = 30;
    std::cout << "DiamondTrap constructor called" << std::endl;
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name), ScavTrap(name), FragTrap(name) 
{
    this->name = name;
    ClapTrap::name = name + "_clap_name";
    ClapTrap::attack_damage = 30;
    std::cout << "DiamondTrap constructor called" << std::endl;
};

DiamondTrap::DiamondTrap(const DiamondTrap& other): ClapTrap(other), ScavTrap(other), FragTrap(other)
{
    std::cout << "DiamondTrap Copy constructor called" << std::endl;
    *this = other;
}

DiamondTrap &DiamondTrap::operator=(const DiamondTrap &other) {
    ClapTrap::operator=(other);
    std::cout << "DiamondTrap Copy assignment operator called" << std::endl;
    return *this;
}

DiamondTrap::~DiamondTrap() {
    std::cout << "DiamondTrap Destructor called" << std::endl;
};

void    DiamondTrap::printStat(void) {
    std::cout << name << "'s hitPoints: " << health_point << std::endl;
    std::cout << name << "'s energyPoints: " << energy_point << std::endl;
    std::cout << name << "'s attackDamage: " << attack_damage << std::endl;
}

void DiamondTrap::attack(const std::string &target) {
	ScavTrap::attack(target);
}

void    DiamondTrap::whoAmI(void) {
    std::cout << "DiamondTrap's name: " << name << std::endl;
    std::cout << "ClapTrap's name: " << ClapTrap::name << std::endl;
}

std::ostream &operator<<(std::ostream &out, const DiamondTrap &diamondTrap) {
	out << "DiamondTrap's name: " << diamondTrap.getName() << " HP: " << diamondTrap.getHealth() << " EP: " << diamondTrap.getEnergy() << " Attack Damage: " << diamondTrap.getDamage() << std::endl;
    return out;
}