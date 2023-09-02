/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbin-nas <mbin-nas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 15:53:54 by mbin-nas          #+#    #+#             */
/*   Updated: 2023/09/02 13:13:05 by mbin-nas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_CPP
#define BUREAUCRAT_CPP

#include <iostream>
#include "Form.hpp"

#define SUCCESS 0
#define FAILURE 1
#define RED "\033[1;31m"
#define RESET "\033[0m"
#define GREEN "\033[1;32m"
#define YELW "\033[1;33m" 

class Form;

class Bureaucrat
{
    private:
        std::string _name;
        int _grade;
    public:
        Bureaucrat();
        Bureaucrat(const std::string name, int grade);
        Bureaucrat(const Bureaucrat& value);
        Bureaucrat& operator=(const Bureaucrat& obj);
        void setGrade(int grade);

        std::string getName() const;
        int getGrade() const;

        int incrementGrade(int increment_value);
        int decrementGrade(int decrement_value);
        void signForm(Form &form);
        
        ~Bureaucrat();
//* Exceptions
class GradeTooHighException: public std::exception
    {
        public:
            virtual const char* what() const throw();
    };
class GradeTooLowException: public std::exception
    {
        public:
            virtual const char* what() const throw();
    };
};

std::ostream& operator<<(std::ostream& os,  Bureaucrat const &bureaucratREF);

#endif