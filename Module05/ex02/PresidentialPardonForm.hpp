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
        PresidentialPardonForm &operator=(PresidentialPardonForm const &obj);
        PresidentialPardonForm(PresidentialPardonForm const &object);
        std::string get_Target() const;
        void execute(Bureaucrat const &executor) const;
        ~PresidentialPardonForm();


};

#endif