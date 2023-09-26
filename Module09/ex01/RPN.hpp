#ifndef RPN_HPP
#define RPN_HPP

#include <iostream>
#include <exception>
#include <stack>
#include <string>
#include <algorithm>
#include <sstream>

class RPN
{
    private:
        std::string _line;
        std::stack<char> rpn_char_container;
        std::stack<int> rpn_int_container;
    public:
        RPN();
        RPN(std::string line); //* Do i need this though ? 
        RPN(const RPN &obj);
        RPN& operator=(const RPN &value);
        std::string parseArguments(char *args);
        std::stack<int> getStackInt();
        std::stack<char> getStackChar();
        void caluclateStack();
        int convertString(std::string line);
        void fillStack(std::string line);
        void printResult();

        ~RPN();

};



#endif 