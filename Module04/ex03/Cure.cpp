#include "Cure.hpp"
#include <iostream>

Cure::Cure() { type = "cure"; }
Cure::~Cure() {}
Cure* Cure::clone() const { return new Cure(*this); }
void Cure::use(ICharacter& target)
{
    std::cout << "* heals " << target.getName() << "’s wounds *" << std::endl;
}
