#include "Bureaucrat.hpp"

int main()
{
    //* -----------------------------------------
    //* ------------- TRY & CATCH TESTING -------
    //* -----------------------------------------
   Bureaucrate a1;  
    a1.setGrade(15);
    a1.incrementGrade(150);
    std::cout << a1.getGrade() << std::endl; 
    
}