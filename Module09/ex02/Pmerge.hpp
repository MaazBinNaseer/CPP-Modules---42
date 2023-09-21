#ifndef PMERGE_HPP
#define PMERGE_HPP

#include <iostream>
#include <deque>
#include <iterator>
#include <vector>
#include <exception>
#include <sstream>
#include <cstdlib>
#include <algorithm>
#include <time.h>
#include <iomanip>


void printVector(std::vector<int> &container);
void printDeque(std::deque<int> &container);

class Pmerge
{
    private:
        std::vector<int> _vint;
        std::deque<int>  _dint;
        static const int insertion_thershold = 5;

    public:
        Pmerge();
        Pmerge(const Pmerge &obj);
        Pmerge& operator=(const Pmerge& obj);
        
        int parseArguments(std::string line);
        
        //* Vectors Sort Methods
        void getVector();
        void printVectorSize();
        void fillVector(int value);
        void mergeVector(int left, int middle, int right);
        void insertionSortVector(int left, int right);
        void mergeAndInsertVector(int left, int right);
        void sortVector();

        //* Deque Sort Methods
        void getDeque();
        void printDequeSize();
        void fillDeque(int values);
        void mergeDeque(int left, int middle, int right);
        void insertionSortDeque(int left, int right);
        void mergeAndInsertDeque(int left, int right);
        void sortDeque();

        ~Pmerge();      

};


#endif 