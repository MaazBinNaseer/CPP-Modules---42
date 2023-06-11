#include "ClapTrap.hpp"

ClapTrap::ClapTrap(const std::string name)
{
    std::cout << "Constructor is being called " << std::endl;
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

ClapTrap::~ClapTrap()
{
    std::cout << "Destructor is being called" << std::endl;
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

