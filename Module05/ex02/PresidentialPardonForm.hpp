#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

#include "AForm.hpp"

class PresidentialPardonForm: public AForm 
{
    private:
        std::string _target;    
    public:
        PresidentialPardonForm();
        PresidentialPardonForm(std::string target);
        PresidentialPardonForm &operator=(PresidentialPardonForm const &rhs);
        PresidentialPardonForm(PresidentialPardonForm const &object);
        std::string get_Target(std::string target);
        ~PresidentialPardonForm();


};

#endif