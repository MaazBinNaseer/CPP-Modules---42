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
            std::cout << "[Minimum Error] Less than 1 " << std::endl;
        else if (errorCode == 14)
            std::cout << "[Maximum Error] More than 150 " << std::endl;
    }
    this->grade = grade;
}

int Bureaucrate::getGrade()
{
    return (grade); 
}

Bureaucrate::~Bureaucrate()
{
    std::cout << "Destructor [Bureaucrate] is being called" << std::endl;
}

