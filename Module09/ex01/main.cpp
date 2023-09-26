#include "RPN.hpp"

template <typename T>
void printContainer(std::stack<T> container)
{
    std::cout << " --- Stack Container  ---" << std::endl; 
    while (!container.empty())
    {
        std::cout << container.top() << " ";
        container.pop();
    }
    std::cout << std::endl;
}

int main(int argc, char **argv)
{
    RPN start;
    (void)argc;

    if(argc == 2)
        {
            try
            {
                std::string line = start.parseArguments(argv[1]);
                start.fillStack(line);
                start.printResult();
                // std::cout << "Int" << " " ;printContainer(start.getStackInt());
            }
            catch(const std::exception& e)
            {
                std::cerr << e.what() << '\n';
            }      
        }
    else
        std::cout << "Usage ./RPN  [operations] " << std::endl;
    return (0);

}