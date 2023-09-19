#ifndef PMERGE_HPP
#define PMERGE_HPP

#include <iostream>
#include <deque>
#include <vector>
#include <exception>

void printDeque(std::deque<int> &container);
void printVector(std::vector<int> &container);


class Pmerge
{
    private:
        std::vector<int> _vint;
        std::deque<int>  _dint;
    public:
        Pmerge();
        Pmerge(const Pmerge &obj);
        Pmerge& operator=(const Pmerge& obj);
        
        void parseArguments(std::string line);
        void getDeque();
        void getVector();   

        ~Pmerge();      

};


#endif 