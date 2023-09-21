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
    std::chrono::high_resolution_clock::time_point start = std::chrono::high_resolution_clock::now();
    values.sortVector();
    std::chrono::high_resolution_clock::time_point end = std::chrono::high_resolution_clock::now();
    std::chrono::duration<double> duration = std::chrono::duration_cast<std::chrono::duration<double> >(end - start);
    std::cout << "After: "; values.getVector();
    std::cout << "Duration it took: " << std::fixed << std::setprecision(6) << duration.count() << " seconds\n";
    std::cout << "-- Vector Stack (End) ---" << std::endl;
    
    std::cout << "-------------------------------------------------------------------------" << std::endl;
    std::cout << "-- Deque Stack (start) ---" << std::endl;
    std::cout << "Before: "; values.getDeque();
     std::chrono::high_resolution_clock::time_point start_1 = std::chrono::high_resolution_clock::now();
    values.sortDeque();
     std::chrono::high_resolution_clock::time_point end_1 = std::chrono::high_resolution_clock::now();
    std::chrono::duration<double> duration_1 = std::chrono::duration_cast<std::chrono::duration<double> >(end_1 - start_1);
    std::cout << "After: "; values.getDeque();
    std::cout << "Duration it took: " << std::fixed << std::setprecision(6) << duration_1.count() << " seconds\n";
    std::cout << "-- Deque Stack (End) ---" << std::endl;
}