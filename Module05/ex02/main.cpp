/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbin-nas <mbin-nas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 15:54:35 by mbin-nas          #+#    #+#             */
/*   Updated: 2023/09/02 14:40:22 by mbin-nas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

void    testShrubberyCreation(void) {
    try {
        std::cout << "--- Test ShrubberyCreationForm ---" << std::endl;
        std::cout << std::endl;
        Bureaucrat b1("b1", 25);
        Bureaucrat b2("b2", 148);
        ShrubberyCreationForm shrubbery("shrubbery");
        shrubbery.beSigned(b1);
        std::cout << shrubbery << std::endl;
        b1.signForm(shrubbery);
        shrubbery.execute(b1);
        shrubbery.execute(b2);
        //b2.executeForm(shrubbery);
        std::cout << std::endl;
        std::cout << "--- Test ShrubberyCreationForm Finish ---" << std::endl;
    }
    catch(const std::exception& e) {
        std::cout << e.what() << std::endl;
        std::cout << std::endl;
        std::cout << "--- Test ShrubberyCreationForm Finish ---" << std::endl;
    }
}

void    testRobotomyRequestForm(void) {
    try {
        std::cout << "--- Test RobotomyRequestForm ---" << std::endl;
        std::cout << std::endl;
        Bureaucrat b1("b1", 25);
        Bureaucrat b2("b2", 80);
        RobotomyRequestForm robotomy("robotomy");
        robotomy.beSigned(b1);
        std::cout << robotomy << std::endl;
        b1.signForm(robotomy);
        robotomy.execute(b1);
        robotomy.execute(b2);
        b2.executeForm(robotomy);
        std::cout << std::endl;
        std::cout << "--- Test RobotomyRequestForm Finish ---" << std::endl;
    }
    catch(const std::exception& e) {
        std::cout << e.what() << std::endl;
        std::cout << std::endl;
        std::cout << "--- Test RobotomyRequestForm Finish ---" << std::endl;
    }
}

void    testPresidentialPardonForm(void) {
    try {
        std::cout << "--- Test PresidentialPardonForm ---" << std::endl;
        std::cout << std::endl;
        Bureaucrat b1("b1", 1);
        Bureaucrat b2("b2", 30);
        PresidentialPardonForm presidential("Mark Zuckerburg");
        presidential.beSigned(b1);
        std::cout << presidential << std::endl;
        b1.signForm(presidential);
        presidential.execute(b1);
        // presidential.execute(b2);
        b2.executeForm(presidential);
        presidential.execute(b2);
        std::cout << std::endl;
        std::cout << "--- Test PresidentialPardonForm Finish ---" << std::endl;
    }
    catch(const std::exception& e) {
        std::cout << e.what() << std::endl;
        std::cout << std::endl;
        std::cout << "--- Test PresidentialPardonForm Finish ---" << std::endl;
    }
}

int main() {
    // testShrubberyCreation();        
    // std::cout << std::endl;
    testRobotomyRequestForm();      
    std::cout << std::endl;
    // testPresidentialPardonForm();   
    // std::cout << std::endl;
    return (0);
}