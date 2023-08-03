#include "Form.hpp"

Form::Form(): _name("Trump"), _IsSigned(false), _gradeExecute(10), _gradeSign(1)
{
    std::cout << GREEN << "Default Constructor [Form] has been called " << std::endl;
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

Form::~Form()
{
    std::cout << GREEN << "Destructor [Form] was called " << std::endl;
}

const char* Form::GradeHigh::what() const throw()
{
    return ("Form::GradeTooHigh");
}

const char* Form::GradeLow::what() const throw()
{
    return ("Form::GradeTooLow");
}