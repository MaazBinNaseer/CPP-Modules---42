#include "PresidentialPardonForm.hpp"

// TODO PresidentialPardonForm: Required grades: sign 25, exec 5  Informs that <target> has been pardoned by Zaphod Beeblebrox.

// PresidentialPardonForm:: PresidentialPardonForm()
// {
//     std::cout << "Default [PresidentialPardonForm] Constructor has been called " << std::endl;
// }

PresidentialPardonForm::PresidentialPardonForm(std:: string target): AForm("PresidentialPardonForm", 25, 5)
{
    this->_target = target;
    std::cout << "[PresidentialPardonForm(target)] Constructor has been called " << std::endl;
}

std::string PresidentialPardonForm::get_Target() const
{
    return (this->_target);
}

PresidentialPardonForm::~PresidentialPardonForm()
{
    std::cout << "{PresidentialPardonForm} Destructor has been called " << std::endl;
}