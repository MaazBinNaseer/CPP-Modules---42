#include "iter.hpp"

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

    return 0;
}