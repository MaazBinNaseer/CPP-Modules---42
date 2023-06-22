#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include "IMateriaSource.hpp"
#include "AMateria.hpp"
#include <string>

#define MAX_MATERIAS 4


class MateriaSource : public IMateriaSource
{
private:
    AMateria* templates[4];
    // AMateria* materia[MAX_MATERIAS];
    int idx;

public:
    MateriaSource();
    MateriaSource(MateriaSource const & other);
    MateriaSource & operator=(MateriaSource const & other);
    virtual ~MateriaSource();
    virtual void learnMateria(AMateria*);
    virtual AMateria* createMateria(std::string const & type);
};

#endif
