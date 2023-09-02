/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbin-nas <mbin-nas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 15:55:59 by mbin-nas          #+#    #+#             */
/*   Updated: 2023/09/01 15:28:04 by mbin-nas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <iostream>
#include "AForm.hpp"

#define SUCCESS 0
#define FAILURE 1
#define RED "\033[1;31m"
#define RESET "\033[0m"
#define GREEN "\033[1;32m"

class AForm;

class Bureaucrat {
private:
    const std::string   name;
    int                 grade;
    Bureaucrat();
public:
    Bureaucrat(const std::string name, int grade);
    Bureaucrat(const Bureaucrat &other);
    Bureaucrat &operator=(const Bureaucrat &other);
    ~Bureaucrat();

    const std::string   getName(void) const;
    int                 getGrade(void) const;
    void                increment(int amount);
    void                decrement(int amount);

	void                signForm(AForm &form);
    void                executeForm(AForm const &form);
    
//* Exceptions
    class GradeTooHighException : public std::exception {
    public:
        const char *what(void) const throw();
    };

    class GradeTooLowException : public std::exception {
    public:
        const char *what(void) const throw();
    };
};

std::ostream &operator<<(std::ostream &out, const Bureaucrat &bureaucrat);

#endif