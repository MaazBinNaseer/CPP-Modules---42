#ifndef BUREAUCRAT_CPP
#define BUREAUCRAT_CPP

#include <iostream>
#include "Form.hpp"

#define SUCCESS 0
#define FAILURE 1
#define RED "\033[1;31m"
#define RESET "\033[0m"
#define GREEN "\033[1;32m"


class Form;

class Bureaucrat
{
    private:
        std::string const _name;
        int _grade;
    public:
        Bureaucrat();
        Bureaucrat(const std::string name, int grade);

        void setGrade(int grade);

        std::string getName() const;
        int getGrade();

        int incrementGrade(int increment_value);
        int decrementGrade(int decrement_value);
        void signForm(Form &form);
        
        ~Bureaucrat();
//* Exceptions
class GradeTooHigh: public std::exception
    {
        public:
            virtual const char* what() const throw();
    };
class GradeTooLow: public std::exception
    {
        public:
            virtual const char* what() const throw();
    };
};

std::ostream& operator<<(std::ostream& os,  Bureaucrat const &bureaucratREF);

#endif