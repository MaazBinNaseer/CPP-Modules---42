#include "Bureaucrat.hpp"


//TODO: The only thing left in this exercise is operator overload <<
 
int main()
{
    //* -----------------------------------------------------
    //* ------------- TRY & CATCH TESTING [SET GRADE] -------
    //* -----------------------------------------------------
   Bureaucrate a1;  
    a1.setGrade(1500);
    std::cout << a1.getGrade() << std::endl; 
    a1.setGrade(-1);
    std::cout << a1.getGrade() << std::endl; 
    a1.setGrade(25);
    std::cout << a1.getGrade() << std::endl; 

    //* -----------------------------------------------------
    //* ------------- TRY & CATCH TESTING [INCREMENT] -------
    //* -----------------------------------------------------
    Bureaucrate a2;
    a2.setGrade(40);
    a2.incrementGrade(10);
    std::cout << a2.getGrade() << std::endl; 

}