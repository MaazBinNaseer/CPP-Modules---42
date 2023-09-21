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

    /* --------------------------------------------------
    * -------------------- INDVID. TIME ----------------
    -----------------------------------------------------*/
    // std::cout << "-- Vector Stack (start) ---" << std::endl;
    // clock_t start, finish;
    // std::cout << "Before: "; values.getVector();
    // start = clock();
    // values.sortVector();
    // finish = clock();
    // double vector_time = ((double)(finish - start)) / 1000000 ;
    // std::cout << "Duration: " << std::fixed << vector_time << std::endl; 
    // std::cout << "After: "; values.getVector();
    // std::cout << "-- Vector Stack (End) ---" << std::endl;
    // std::cout << "-- Deque Stack (start) ---" << std::endl;
    // std::cout << "Before: "; values.getDeque();
    // start = clock();
    // values.sortDeque();
    // finish = clock();
    // double deq_time = ((double)(finish - start)) / 1000000;
    // std::cout << "Duration: " << std::fixed << deq_time << std::endl; 
    // std::cout << "After: "; values.getDeque();
    // std::cout << "-- Deque Stack (End) ---" << std::endl;


    /* ------------------------------------------------------------
    * -------------------- AS PER SUBJECT (TEMPLATE)----------------
    ---------------------------------------------------------------*/
    std::cout << "Before: "; values.getVector();
    clock_t start, finish;
    start = clock();
    values.sortVector();
    finish = clock();
    double vec_time = ((double)(finish - start)) / 1000000;
    std::cout << "After : "; values.getVector();
    std::cout << "Time to process a range of "; values.printVectorSize(); std::cout << " elements with std::vector --> " << std::fixed << vec_time << std::endl;
    start = clock();
    values.sortDeque();
    finish = clock();
    double deq_time = ((double)(finish - start)) / 1000000;
    std::cout << "Time to process a range of "; values.printDequeSize(); std::cout << " elements with std::deq --> " << std::fixed << deq_time << std::endl;

}