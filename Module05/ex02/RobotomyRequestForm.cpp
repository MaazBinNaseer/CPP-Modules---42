/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbin-nas <mbin-nas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 15:54:48 by mbin-nas          #+#    #+#             */
/*   Updated: 2023/08/26 15:54:49 by mbin-nas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(const std::string &target) 
    : AForm(target, 72, 45) {}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &other) 
    : AForm(other) {}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &other) {
    AForm::operator=(other);
    return (*this);
}

RobotomyRequestForm::~RobotomyRequestForm() {};

void    RobotomyRequestForm::execute(Bureaucrat const &executor) const {
	if (this->getIsSigned() == false)
		throw AForm::NotSignedException();
	if (executor.getGrade() > this->getGradeExecute())
		throw AForm::GradeTooLowException();
    std::srand((unsigned int)time(NULL));
    if (std::rand() % 2 == 1)
        std::cout << "Robotomy Success!!" << std::endl;
    else
        std::cout << "Robotomy Fail!!" << std::endl;
}