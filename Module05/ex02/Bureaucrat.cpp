/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbin-nas <mbin-nas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 15:54:25 by mbin-nas          #+#    #+#             */
/*   Updated: 2023/08/26 15:54:26 by mbin-nas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"

Bureaucrat::Bureaucrat() : _name("") {};

Bureaucrat::Bureaucrat(const std::string name, int grade) : _name(name) {
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
    return "Grade too high!!";
}

const char *Bureaucrat::GradeTooLowException::what(void) const throw() {
    return "Grade too low!!";
}

const std::string Bureaucrat::getName(void) const {
    return _name;
}

int Bureaucrat::getGrade(void) const {
    return _grade;
}

void    Bureaucrat::increment(int amount) {
    if (_grade - amount < 1)
        throw GradeTooHighException();
    _grade -= amount;
}

void    Bureaucrat::decrement(int amount) {
    if (_grade + amount > 150)
        throw GradeTooLowException();
    _grade += amount;
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
        std::cout << this->getName() << " couldn’t executed " << form.getName() << " because " << e.what() << std::endl;
    }
}   

std::ostream &operator<<(std::ostream &out, const Bureaucrat &bureaucrat) {
    out << "Name: " << bureaucrat.getName() << ", Grade: " << bureaucrat.getGrade();
    return out;
}