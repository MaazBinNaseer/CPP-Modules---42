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
        int _grade;
        std::string const _name;
    public:
        Bureaucrat();
        Bureaucrat(const std::string name, int grade);

        void setGrade(int grade);

        std::string getName();
        int getGrade();

        int incrementGrade(int increment_value);
        int decrementGrade(int decrement_value);
        bool signForm(Form &form);
        
        ~Bureaucrat();
//* Exceptions
    class GradeHigh: public std::exception
    {
        public:
            virtual const char* what() const throw()
            {
                return  "Burecrate::GradeTooHigh";
            }

    };
    class GradeLow: public std::exception
    {
        public:
            virtual const char* what() const throw()
            {
                return  "Burecrate::GradeTooLow";
            }

    };
};

std::ostream& operator<<(std::ostream& os, const Bureaucrat& bureaucrat);

#endif