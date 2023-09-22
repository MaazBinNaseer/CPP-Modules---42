#ifndef BITCOINEXCHANGE_HPP
#define BITCOINEXCHANGE_HPP

#include <iostream>
#include <exception>
#include <string>
#include <cstdlib>
#include <fstream>
#include <limits.h>
#include <sstream>
#include <map>
#include <iterator>
#include <algorithm>


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
        std::map<std::string, float> readDataFile(std::string const filename);
        std::string parseFilename(std::string const filename);
        void checkforPair(std::string line);
        void checkforDates(std::string line);
        void checkforValues(std::string line);
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