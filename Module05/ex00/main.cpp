#include "Bureaucrat.hpp"


//TODO: The only thing left in this exercise is operator overload <<
 
int main()
{
    //* -----------------------------------------------------
    //* ------------- TRY & CATCH TESTING [INSTANTIATE] -------
    //* -----------------------------------------------------
    
    try 
    {
         Bureaucrat a1("Julia", 1900);
    }
    catch(Bureaucrat::GradeTooHigh &e)
    {
        std::cerr << RED << e.what() <<  RESET << std::endl;
    }

    //* -----------------------------------------------------
    //* ------------- TRY & CATCH TESTING [(+) and (-)] -------
    //* -----------------------------------------------------
    
    Bureaucrat a2("JOHN", 100);
    try
    {
        a2.incrementGrade(60);
        a2.getGrade();
    }
    catch(Bureaucrat::GradeTooHigh &e)
    {
        std::cerr << RED << e.what() <<  RESET << std::endl;
    }
    
    try
    {
        a2.decrementGrade(300);
        a2.getGrade();
    }
    catch(Bureaucrat::GradeTooLow& e)
    {
        std::cerr << RED << e.what() << RESET << std::endl;
    }
    

}