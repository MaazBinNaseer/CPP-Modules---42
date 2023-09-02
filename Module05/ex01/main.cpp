/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbin-nas <mbin-nas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 15:54:09 by mbin-nas          #+#    #+#             */
/*   Updated: 2023/09/02 13:21:44 by mbin-nas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
 
int main()
{
    //* -----------------------------------------------------
    //* ------------- TRY & CATCH TESTING [INSTANTIATE] -------
    //* -----------------------------------------------------
    
    try 
    {
         Bureaucrat a1("Julia", 1900);
    }
    catch(Bureaucrat::GradeTooHighException &e)
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
    catch(Bureaucrat::GradeTooHighException &e)
    {
        std::cerr << RED << e.what() <<  RESET << std::endl;
    }
    
    try
    {
        a2.decrementGrade(300);
        a2.getGrade();
    }
    catch(Bureaucrat::GradeTooLowException &e)
    {
        std::cerr << RED << e.what() << RESET << std::endl;
    }
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
    Bureaucrat bureaucrat_2("Barack Obama", 4);
    Form form_1("Form_1", 10, 10);
    Form form_2("Form_2", 80, 75);

    try {
		bureaucrat_1.signForm(form_1);
	}
	catch (std::exception &e) {
		std::cerr << e.what() << std::endl;
	}
    try {
		bureaucrat_2.signForm(form_2);
	}
	catch (std::exception &e) {
		std::cerr << RED << e.what() << std::endl;
	}
    std::cout << form_1 << std::endl;
    std::cout << form_2 << std::endl;

}