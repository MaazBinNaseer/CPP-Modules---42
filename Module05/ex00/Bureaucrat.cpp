#include "Bureaucrat.hpp"

Bureaucrate::Bureaucrate()
{
    std::cout << "Constructor [Bureaucrate] has been called" << std::endl ;
}


int Bureaucrate::setGrade(int grade)
{
    if(grade < 1)
    {
        std::cout << "[MIMINUM ERROR]: The grade value is less than 1" << std::endl;
        return (1);
    }
    else if(grade > 150)
    {
        std::cout << "[MAXIMUM ERROR]: The grade value is greater than 150 "  << std::endl;
        return (1);
    }
    this->grade = grade;
}

int Bureaucrate::getGrade(int grade)
{
    return (this->grade); 
}

