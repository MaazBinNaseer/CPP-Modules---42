#include "Pmerge.hpp"

Pmerge::Pmerge() {}

Pmerge::Pmerge(const Pmerge& value) {*this = value;}

Pmerge& Pmerge::operator=(const Pmerge &value) {if(this != &value) {} return (*this);}


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
                std::cout << "Characters are not allowed except (+): " << output[i] << std::endl;
                exit(-1);
            }
        }
    }
    //* Convert the string to integer at the end
    char* endptr;
    long int value = strtol(line.c_str(), &endptr, 10);
    if (*endptr != '\0') 
    {
        std::cout << "Conversion error. Invalid characters found after the number: " << endptr << std::endl;
        exit (-1);
    }
    return (static_cast<int>(value));
}

/* ---------------------------------------------------------
* ------------------------ VECTOR SORT ---------------------
-----------------------------------------------------------*/
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

void Pmerge::fillVector(int value)
{
    this->_vint.push_back(value);
}

void Pmerge::printVectorSize()
{
    std::cout << this->_vint.size(); 
}

//* Merge insert sort alogrithim to be used over here 
void Pmerge::mergeVector(int left, int middle, int right)
{
    int n1 = middle - left + 1;
    int n2 = right - middle;

    std::vector<int> left_array(n1);
    std::vector<int> right_array(n2);

    for(int i = 0; i < n1; i++)
        left_array[i] = _vint[left + i];
    for(int j = 0; j < n2; j++)
        right_array[j] = _vint[middle + 1 + j];
    
    int i = 0, j = 0, k = left;

    while(i < n1 && j < n2)
    {
        if(left_array[i] <= right_array[j])
            _vint[k++] = left_array[i++];
        else
            _vint[k++] = right_array[j++];
    }

    while(i < n1)
        _vint[k++] = left_array[i++];

    while(j < n2)
        _vint[k++] = right_array[j++];
}

void Pmerge::insertionSortVector(int left, int right)
{
    for (int i = left + 1; i <= right; i++)
    {
        int key = _vint[i];
        int j = i - 1;
        while(j >= left && _vint[j] > key)
        {
            _vint[j + 1] = _vint[j];
            j--;
        }
        _vint[j + 1] = key;
    }
}

void Pmerge::mergeAndInsertVector(int left, int right)
{
    if (right - left < insertion_thershold)
    {
        this->insertionSortVector(left, right);
        return ;
    }
    if(left < right)
    {
        int middle = left + (right - left) / 2;
        this->mergeAndInsertVector(left, middle);
        this->mergeAndInsertVector(middle + 1, right);
        this->mergeVector(left, middle, right);
    }
}

void Pmerge::sortVector()
{
    
    this->mergeAndInsertVector(0, this->_vint.size() - 1);
   

}

/* ---------------------------------------------------------
* ------------------------ DEQUE SORT ---------------------
-----------------------------------------------------------*/

void printDeque(std::deque<int> &container) 
{
    for (std::deque<int>::iterator it = container.begin(); it != container.end(); ++it) {
        std::cout << *it << " ";
    }
        std::cout << std::endl;
}

void Pmerge::getDeque()
{
    printDeque(this->_dint);   
}

void Pmerge::fillDeque(int values)
{
    this->_dint.push_back(values);
}

void Pmerge::printDequeSize()
{
    std::cout << this->_dint.size(); 
}

void Pmerge::mergeDeque(int left, int middle, int right)
{
        int n1 = middle - left + 1;
        int n2 = right - middle;

        std::deque<int> left_deque(n1);
        std::deque<int> right_deque(n2);

        for(int i = 0; i < n1; i++)
            left_deque[i] = _dint[left + i];
        for(int j = 0; j < n2; j++)
            right_deque[j] = _dint[middle + 1 + j];
        
        int i = 0, j = 0, k = left;

        while(i < n1 && j < n2) {
            if(left_deque[i] <= right_deque[j])
                _dint[k++] = left_deque[i++];
            else
                _dint[k++] = right_deque[j++];
        }

        while(i < n1)
            _dint[k++] = left_deque[i++];

        while(j < n2)
            _dint[k++] = right_deque[j++];

}

void Pmerge::insertionSortDeque(int left, int right)
{
     for (int i = left + 1; i <= right; i++) 
     {
        int key = _dint[i];
        int j = i - 1;
        while(j >= left && _dint[j] > key) {
            _dint[j + 1] = _dint[j];
            j--;
        }
        _dint[j + 1] = key;
    }
}

 void Pmerge::mergeAndInsertDeque(int left, int right) 
 {
    if (right - left < insertion_thershold) {
        this->insertionSortDeque(left, right);
        return;
    }

    if(left < right) {
        int middle = left + (right - left) / 2;
        this->mergeAndInsertDeque(left, middle);
        this->mergeAndInsertDeque(middle + 1, right);
        this->mergeDeque(left, middle, right);
    }
}

void Pmerge::sortDeque()
{
    this->mergeAndInsertDeque(0, _dint.size() - 1);
}


Pmerge::~Pmerge() {}