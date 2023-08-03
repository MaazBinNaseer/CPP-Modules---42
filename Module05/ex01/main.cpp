#include "Bureaucrat.hpp"
#include "Form.hpp"
 
int main()
{
    //* ----------------------------------------------------------------
    //* ------------- TRY & CATCH TESTING [BUREAUCRAT][SET GRADE] -------
    //* -----------------------------------------------------------------
    Bureaucrat a1;  
    a1.setGrade(1500);
    std::cout << a1.getGrade() << std::endl; 
    a1.setGrade(-1);
    std::cout << a1.getGrade() << std::endl; 
    a1.setGrade(25);
    std::cout << a1.getGrade() << std::endl; 

    //* -------------------------------------------------------------------
    //* ------------- TRY & CATCH TESTING [BUREAUCRAT][INCREMENT] -------
    //* -------------------------------------------------------------------
    

    //* -------------------------------------------------------------------
    //* ------------- TRY & CATCH TESTING [FORM][BASIC] ------------------
    //* -------------------------------------------------------------------
    Form a3;
    Form a2("Trump Jr.", false, 10, 5);

    std::cout << a3 << std::endl;
    std::cout << a2 << std::endl;
}