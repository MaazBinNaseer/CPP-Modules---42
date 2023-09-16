#ifndef RPN_HPP
#define RPN_HPP

#include <iostream>
#include <exception>
#include <stack>

class RPN
{
    private:
        std::string _line;
    public:
        RPN();
        RPN(std::string line); //* Do i need this though ? 
        RPN(const RPN &obj);
        RPN& operator=(const RPN &value);
        void parseArguments(std::string line);

        ~RPN();

};



#endif 