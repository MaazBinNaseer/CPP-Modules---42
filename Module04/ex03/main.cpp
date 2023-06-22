#include "Character.hpp"
#include "IMateriaSource.hpp"
#include "MateriaSource.hpp"
#include "Ice.hpp"
#include "Cure.hpp"

int main()
{

 /*
 * --------------------------------------------------
 * -------------------- TEST 1 -----------------------
 * --------------------------------------------------- 
 */

    // IMateriaSource* src = new MateriaSource();
    // src->learnMateria(new Ice());
    // src->learnMateria(new Cure());

    // ICharacter* me = new Character("me");

    // AMateria* tmp;
    // tmp = src->createMateria("ice");
    // me->equip(tmp);

    // tmp = src->createMateria("cure");
    // me->equip(tmp);

    // ICharacter* bob = new Character("bob");

    // me->use(0, *bob);
    // me->use(1, *bob);

    // delete bob;
    // delete me;
    // delete src;

/*
 * --------------------------------------------------
 # -------------------- TEST 2 -----------------------
 * --------------------------------------------------- 
 */
        /// Create Characters
    Character* bob = new Character("bob");
    Character* mike = new Character("mike");

    // Create Materia
    Ice* ice = new Ice();
    Cure* cure = new Cure();

    // Equip Materia
    bob->equip(ice);
    bob->equip(cure);

    // Use Materia
    bob->use(0, *mike);
    bob->use(1, *mike);

    // Create Materia Source and teach it some Materia
    MateriaSource* source = new MateriaSource();
    source->learnMateria(new Ice());
    source->learnMateria(new Cure());

    // Create Materia from the source
    AMateria* iceFromSource = source->createMateria("ice");
    AMateria* cureFromSource = source->createMateria("cure");

    // Equip Materia from the source
    mike->equip(iceFromSource);
    mike->equip(cureFromSource);

    // Use Materia from the source
    mike->use(0, *bob);
    mike->use(1, *bob);

    // Testing deep copying
    Character* bobClone = new Character(*bob);
    bobClone->use(0, *mike);
    bobClone->use(1, *mike);

    // Unequip Materia
    AMateria* unequippedMateria1;
    unequippedMateria1 = bob->unequip(0);
    delete unequippedMateria1;  // Delete after use
    unequippedMateria1 = bob->unequip(1);
    delete unequippedMateria1;  // Delete after use

    // Attempt to use unequipped Materia
    bob->use(0, *mike);
    bob->use(1, *mike);

    // Unequip Materia
    AMateria* unequippedMateria;
    unequippedMateria = mike->unequip(0);
    delete unequippedMateria;
    unequippedMateria = mike->unequip(1);
    delete unequippedMateria;

    // Deleting characters and source
    delete iceFromSource;
    delete cureFromSource;


    delete bob;
    delete mike;
    delete bobClone;
    delete source;

    // Delete original materias last
    delete ice;
    delete cure;


    return (0);
}
