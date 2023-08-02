#include "Bureaucrat.hpp"

Bureaucrate::Bureaucrate(): name("EHSAN")
{
    std::cout << "Constructor [Bureaucrate] has been called" << std::endl ;
}

std::string Bureaucrate::getName()
{
    return (this->name);
}

void Bureaucrate::setGrade(int grade)
{
    this->grade = grade;
}

int Bureaucrate::incrementGrade(int increment_value)
{
    if (increment_value < 0)
    {
        std::cout << RED << "[Incorrect 1] Increment Value should be in positive values" << RESET << std::endl;
        return (FAILURE);
    }
    grade = grade + increment_value;
    return(grade);
}

int Bureaucrate::decrementGrade(int decrement_value)
{
    if (decrement_value < 0)
    {
        std::cout << RED << "[Incorrect 2] Decrement Value should be in positive integer values" << RESET << std::endl;
        return (FAILURE);
    }
    grade = grade - decrement_value;
    return (grade);
}

int Bureaucrate::getGrade()
{
    try
    {
        if (grade < 1)
            throw 12;
        else if ( grade > 150)
            throw 15;
    }
    catch (int errorCode)
    {
        if(errorCode == 12)
            std::cout << RED << "Bureaucrat::GradeTooLowException" << RESET << std::endl;
        else if (errorCode == 15)
            std::cout << RED << "Bureaucrat::GradeTooHighException" << RESET << std::endl;
        return (FAILURE);
    }
    return (grade); 
}

Bureaucrate::~Bureaucrate()
{
    std::cout << "Destructor [Bureaucrate] is being called" << std::endl;
}

