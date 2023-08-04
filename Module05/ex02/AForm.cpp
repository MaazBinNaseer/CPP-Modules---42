#include "AForm.hpp"

AForm::AForm(): _name("Trump"), _IsSigned(false),  _gradeSign(5), _gradeExecute(10)
{
    std::cout << GREEN << "Default Constructor [AForm] has been called " << RESET << std::endl;
}
AForm::AForm(const std::string name, const int gradeSign, const int gradeExecute): _name(name),  _gradeSign(gradeSign), _gradeExecute(gradeExecute)
{
    std::cout << GREEN << "Constructor [AForm(name, gradeSign, gradeExecute)] has been called" << RESET << std::endl;
}

bool AForm::get_Signed() const
{
    if(_IsSigned == true)
        return (_IsSigned);
    else if (_IsSigned == false)
        return (_IsSigned);
    else
        return (_IsSigned);
    return (_IsSigned);
}

const char* AForm::GradeHigh::what() const throw()
{
    return ("\033[31mAForm::GradeTooHigh: \033[0m ");
}

const char* AForm::GradeLow::what() const throw()
{
    return "\033[31mAForm: GradeTooLow:\033[0m ";
}

void AForm::beSigned(Bureaucrat &obj)
{
    if(obj.getGrade() > this->_gradeSign)
        throw AForm::GradeLow();
    else
        this->_IsSigned = true;
}
int AForm::get_gradeSign()const
{
    try
    {
        if(this->_gradeSign < 1)
            throw GradeLow();
        else if (this->_gradeSign > 150)
            throw GradeHigh(); 
    }
    catch(const std::exception& e)
    {
        std::cout<< RED << e.what() << std::endl;
    }
    return (this->_gradeSign);
}

int AForm::get_gradeExecute() const
{
    return (this->_gradeExecute);
}

std::string AForm::getName()const
{
    return (this->_name);
}

AForm::~AForm()
{
    std::cout << GREEN << "Destructor [AForm] was called " << RESET << std::endl;
}


//* Overloading the << operator to print out all the attributes of the Aform
std::ostream& operator<<(std::ostream &os, AForm const &formREF)
{
    os << "Name of the Form: " << formREF.getName() << std::endl;
    os << "Grade Sign is: " << formREF.get_gradeSign() << std::endl;
    os << "Execute Sign is: " << formREF.get_gradeExecute() << std::endl;
    os << "The form is signed (true or false): " <<formREF.get_Signed() << std::endl;
    os << "----------------------------------------------- " << std::endl;
    return (os);
}