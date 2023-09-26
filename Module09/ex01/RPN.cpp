#include "RPN.hpp"


RPN::RPN() {}
RPN::RPN(const RPN& obj) { *this = obj;}
RPN & RPN::operator=(const RPN &obj){if(this != &obj){} return (*this);}

std::string RPN::parseArguments(char *args)
{
    std::string line = args;
    std::istringstream stream(line);
    std::string output; 
    while(std::getline(stream, output))
    {
        if(output.find_first_not_of("0123456789+-/* ") == std::string::npos)
        {
            std::cout << output << std::endl;
            return (output);
        }
        else
            throw std::runtime_error("Error: Incorrect opreations/digits");
    }
    return (NULL);
}

std::stack<char> RPN::getStackChar()
{
    return (this->rpn_char_container);
}

std::stack<int> RPN::getStackInt()
{
    return (this->rpn_int_container);
}

//* PEMDAS
void RPN::caluclateStack()
{
    int digit_1, digit_2;
    char operation;
    digit_2 = this->rpn_int_container.top();
    this->rpn_int_container.pop();
    digit_1 = this->rpn_int_container.top();
    this->rpn_int_container.pop();
    operation = this->rpn_char_container.top();
    this->rpn_char_container.pop();
    if(operation == '*')
        this->rpn_int_container.push(digit_1 * digit_2);
    else if (operation == '/' && digit_2 != 0)
        this->rpn_int_container.push(digit_1 / digit_2);
    else if (operation == '/' && digit_2 == 0)
        {std::cout << "Division by 0, Mathematical Error -__-\n" ;}
    else if (operation == '+')
        this->rpn_int_container.push(digit_1 + digit_2);
    else if (operation == '-')
        this->rpn_int_container.push(digit_1 - digit_2);

}


void RPN::fillStack(std::string line)
{
    int line_size = line.size();
    int number;

    for (int i = 0; i < line_size; i++)
    {
        if (line[i] != ' ')
        {
            if ((isdigit(line[i]) != 0 || (line[i] == '-' && (i == 0 || line[i - 1] == ' '))))
            {
                int start = i;
                while (i < line_size && (isdigit(line[i]) || (i == start && line[i] == '-')))
                    i++;
                number = atoi(line.substr(start, i - start).c_str());
                if (number >= -9 && number <= 9)
                {
                    this->rpn_int_container.push(number);
                }
                else
                {
                    std::cout << "Error: Number out of range (-9 to 9): " << number << std::endl;
                    return ;
                    // Handle the error as needed
                }
            }
            else
                this->rpn_char_container.push(line[i]);

            if (this->rpn_int_container.size() >= 2 && this->rpn_char_container.size() == 1)
                this->caluclateStack();
        }
    }
}






RPN::~RPN() {}