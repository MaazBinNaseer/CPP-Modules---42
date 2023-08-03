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
        std::cout << RED << "[Incorrect 1] Increment Value should be a positive value" << RESET << std::endl;
        return (FAILURE);
    }
    grade = grade + increment_value;
    return(grade);
}

int Bureaucrate::decrementGrade(int decrement_value)
{
    if (decrement_value < 0)
    {
        std::cout << RED << "[Incorrect 2] Decrement Value should be a positive integer value" << RESET << std::endl;
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
            throw Bureaucrate::GradeHigh();
        else if ( grade > 150)
            throw Bureaucrate::GradeLow();
    }
    catch (Bureaucrate::GradeHigh &e)
    {
        std::cout <<  RED << e.what() << RESET << std::endl;
    }
    catch (Bureaucrate::GradeLow &f)
    {
        std::cout <<  RED << f.what() << RESET << std::endl;
    }
    return (grade); 
}

Bureaucrate::~Bureaucrate()
{
    std::cout << "Destructor [Bureaucrate] is being called" << std::endl;
}

