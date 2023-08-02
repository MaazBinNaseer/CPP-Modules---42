#ifndef BUREAUCRAT_CPP
#define BUREAUCRAT_CPP

#include <iostream>

class Bureaucrate
{
    private:
        int grade;
        std::string const name;
    public:
        Bureaucrate();
        void getName(std::string const name);
        void getGrade(int grade);
        void incrementGrade(int grade);
        void decrementGrade(int grade);
        ~Bureaucrate();
};





#endif