#include "Bureaucrat.hpp"

Bureaucrate::Bureaucrate()
{
    std::cout << "Constructor [Bureaucrate] has been called" << std::endl ;
}

int Bureaucrate::setGrade(int grade)
{
    try
    {
        if (grade < 1)
            throw 12;
        else if ( grade > 150)
            throw 15;
    }
    catch(int errorCode)
    {
        if(errorCode == 12)
            std::cout << RED << "[Minimum Error] Less than 1 " << RESET << std::endl;
        else if (errorCode == 14)
            std::cout << RED << "[Maximum Error] More than 150 " << RESET << std::endl;
    }
    this->grade = grade;

    return (SUCCESS);
}

int Bureaucrate::getGrade()
{
    return (grade); 
}

Bureaucrate::~Bureaucrate()
{
    std::cout << "Destructor [Bureaucrate] is being called" << std::endl;
}

