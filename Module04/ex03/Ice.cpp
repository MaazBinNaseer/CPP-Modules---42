#include "Ice.hpp"
#include <iostream>

Ice::Ice() 
{
    std::cout << "-----------------------------------------" << std::endl;
    std::cout << "The constructor for Ice is being called " <<std::endl;
    std::cout << "-----------------------------------------" << std::endl;
    type = "ice"; 
}

Ice::Ice(const Ice& other)
{
    std::cout << "[------Copy constructor of the ice is called ----- ]" << std::endl;
    *this = other;
}

Ice& Ice::operator=(const Ice& other)
{
    if(this != &other)
        this->type = "ice";
    std::cout << "[------Copy assignment operator of the ice is called ----- ]" << std::endl;
}

Ice::~Ice() 
{
    std::cout << "-----------------------------------------" << std::endl;
    std::cout << "The destructor for Cure is being called " <<std::endl;
    std::cout << "-----------------------------------------" << std::endl;
}


Ice* Ice::clone() const 
{ 
    return new Ice(*this); 
}

void Ice::use(ICharacter& target)
{
    std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}
