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

    class UnknownFormException : public std::exception {
    public:
        const char *what(void) const throw();
    };

    AForm *makeForm(const std::string &name, const std::string &target);
};

#endif