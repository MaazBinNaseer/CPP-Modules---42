#ifndef FORM_HPP
#define FORM_HPP
#include "Bureaucrat.hpp"

class Bureaucrat;
class Form
{
    private:
        const std::string  name;
        bool IsSigned;
        const int gradeSign;
        const int gradeExecute; 
    public:
        Form();
        std::string getName() const;
        bool get_Signed()const; 
        void beSigned(Bureaucrate const &obj);
        ~Form();

};

std::ostream &operator<<(std::ostream &out, Form const &other);

#endif