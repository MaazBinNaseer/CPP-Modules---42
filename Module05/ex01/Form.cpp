#include "Form.hpp"

Form::Form(): _name("Trump"), _IsSigned(false),  _gradeSign(5), _gradeExecute(10)
{
    std::cout << GREEN << "Default Constructor [Form] has been called " << RESET << std::endl;
}
Form::Form(const std::string name, const int gradeSign, const int gradeExecute): _name(name),  _gradeSign(gradeSign), _gradeExecute(gradeExecute)
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

const char* Form::GradeHigh::what() const throw()
{
    return ("\033[31mForm::GradeTooHigh: \033[0m ");
}

const char* Form::GradeLow::what() const throw()
{
    return "\033[31mForm: GradeTooLow:\033[0m ";
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


//* Overloading the << operator to print out all the attributes of the form
std::ostream& operator<<(std::ostream &os, Form const &formREF)
{
    os << "Name of the Form: " << formREF.getName() << std::endl;
    os << "Grade Sign is: " << formREF.get_gradeSign() << std::endl;
    os << "Execute Sign is: " << formREF.get_gradeExecute() << std::endl;
    os << "The form is signed (true or false): " <<formREF.get_Signed() << std::endl;
    os << "----------------------------------------------- " << std::endl;
    return (os);
}