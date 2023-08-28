#ifndef Call_HPP
#define Call_HPP

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"


#include <iostream>
#include <ctime>
#include <cstdlib>

Base *generate(void);
void identify(Base *p);
void identify(Base &p);

#endif 