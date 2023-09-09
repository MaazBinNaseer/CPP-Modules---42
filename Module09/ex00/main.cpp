
#include "BitcoinExchange.hpp"


int main(int argc, char ** argv)
{
    if(argc < 2 || argc > 2)
    {
        std::cout << "Arguments are meant to be [./btc filename.txt]" <<std::endl;
        return (1);
    }
    BitcoinExchange read;
    try
    {
        std::string name = read.getFilename(argv[1]);
        std::string data = read.readFilename(name);
        std::cout << data << std::endl;
    }
    catch(BitcoinExchange::FileIssues &e)
    {
        std::cout << "Caught exception: " << e.what() << std::endl;
    }
 
 return (0);
}