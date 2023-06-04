#include <iostream>
#include <cstring>
//* Implementation of megaphone

int main(int ac, char **av)
{
    int i = 1;

    if(ac == 1)
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
    else
    {
        while (av[i] != NULL && i < ac)
        {
            int j = 0;
            while(av[i][j])
            {
                av[i][j] = std::toupper(av[i][j]);
                j++;
            }
            std::cout << av[i];
            if(i < ac - 1) //* Space betweent the words
                std::cout << " ";
            i++;
        }
        std::cout << std::endl;
    }
    return 0;
}