#include "Pmerge.hpp"

int main(int argc, char **argv)
{
    Pmerge values;

    (void)argc;
    int i = 0, y = 0; 
    while(argv[++i] != NULL)
    {
        y = values.parseArguments(argv[i]);
        values.fillDeque(y);
        values.fillVector(y);
    }
    std::cout << "-- Vector Stack (start) ---" << std::endl;
    std::cout << "Before: "; values.getVector();
    values.sortVector();
    std::cout << "After: "; values.getVector();
    std::cout << "-- Vector Stack (End) ---" << std::endl;
    std::cout << "-- Deque Stack (start) ---" << std::endl;
    std::cout << "Before: "; values.getDeque();
    values.sortDeque();
    std::cout << "After: "; values.getDeque();
    std::cout << "-- Deque Stack (End) ---" << std::endl;
}