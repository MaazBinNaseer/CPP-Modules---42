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
        void setName(std::string const name);
        int setGrade(int grade);
        void getName(std::string const name);
        int getGrade(int grade);
        void incrementGrade(int grade);
        void decrementGrade(int grade);
        ~Bureaucrate();
};





#endif