#ifndef BUREAUCRAT_CPP
#define BUREAUCRAT_CPP
#include <iostream>

#define SUCCESS 0
#define FAILURE 1

#define RED "\033[1;31m"
#define RESET "\033[0m"
class Bureaucrate
{
    private:
        int grade;
        std::string const name;
    public:
        Bureaucrate();
        std::string setName(std::string const name);
        int setGrade(int grade);
        std::string getName(std::string const name);
        int getGrade();
        int incrementGrade(int increment_value);
        int decrementGrade(int decrement_value);
        ~Bureaucrate();
};





#endif