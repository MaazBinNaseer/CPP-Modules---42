#include "iter.hpp"

class Awesome
{
    private:
        int _n;
    public:
        Awesome(void): _n(42) {}
        Awesome(int n): _n(n) {}
        Awesome & operator=(Awesome & a) {_n = a._n; return *this;}
        bool operator==(Awesome const & rhs) const {return(this->_n == rhs._n);}
        bool operator!=(Awesome const &rhs) const {return(this->_n != rhs._n);}
        bool operator>(Awesome const &rhs) const {return(this->_n > rhs._n);}
        bool operator<(Awesome const &rhs) const {return(this->_n < rhs._n);}
        bool operator>=(Awesome const &rhs) const {return(this->_n >= rhs._n);}
        bool operator <=(Awesome const &rhs) const {return(this->_n <= rhs._n);}
        int get_n()const {return _n;}    
};

std::ostream & operator<<(std::ostream & o, const Awesome &a){o << a.get_n(); return o;}

template <typename T>
void print(T const &x) {std::cout << x << std::endl; return;}



int main() {
    int intArray[] = {1, 2, 3, 4, 5};
    double doubleArray[] = {2.5, 4.7, 6.2, 8.9};
    char charArray[] = {'a', 'b', 'c', 'd'};

    std::cout << "Printing intArray: ";
    iter(intArray, sizeof(intArray) / sizeof(intArray[0]), printElement<int>);
    std::cout << std::endl;

    std::cout << "Printing doubleArray: ";
    iter(doubleArray, sizeof(doubleArray) / sizeof(doubleArray[0]), printElement<double>);
    std::cout << std::endl;

    std::cout << "Printing charArray: ";
    iter(charArray, sizeof(charArray) / sizeof(charArray[0]), printElement<char>);
    std::cout << std::endl;

    int tab[] = {0, 1, 2, 3, 4};
    Awesome tab2[5];

    iter(tab, 5 , print);
    iter(tab2, 5, print);
    // iter<int, void (*)(const int&)> (tab, 5, &print);
    // iter<Awesome, void (*)(const Awesome&)> (tab2, 5, &print);
    return 0;
}