/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbin-nas <mbin-nas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 15:54:25 by mbin-nas          #+#    #+#             */
/*   Updated: 2023/09/02 14:28:21 by mbin-nas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"

Bureaucrat::Bureaucrat() : _name("") {};

Bureaucrat::Bureaucrat(const std::string name, int grade) : _name(name) {
    std::cout << "Bureaucrate(string_name, grade) is called" <<std::endl;
    if (grade > 150)
        throw GradeTooLowException();
    else if (grade < 1)
        throw GradeTooHighException();
    this->_grade = grade;
}

Bureaucrat::Bureaucrat(const Bureaucrat &other) :
    _name(other.getName()) {
    *this = other;
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& obj)
{
    if(this != &obj)
        {
            this->_grade = obj._grade;
            this->_name = obj._name;
        }
    std::cout << "Copy Assignment [Bureaucrat] is called" <<std::endl;
    return (*this);
}

Bureaucrat::~Bureaucrat() {};

const char *Bureaucrat::GradeTooHighException::what(void) const throw() {
    return ("BureaucratException:: Grade Too High!");
}

const char *Bureaucrat::GradeTooLowException::what(void) const throw() {
    return ("BureaucratException:: Grade Too Low!");
}

const std::string Bureaucrat::getName(void) const {
    return (_name);
}

int Bureaucrat::getGrade(void) const {
    return (_grade);
}

int Bureaucrat::incrementGrade(int increment_value)
{
    if (increment_value < 0)
    {
        std::cout << RED << "[Incorrect 1] Increment Value should be a positive value" << RESET << std::endl;
        return (FAILURE);
    }
        if (_grade < 1)
            throw Bureaucrat::GradeTooHighException();
        else if ( _grade > 150)
            throw Bureaucrat::GradeTooLowException();
   this->_grade +=  increment_value;
    return(this->_grade);
}

int Bureaucrat::decrementGrade(int decrement_value)
{
    if (decrement_value < 0)
    {
        std::cout << RED << "[Incorrect 2] Decrement Value should be a positive integer value" << RESET << std::endl;
        return (FAILURE);
    }
        if (_grade < 1)
            throw Bureaucrat::GradeTooHighException();
        else if ( _grade > 150)
            throw Bureaucrat::GradeTooLowException();
    this->_grade -= decrement_value;
    return (this->_grade);
}

void    Bureaucrat::signForm(AForm &form) {
    try {
        form.beSigned(*this);
        std::cout << this->getName() << " signed " << form.getName() << std::endl;
    }
    catch(const std::exception& e) {
        std::cout << this->getName() << " couldn’t sign " << form.getName() << " because " << e.what() << std::endl;
    }
    
}

void    Bureaucrat::executeForm(AForm const &form) {
    try {
        form.execute(*this);
        std::cout << this->getName() << " executed " << form.getName() << std::endl;
    }
    catch(const std::exception& e) {
        std::cout << RED << this->getName() << " couldn’t executed " << form.getName() << " because " << e.what() << RESET << std::endl;
    }
}   

std::ostream &operator<<(std::ostream &os, const Bureaucrat &bureaucratREF) {
    
    std::cout << YELW ;
    os << bureaucratREF.getName() << " bureacucrat Name | " <<  bureaucratREF.getGrade() << " bureaucrate Grade" << std::endl; 
    std::cout << RESET;
    
    return (os);
}