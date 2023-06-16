#include "AMateria.hpp"

AMateria::~AMateria() {}

std::string const & AMateria::getType() const
{
    return type;
}