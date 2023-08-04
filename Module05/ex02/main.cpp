#include "Bureaucrat.hpp"
#include "Form.hpp"
 
int main()
{
    //* ----------------------------------------------------------------
    //* ------------- TRY & CATCH TESTING [BUREAUCRAT][SET GRADE] -------
    //* -----------------------------------------------------------------
    Bureaucrat a1;  
    a1.setGrade(1500);
    a1.setGrade(-1);
    // std::cout << a1.getGrade() << std::endl; 

    //* -----------------------------------------------------------------------------
    //* ------------- TRY & CATCH TESTING [BUREAUCRAT][INCREMENT & DECREMENT] -------
    //* -----------------------------------------------------------------------------
    a1.setGrade(15);
    a1.incrementGrade(14);
    std::cout << a1.getGrade() << std::endl;
    a1.setGrade(15);
    a1.decrementGrade(14);
    std::cout << a1.getGrade() << std::endl;
    std::cout << "--------------------------------------------------------" << std::endl;

    //* -------------------------------------------------------------------
    //* ------------- TRY & CATCH TESTING [FORM][BASIC] ------------------
    //* -------------------------------------------------------------------
    // Form a3;
    // Form a2("Trump Jr.", 10, 5);
    // Form a4("Fail Biden", 123456, 10);
    // std::cout << a3 << std::endl;
    // std::cout << a2 << std::endl;

    //* -----------------------------------------------------------------------
    //* ------------- TRY & CATCH TESTING [FORM][BUREACURAT] ------------------
    //* -----------------------------------------------------------------------

    Bureaucrat bureaucrat_1("Nixon", 6);
    Bureaucrat bureaucrat_2("Barack Obama", 75);
    Form form_1("Form_1", 5, 10);
    Form form_2("Form_2", 85, 10);

  try {
		bureaucrat_1.signForm(form_1);
	}
	catch (std::exception &e) 
  {
		std::cerr << e.what() << std::endl;
	}
    std::cout << form_2 << std::endl;


    
  try {
		bureaucrat_2.signForm(form_2);
	}
	catch (std::exception &e) {
		std::cerr << RED << e.what() << std::endl;
	}

}