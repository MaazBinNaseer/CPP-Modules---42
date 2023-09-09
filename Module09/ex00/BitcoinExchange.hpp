#ifndef BITCOINEXHCHANGE_HPP
#define BITCOINGEXCHANGE_HPP

#include <iostream>
#include <exception>
#include <string>
#include <fstream>
#include <sstream>

class BitcoinExchange
{
    private:
        std::string _filename;

    public:
        BitcoinExchange();
        BitcoinExchange(std::string filename); // * Do i need this ? 
        BitcoinExchange(const BitcoinExchange &obj);
        BitcoinExchange& operator=(const BitcoinExchange &obj_values);
        std::string getFilename(char *filename);
        std::string readDataFile(std::string const filename);
        std::string parseFilename(std::string const filename);
        std::string dataChecks(std::string const filename);
        ~BitcoinExchange();


class FileIssues: public std::exception
{
    private:
        std::string errorMessage;
    public:
        FileIssues(std::string error);
        const char *what() const throw() ;
        virtual ~FileIssues() throw();
};


};





#endif