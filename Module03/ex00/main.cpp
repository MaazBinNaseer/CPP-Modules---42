#include "ClapTrap.hpp"

int main()
{
    ClapTrap a("John");
    a.attack("man");
    a.takeDamage(100000000);
    // a.takeDamage(5);
    a.attack("man");
    std::cout << "The status of the ClapTrap is:" << std::endl << a;

}