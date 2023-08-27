#ifndef FORM_HPP
#define FORM_HPP
#include "Bureaucrat.hpp"

class Bureaucrat;
class Form
{
    private:
        std::string  _name;
        bool _IsSigned;
        int _gradeSign;
        int _gradeExecute; 
    public:
        Form();
        Form(const std::string name, const int gradeSign, const int gradeExecute);
        Form (const Form& obj);
        Form& operator=(const Form& value);
        
        std::string getName() const;
        bool get_Signed()const;
        int get_gradeSign() const;
        int get_gradeExecute() const; 
        
        void beSigned(Bureaucrat &obj);
        ~Form();
//* Exception Form Version
    class GradeHigh: public std::exception
    {
        public:
            virtual const char* what() const throw();    
    };
    class GradeLow: public std::exception
    {
        public:
            virtual const char* what() const throw();
    };
};
std::ostream &operator<<(std::ostream &out, Form const &other);

#endif