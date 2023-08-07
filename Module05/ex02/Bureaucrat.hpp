#ifndef BUREAUCRAT_CPP
#define BUREAUCRAT_CPP

#include <iostream>
#include "AForm.hpp"

#define SUCCESS 0
#define FAILURE 1
#define RED "\033[1;31m"
#define RESET "\033[0m"
#define GREEN "\033[1;32m"


class AForm;

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
        int getGrade() const;

        int incrementGrade(int increment_value);
        int decrementGrade(int decrement_value);
        void signForm(AForm &form);
        void executeForm(AForm const &form);

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

std::ostream& operator<<(std::ostream& os,  Bureaucrat const &bureaucratREF);

#endif