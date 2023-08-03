#include "Bureaucrat.hpp"


//TODO: The only thing left in this exercise is operator overload <<
 
int main()
{
    //* -----------------------------------------------------
    //* ------------- TRY & CATCH TESTING [SET GRADE] -------
    //* -----------------------------------------------------
   Bureaucrat a1;  
    a1.setGrade(1500);
    std::cout << a1.getGrade() << std::endl; 
    a1.setGrade(-1);
    std::cout << a1.getGrade() << std::endl; 
    a1.setGrade(25);
    std::cout << a1.getGrade() << std::endl; 

    //* -----------------------------------------------------
    //* ------------- TRY & CATCH TESTING [INCREMENT] -------
    //* -----------------------------------------------------
    
}