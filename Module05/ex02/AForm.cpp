/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbin-nas <mbin-nas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 15:53:31 by mbin-nas          #+#    #+#             */
/*   Updated: 2023/09/02 13:11:37 by mbin-nas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

AForm::AForm() : 
    name(""),
    gradeSigned(0),
    gradeExecute(0) {};

AForm::AForm(const std::string name,
            const int gradeSigned, 
            const int gradeExecute) :
    name(name),
    gradeSigned(gradeSigned),
    gradeExecute(gradeExecute) {
    if (gradeSigned > 150 || gradeExecute > 150)
        throw GradeTooLowException();
    else if (gradeSigned < 1 || gradeExecute < 1)
        throw GradeTooHighException();
}

AForm::AForm(const AForm &other) : 
    name(other.getName()),
    gradeSigned(other.getGradeSigned()), 
    gradeExecute(other.getGradeExecute()) {
    *this = other;
}

AForm &AForm::operator=(const AForm &other) {
    if (this != &other)
        isSigned = other.getIsSigned();
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
    return isSigned;
}

int AForm::getGradeSigned(void) const {
    return gradeSigned;
}

int AForm::getGradeExecute(void) const {
    return gradeExecute;
}

void    AForm::beSigned(Bureaucrat bureaucrat) {
    if (bureaucrat.getGrade() > gradeSigned)
        throw GradeTooLowException();
    isSigned = true;
}

std::ostream &operator<<(std::ostream &out, const AForm &form) {
    out << YELW << "Name: " << form.getName() << RESET << std::endl;
    out << YELW << "GradeSigned: " << form.getGradeSigned() <<  std::endl;
    out << "GradeExecute: " << form.getGradeExecute() <<  std::endl;
    out << "Signed? -> "; 
    if (form.getIsSigned() == true)
        out << "Yes!" << std::endl;
    else
        out << "No!" << std::endl;
    return out;
}