#include "Form.hpp"

Form::Form(): name("Trump"), IsSigned(false), gradeExecute(10), gradeSign(1)
{
    std::cout << GREEN << "Default Constructor [Form] has been called " << std::endl;
}






Form::~Form()
{
    std::cout << GREEN << "Destructor [Form] was called " << std::endl;
}
