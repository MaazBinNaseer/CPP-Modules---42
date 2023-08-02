#ifndef FORM_HPP
#define FORM_HPP
#include "Bureaucrat.hpp"

class Form
{
    private:
        const std::string  name;
        bool IsSigned;
        const int gradeSign;
        const int gradeExecute; 
    public:
        Form();
        Form(std::string name, int grade_sign, int grade_exexute);
        Form(Form const &object);
        std::string getName() const;
        bool get_Signed()const; 
        void beSigned(Bureaucrate const &obj);
         

};

std::ostream &operator<<(std::ostream &out, Form const &other);

#endif