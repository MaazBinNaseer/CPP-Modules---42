/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbin-nas <mbin-nas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 15:56:09 by mbin-nas          #+#    #+#             */
/*   Updated: 2023/08/26 15:56:10 by mbin-nas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

#include <iostream>
#include "AForm.hpp"

class Intern {
private:

public:
    Intern();
    Intern(const Intern &other);
    Intern &operator=(const Intern &other);
    ~Intern();
    
    AForm *makeForm(const std::string &name, const std::string &target);
    class UnknownFormException : public std::exception {
    public:
        const char *what(void) const throw();
    };
};

#endif