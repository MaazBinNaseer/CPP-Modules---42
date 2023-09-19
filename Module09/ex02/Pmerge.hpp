#ifndef PMERGE_HPP
#define PMERGE_HPP

#include <iostream>
#include <set>
#include <iterator>
#include <vector>
#include <exception>
#include <sstream>
#include <cstdlib>
#include <algorithm>


void printVector(std::vector<int> &container);

class Pmerge
{
    private:
        std::vector<int> _vint;
        std::set<int>  _dint;
    public:
        Pmerge();
        Pmerge(const Pmerge &obj);
        Pmerge& operator=(const Pmerge& obj);
        
        int parseArguments(std::string line);
        void getDeque();
        void getVector();
        // bool CheckForDuplicates(std::string line);
        void fillVector(int value);  
        void sortVector(int value);
        ~Pmerge();      

};


#endif 