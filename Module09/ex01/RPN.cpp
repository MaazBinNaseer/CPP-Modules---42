#include "RPN.hpp"


RPN::RPN() {}
RPN::RPN(const RPN& obj) { *this = obj;}

std::string RPN::parseArguments(char *args)
{
    std::string line = args;
    std::istringstream stream(line);
    std::string output; 
    while(std::getline(stream, output))
    {
        if(output.find_first_not_of("0123456789+-/* ") == std::string::npos)
        {
            // std::cout << output << std::endl;
            return (output);
        }
        else
            throw std::runtime_error("Error: Incorrect opreations/digits");
    }
    return (NULL);
}

RPN &RPN::operator=(const RPN &rhs)
{
    if (this != &rhs)
    {
		this->rpn_char_container = rhs.rpn_char_container;
        this->rpn_int_container = rhs.rpn_int_container;
    }
    return (*this);
}

std::stack<char, std::list<char> > RPN::getStackChar()
{
    return (this->rpn_char_container);
}

std::stack<int, std::list<int> > RPN::getStackInt()
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
        {std::cout << "Error: Division by 0, Mathematical Error -__-\n" ;}
    else if (operation == '+')
        this->rpn_int_container.push(digit_1 + digit_2);
    else if (operation == '-')
        this->rpn_int_container.push(digit_1 - digit_2);

}


void RPN::fillStack(std::string line)
{
    std::istringstream iss(line);
    if(line.empty())
    {
        std::cout << "Error: No input in the string" << std::endl;
        return ;
    }
    std::string token;
    int number;
    while (getline(iss, token, ' '))
    {
        if (token.empty())
            continue;

        // Check if the token is a number or a negative number
        if ((token[0] == '-' && token.size() > 1 && token[1] >= '0' && token[1] <= '9') || (token[0] >= '0' && token[0] <= '9'))
        {        
            number = atoi(token.c_str());
            if(number > 9 || number < -9)
            {
                throw std::runtime_error("Error: Invalid number between -9 to 9.");
            }
            this->rpn_int_container.push(number);
        }
        else
        {
            // Assuming only one character operations. Modify this part if there are multi-character operations
            this->rpn_char_container.push(token[0]);
        }

        if (this->rpn_int_container.size() >= 2 && this->rpn_char_container.size() == 1)
            this->caluclateStack();
    }
    
    // Check if there's an operator left but not enough operands
    if (!this->rpn_char_container.empty() && this->rpn_int_container.size() < 2)
    {
        throw std::runtime_error("Error: Not enough operands for the operators provided.");
    }
    
    // Check if there are too many numbers left
    if (this->rpn_int_container.size() > 1 && this->rpn_char_container.empty())
    {
        throw std::runtime_error("Error: Too many numbers provided without sufficient operations.");
    }
}

void RPN::printResult()
{
    if (rpn_int_container.size() == 1 && rpn_char_container.empty()) {
        std::cout << "Result: " << rpn_int_container.top() << std::endl;
    }
}

RPN::~RPN() {}