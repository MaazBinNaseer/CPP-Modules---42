/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbin-nas <mbin-nas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 15:53:31 by mbin-nas          #+#    #+#             */
/*   Updated: 2023/09/02 13:30:42 by mbin-nas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

AForm::AForm() : _name(""), _gradeSigned(0), _gradeExecute(0) 
{};

AForm::AForm(const std::string name, const int gradeSigned, const int gradeExecute) : _name(name),  _gradeSigned(gradeSigned), _gradeExecute(gradeExecute) 
{
    if (gradeSigned > 150 || gradeExecute > 150)
        throw GradeTooLowException();
    else if (gradeSigned < 1 || gradeExecute < 1)
        throw GradeTooHighException();
}

AForm::AForm(const AForm &other) : _name(other.getName()), _gradeSigned(other.getGradeSigned()), _gradeExecute(other.getGradeExecute()) {
    *this = other;
}

AForm &AForm::operator=(const AForm &other) {
    if (this != &other)
        _isSigned = other.getIsSigned();
    return *this;
}

AForm::~AForm() {};

const char *AForm::GradeTooHighException::what(void) const throw() {
    return RED "Form: Grade too high!!" RESET;
}

const char *AForm::GradeTooLowException::what(void) const throw() {
    return  RED "Form: Grade too low!!" RESET;
}

const char *AForm::NotSignedException::what(void) const throw() {
    return RED "AForm was not signed!!" RESET;
}

const std::string   AForm::getName(void) const {
    return _name;
}

bool  AForm::getIsSigned(void) const {
    return _isSigned;
}

int AForm::getGradeSigned(void) const {
    return _gradeSigned;
}

int AForm::getGradeExecute(void) const {
    return _gradeExecute;
}

void    AForm::beSigned(Bureaucrat bureaucrat) {
    if (bureaucrat.getGrade() > _gradeSigned)
        throw GradeTooLowException();
    _isSigned = true;
}

std::ostream &operator<<(std::ostream &out, const AForm &form) {
    out << YELW << "Name: " << form.getName() << RESET << std::endl;
    out << YELW << "GradeSigned: " << form.getGradeSigned() << RESET << std::endl;
    out << YELW << "GradeExecute: " << form.getGradeExecute() << RESET << std::endl;
    out << "Signed? -> "; 
    if (form.getIsSigned() == true)
        out << GREEN << "Yes!" <<  RESET << std::endl;
    else
        out << RED << "No!" <<  RESET << std::endl;
    return out;
}