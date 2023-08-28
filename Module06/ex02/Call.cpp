#include "Call.hpp"


void identify(Base *p)
{
    if(dynamic_cast<A*>(p))
        std::cout << "Instantiating pointing to Class A " << std::endl;
    else if (dynamic_cast<B*>(p))
        std::cout << "Instantiating pointing to Class B " << std::endl;
    else if (dynamic_cast<C*>(p))
        std::cout << "Instantiating pointing to Class C " << std::endl;
}

Base *generate(void)
{
    std::cout << "Randomly instantiating " << std::endl;
    int random = rand() % 3;
    if(random == 1)
        return (new A);
    else if (random == 2)
        return (new B);
    else
        return (new C); 
}

void identify(Base& p)
{
    try 
    {
        A & aRef = dynamic_cast<A&>(p);
        (void)aRef;
        std::cout << "This is class A reference pointed" << std::endl;
    }
    catch (std::bad_cast & e) {}

    try 
    {
        B & bRef = dynamic_cast<B&>(p);
        (void)bRef;
        std::cout << "This is class B reference pointed" << std::endl;
    }
  catch (std::bad_cast & e) {}

    try 
    {
        C & cRef = dynamic_cast<C&>(p);
        (void)cRef;
        std::cout << "This is class C reference pointed" << std::endl;
    }
    catch (std::bad_cast & e) {}
}

Base::~Base()
{
    std::cout << "Destructor called" <<std::endl;
}