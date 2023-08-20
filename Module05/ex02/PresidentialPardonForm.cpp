#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(const std::string &target) 
    : AForm(target, 25, 5) {}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &other) 
    : AForm(other) {}

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &other) {
    AForm::operator=(other);
    return (*this);
}

PresidentialPardonForm::~PresidentialPardonForm() {};

void    PresidentialPardonForm::execute(Bureaucrat const &executor) const {
	if (this->getIsSigned() == false)
		throw AForm::NotSignedException();
	if (executor.getGrade() > this->getGradeExecute())
		throw AForm::GradeTooLowException();
    std::cout << this->getName() << " has been pardoned by Zaphod Beeblebrox." << std::endl;
}