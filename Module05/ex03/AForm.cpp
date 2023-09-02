/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbin-nas <mbin-nas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 15:55:39 by mbin-nas          #+#    #+#             */
/*   Updated: 2023/08/26 15:55:40 by mbin-nas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

AForm::AForm() : 
    name(""),
    _gradeSigned(0),
    _gradeExecute(0) {};

AForm::AForm(const std::string name,
            const int gradeSigned, 
            const int gradeExecute) :
    name(name),
    _gradeSigned(gradeSigned),
    _gradeExecute(gradeExecute) {
    if (gradeSigned > 150 || gradeExecute > 150)
        throw GradeTooLowException();
    else if (gradeSigned < 1 || gradeExecute < 1)
        throw GradeTooHighException();
}

AForm::AForm(const AForm &other) : 
    name(other.getName()),
    _gradeSigned(other.getGradeSigned()), 
    _gradeExecute(other.getGradeExecute()) {
    *this = other;
}

AForm &AForm::operator=(const AForm &other) {
    if (this != &other)
        _isSigned = other.getIsSigned();
    return *this;
}

AForm::~AForm() {};

const char *AForm::GradeTooHighException::what(void) const throw() {
    return "Grade too high!!";
}

const char *AForm::GradeTooLowException::what(void) const throw() {
    return "Grade too low!!";
}

const char *AForm::NotSignedException::what(void) const throw() {
    return "AForm was not signed!!";
}

const std::string   AForm::getName(void) const {
    return name;
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
    out << "Name: " << form.getName() <<  std::endl;
    out << "GradeSigned: " << form.getGradeSigned() <<  std::endl;
    out << "GradeExecute: " << form.getGradeExecute() <<  std::endl;
    out << "Signed? -> "; 
    if (form.getIsSigned() == true)
        out << "Yes!" << std::endl;
    else
        out << "No!" << std::endl;
    return out;
}