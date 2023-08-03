#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat()
{
    std::cout << "Default Constructor [Bureaucrat] has been called" << std::endl ;
}

Bureaucrat::Bureaucrat(const std::string name, int grade): _name(name), _grade(grade)
{
    std::cout << "Constrcutor [Burecucrate(string, grade)] has been called" << std::endl;
}

std::string Bureaucrat::getName()
{
    return (this->_name);
}

void Bureaucrat::setGrade(int grade)
{
    this->_grade = grade;
}

int Bureaucrat::incrementGrade(int increment_value)
{
    if (increment_value < 0)
    {
        std::cout << RED << "[Incorrect 1] Increment Value should be a positive value" << RESET << std::endl;
        return (FAILURE);
    }
   this->_grade +=  increment_value;
    return(this->_grade);
}

int Bureaucrat::decrementGrade(int decrement_value)
{
    if (decrement_value < 0)
    {
        std::cout << RED << "[Incorrect 2] Decrement Value should be a positive integer value" << RESET << std::endl;
        return (FAILURE);
    }
    this->_grade -= decrement_value;
    return (this->_grade);
}

int Bureaucrat::getGrade()
{
    try
    {
        if (_grade < 1)
            throw Bureaucrat::GradeHigh();
        else if ( _grade > 150)
            throw Bureaucrat::GradeLow();
    }
    catch (Bureaucrat::GradeHigh &e)
    {
        std::cout <<  RED << e.what() << RESET << std::endl;
    }
    catch (Bureaucrat::GradeLow &f)
    {
        std::cout <<  RED << f.what() << RESET << std::endl;
    }
    return (_grade); 
}

// bool Bureaucrat::signForm(Form &form)
// {
//     form.beSigned = true;
// }


Bureaucrat::~Bureaucrat()
{
    std::cout << "Destructor [Bureaucrat] is being called" << std::endl;
}

std::ostream& operator<<(std::ostream& os, Bureaucrat &bureaucratREF)
{
    os << bureaucratREF.getName() << "bureacucrat grade " << std::endl; 
}

