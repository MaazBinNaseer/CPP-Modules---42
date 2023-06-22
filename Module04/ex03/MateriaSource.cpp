#include "MateriaSource.hpp"

MateriaSource::MateriaSource() : idx(0)
{
    std::cout << "--------------------------------------------------" << std::endl;
    std::cout << "The constructor for MateriaSource is being called " <<std::endl;
    std::cout << "--------------------------------------------------" << std::endl;
    for(int i = 0; i < MAX_MATERIAS; i++) 
        templates[i] = NULL;
}

MateriaSource::MateriaSource(MateriaSource const & other) : idx(other.idx)
{
    std::cout << "[------ Copy constructor of the MateriaSource is called ----- ]" << std::endl;
    for(int i = 0; i < MAX_MATERIAS; i++)
    {
        if(other.templates[i]) 
            templates[i] = other.templates[i]->clone();
        else
            templates[i] = NULL;
    }
}

MateriaSource & MateriaSource::operator=(MateriaSource const & other)
{
     std::cout << "[------Copy assignment operator of the MateriaSource is called ----- ]" << std::endl;
    if(this != &other)
    {
        idx = other.idx;
        for(int i = 0; i < MAX_MATERIAS; i++)
        {
            if(templates[i]) 
                delete templates[i];
            if(other.templates[i]) 
                templates[i] = other.templates[i]->clone();
            else
                templates[i] = NULL;
        }
    }
    return *this;
}

MateriaSource::~MateriaSource() {
    for (int i = 0; i < MAX_MATERIAS; i++) {
        if (templates[i]) {
            delete templates[i];
            templates[i] = NULL;
        }
    }
}

void MateriaSource::learnMateria(AMateria* m)
{
    if(idx < MAX_MATERIAS && m)
    {
        this->templates[idx++] = m;
    }
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
    for(int i = 0; i < this->idx; i++)
        if(this->templates[i] && this->templates[i]->getType() == type)
            return this->templates[i]->clone();
    return NULL;
}
