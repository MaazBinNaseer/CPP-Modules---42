#include "Pmerge.hpp"

int main(int argc, char **argv)
{
    Pmerge values;
    (void)argc;
    int i = 0; 
    while(argv[++i] != NULL)
    {
        int y = values.parseArguments(argv[i]);
        values.fillVector(y);
    }
    std::cout << "-- Vector Stack (start) ---" << std::endl;
    values.getVector();
    std::cout << "-- Vector Stack (End) ---" << std::endl;

}