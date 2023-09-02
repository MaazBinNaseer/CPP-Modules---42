/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbin-nas <mbin-nas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 15:53:58 by mbin-nas          #+#    #+#             */
/*   Updated: 2023/09/02 13:16:20 by mbin-nas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(): _name("Trump"), _IsSigned(false),  _gradeSign(5), _gradeExecute(10)
{
    std::cout << GREEN << "Default Constructor [Form] has been called " << RESET << std::endl;
}
Form::Form(const std::string name, const int gradeSign, const int gradeExecute): _name(name),  _gradeSign(gradeSign), _gradeExecute(gradeExecute)
{
    std::cout << GREEN << "Constructor [Form(name, gradeSign, gradeExecute)] has been called" << RESET << std::endl;
}

Form::Form(const Form& obj)
{
    *this = obj;
}

Form& Form::operator=(const Form& value)
{
    if( this != &value)
        this->_name = value._name;
    return (*this);
}


bool Form::get_Signed() const
{
    if(_IsSigned == true)
        return (_IsSigned);
    else if (_IsSigned == false)
        return (_IsSigned);
    else
        return (_IsSigned);
    return (_IsSigned);
}

const char* Form::GradeHighException::what() const throw()
{
    return ("\033[31mForm::GradeTooHigh: \033[0m ");
}

const char* Form::GradeLowException::what() const throw()
{
    return "\033[31mForm: GradeTooLow:\033[0m ";
}

void Form::beSigned(Bureaucrat &obj)
{
    if(obj.getGrade() > this->_gradeSign)
        throw Form::GradeLowException();
    else
        this->_IsSigned = true;
}
int Form::getGradeSign()const
{
    try
    {
        if(this->_gradeSign < 1)
            throw GradeLowException();
        else if (this->_gradeSign > 150)
            throw GradeHighException(); 
    }
    catch(const std::exception& e)
    {
        std::cout<< RED << e.what() << std::endl;
    }
    return (this->_gradeSign);
}

int Form::get_gradeExecute() const
{
    return (this->_gradeExecute);
}

std::string Form::getName()const
{
    return (this->_name);
}

Form::~Form()
{
    std::cout << GREEN << "Destructor [Form] was called " << RESET << std::endl;
}


//* Overloading the << operator to print out all the attributes of the form
std::ostream& operator<<(std::ostream &os, Form const &formREF)
{
    os <<  YELW << "Name of the Form: " << formREF.getName() << RESET << std::endl;
    os << YELW << "Grade Sign is: " << formREF.getGradeSign() << RESET << std::endl;
    os << YELW << "Execute Sign is: " << formREF.get_gradeExecute() << RESET << std::endl;
    os <<  YELW << "The form is signed (true or false): " << formREF.get_Signed() <<  RESET << std::endl;
    os << "----------------------------------------------- " << std::endl;
    return (os);
}