/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbin-nas <mbin-nas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 15:53:51 by mbin-nas          #+#    #+#             */
/*   Updated: 2023/08/26 15:53:52 by mbin-nas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(): _name("LOL"), _grade(10)
{
    std::cout << "Default Constructor [Bureaucrat] has been called" << std::endl ;
}

Bureaucrat::Bureaucrat(const std::string name, int grade): _name(name), _grade(grade)
{
    std::cout << "Constrcutor [Burecucrate(string, grade)] has been called" << std::endl;
    if(grade > 150) 
        throw GradeTooHigh();
    else if( grade < 1)
        throw GradeTooLow();
}
Bureaucrat::Bureaucrat(const Bureaucrat& value)
{
    std::cout << "Copy Constructor [Bureaucrate constructor] is called" << std::endl;
    *this = value;
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

std::string Bureaucrat::getName() const
{
    return (this->_name);
}

void Bureaucrat::setGrade(int grade)
{    
        if (_grade < 1)
            throw Bureaucrat::GradeTooHigh();
        else if ( _grade > 150)
            throw Bureaucrat::GradeTooLow();
    this->_grade = grade;
}

int Bureaucrat::incrementGrade(int increment_value)
{
    if (increment_value < 0)
    {
        std::cout << RED << "[Incorrect 1] Increment Value should be a positive value" << RESET << std::endl;
        return (FAILURE);
    }
        if (_grade < 1)
            throw Bureaucrat::GradeTooHigh();
        else if ( _grade > 150)
            throw Bureaucrat::GradeTooLow();
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
            throw Bureaucrat::GradeTooHigh();
        else if ( _grade > 150)
            throw Bureaucrat::GradeTooLow();
    this->_grade -= decrement_value;
    return (this->_grade);
}

int Bureaucrat::getGrade()
{
    return (_grade); 
}

void Bureaucrat::signForm(Form &form)
{
    try
    {
        form.beSigned(*this);
        std::cout << this->_name << " signed " << form.getName() << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << this->_name << " couldn't sign the " << form.getName() << std::endl;
    }

}
const char* Bureaucrat::GradeTooHigh::what() const throw()
{
    return (" GradeTooHigh ");
}

const char* Bureaucrat::GradeTooLow::what() const throw()
{
    return (" GradeTooLow ");
}

Bureaucrat::~Bureaucrat()
{
    std::cout << "Destructor [Bureaucrat] is being called" << std::endl;
}

std::ostream& operator<<(std::ostream& os,  Bureaucrat const &bureaucratREF)
{
    os << bureaucratREF.getName() << " bureacucrat grade " << std::endl; 
    return (os);
}

