#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include "ICharacter.hpp"
#include "AMateria.hpp"
#include <string>

#define MAX_MATERIAS 4

class Character : public ICharacter
{
    private:
        AMateria* materia[MAX_MATERIAS];

    public:
        Character(std::string const & name);
        Character(Character const & other);
        virtual ~Character();
        Character & operator=(Character const & other);
        std::string const & getName() const;
        void equip(AMateria* m);
        AMateria* unequip(int idx);
        void use(int idx, ICharacter& target);

    private:
        Character();
        std::string _name;
        AMateria* _inventory[4];
};


#endif
