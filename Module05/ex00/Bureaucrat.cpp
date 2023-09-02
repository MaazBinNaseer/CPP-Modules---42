/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbin-nas <mbin-nas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 15:53:39 by mbin-nas          #+#    #+#             */
/*   Updated: 2023/09/02 13:18:25 by mbin-nas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(): _name("lol")
{
    std::cout << "Constructor [Bureaucrat] has been called" << std::endl ;
}

Bureaucrat::Bureaucrat(std::string const name, int grade): _name(name), _grade(grade)
{
    std::cout << "Constructor [Bureaucrat(name, grade)] has been called" << std::endl;
    if(grade > 150) 
        throw GradeTooHighException();
    else if( grade < 1)
        throw GradeTooLowException();

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

std::string  Bureaucrat::getName() const
{
    return (this->_name);
}

void Bureaucrat::setGrade(int grade)
{
    this->_grade = grade;
}

int Bureaucrat::incrementGrade(int increment_value)
{
    if (increment_value < 0)
    {
        std::cout << RED << "[Incorrect 1] Increment Value should be a positive value" << RESET << std::endl;
        return (FAILURE);
    }
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
    this->_grade -= decrement_value;
    return (this->_grade);
}

int Bureaucrat::getGrade() const
{
        if (_grade < 1)
            throw Bureaucrat::GradeTooLowException();
        else if (_grade > 150)
            throw Bureaucrat::GradeTooHighException();
    return (_grade); 
}


const char* Bureaucrat::GradeTooHighException::what() const throw()
{
    return (" BureaucratException:: GradeTooHigh ");
}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
    return ("BureaucratException:: GradeTooLow");
}

Bureaucrat::~Bureaucrat()
{
    std::cout << "Destructor [Bureaucrat] is being called" << std::endl;
}

std::ostream& operator<<(std::ostream& os, Bureaucrat const &bureaucratREF)
{
    std::cout << YELW ;
    os << bureaucratREF.getName() << " bureacucrat Name | " <<  bureaucratREF.getGrade() << " bureaucrate Grade" << std::endl; 
    std::cout << RESET;
    return (os);
}

