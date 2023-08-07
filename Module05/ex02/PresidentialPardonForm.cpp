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

PresidentialPardonForm & PresidentialPardonForm::operator=(PresidentialPardonForm const &obj)
{
	std::cout << "[PresidentialPardonForm ]Copy Assignment Operator called" << std::endl;
	if (this != &rhs)
		AForm::operator=(rhs);
	return(*this);
}


void PresidentialPardonForm::execute(Bureaucrat const &executor) const
{
    try
    {
        if(this->get_Signed())
        {
            if(executor.getGrade() <= this->get_gradeExecute())
            {
                std::cout << this->get_Target() << " has been pardoned by Zaphod Beeblebrox" << std::endl;
            }
            else
                throw std::out_of_range(" Bureaucrat Grade Not enough ");
        }
        else
            throw std::out_of_range(" Bureaucrat Form not signed ");
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
    
}

PresidentialPardonForm::~PresidentialPardonForm()
{
    std::cout << "{PresidentialPardonForm} Destructor has been called " << std::endl;
}