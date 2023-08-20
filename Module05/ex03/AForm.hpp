#ifndef FORM_HPP
# define FORM_HPP

#include <iostream>
#include <fstream>
#include "Bureaucrat.hpp"

class Bureaucrat;

class AForm {
private:
    const std::string   name;
    bool                isSigned;
    const int           gradeSigned;
    const int           gradeExecute;
    AForm();
public:
    AForm(const std::string name, const int gradeSigned, const int gradeExecute);
    AForm(const AForm &other);
    AForm &operator=(const AForm &other);
    virtual ~AForm();

    class GradeTooHighException : public std::exception {
    public:
        const char *what(void) const throw();
    };

    class GradeTooLowException : public std::exception {
    public:
        const char *what(void) const throw();
    };

    class NotSignedException : public std::exception {
    public:
        const char *what(void) const throw();
    };

    const std::string   getName(void) const;
    bool                getIsSigned(void) const;
    int                 getGradeSigned(void) const;
    int                 getGradeExecute(void) const;

    void                beSigned(Bureaucrat bureaucrat);
    void                signForm(Bureaucrat bureaucrat);
    virtual void        execute(Bureaucrat const &executor) const = 0;
};

std::ostream &operator<<(std::ostream &out, const AForm &Form);

#endif