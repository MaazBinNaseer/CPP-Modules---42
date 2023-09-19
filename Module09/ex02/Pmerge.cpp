#include "Pmerge.hpp"

Pmerge::Pmerge() {}

Pmerge::Pmerge(const Pmerge& value) {*this = value;}

Pmerge& Pmerge::operator=(const Pmerge &value) {if(this != &value) {} return (*this);}


void printVector(std::vector<int> &container)
{
    for (std::vector<int>::iterator it = container.begin(); it != container.end(); ++it) {
        std::cout << *it << " ";
    }
    std::cout << std::endl;
}

void Pmerge::getVector()
{
    printVector(this->_vint);
}

int Pmerge::parseArguments(std::string line)
{
    int x = line.length();
    std::istringstream stream(line);
    std::string output;
    while(std::getline(stream, output))
    {
        for(int i = 0; i < x; i++)
        {
            if(output[i] != ' ' && !isdigit(output[i]) && output[i] != '+') 
            {
                std::cout << "Not a digit number: " << output[i] << std::endl;
                return (-1);
            }
        }
    }
    //* Convert the string to integer at the end
    char* endptr;
    long int value = strtol(line.c_str(), &endptr, 10);
    if (*endptr != '\0') {
        std::cout << "Conversion error. Invalid characters found after the number: " << endptr << std::endl;
        return (-1);
    }
    return (static_cast<int>(value));
}

void Pmerge::fillVector(int value)
{
    this->_vint.push_back(value);
}



Pmerge::~Pmerge() {}