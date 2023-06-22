#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include "ICharacter.hpp"
#include <string>
#include <iostream>

class AMateria
{
protected:
    std::string type;

public:
    AMateria();
    AMateria(const AMateria& other);
    AMateria& operator=(const AMateria& other);
    virtual ~AMateria();
    virtual AMateria* clone() const = 0;
    virtual void use(ICharacter& target) = 0;
    std::string const & getType() const;
};

#endif