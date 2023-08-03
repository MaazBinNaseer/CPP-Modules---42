#include "Form.hpp"

Form::Form(): _name("Trump"), _IsSigned(false),  _gradeSign(1), _gradeExecute(10)
{
    std::cout << GREEN << "Default Constructor [Form] has been called " << RESET << std::endl;
}
Form::Form(const std::string name, bool isSigned, const int gradeSign, const int gradeExecute): _name(name), _IsSigned(isSigned), _gradeSign(gradeSign), _gradeExecute(gradeExecute)
{
    std::cout << GREEN << "Constructor [Form(name, isSigned, gradeSign, gradeExecute)] has been called" << RESET << std::endl;
}

bool Form::get_Signed() const
{
    if(_IsSigned == true)
        return (_IsSigned);
    else if (_IsSigned == false)
        return (_IsSigned);
    else
        return (_IsSigned);
    return (_IsSigned);
}

void Form::beSigned(Bureaucrat &obj)
{
    if(obj.getGrade() > this->_IsSigned)
        throw Form::GradeLow();
    else
        this->_IsSigned = true;
}
int Form::get_gradeSign()const
{
    return (this->_gradeSign);
}

int Form::get_gradeExecute() const
{
    return (this->_gradeExecute);
}

std::string Form::getName()const
{
    return (this->_name);
}

Form::~Form()
{
    std::cout << GREEN << "Destructor [Form] was called " << RESET << std::endl;
}

const char* Form::GradeHigh::what() const throw()
{
    return ("Form::GradeTooHigh");
}

const char* Form::GradeLow::what() const throw()
{
    return ("Form::GradeTooLow");
}
//* Overloading the << operator to print out all the attributes of the form
std::ostream& operator<<(std::ostream &os, Form const &formREF)
{
    os << "Name of the Form: " << formREF.getName() << std::endl;
    os << "Grade Sign is: " << formREF.get_gradeSign() << std::endl;
    os << "Execute Sign is: " << formREF.get_gradeExecute() << std::endl;
    os << "The form is signed (true or false): " <<formREF.get_Signed(); 
    return (os);
}