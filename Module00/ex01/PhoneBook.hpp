#include "Contact.hpp"

class Phonebook{
private:
    Contact contacts[8];
    int     index;

public:
    Phonebook();
    void    ADD(void);
    void    EXIT(void);
    void    SEARCH(void);
    void    Display_all(void);
};