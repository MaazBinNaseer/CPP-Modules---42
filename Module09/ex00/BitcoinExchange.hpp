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
#include <iomanip>


class BitcoinExchange
{
    private:
        std::string _filename;
        std::map<std::string, float> _values;

    public:
        BitcoinExchange();
        BitcoinExchange(std::string filename); // * Do i need this ? 
        BitcoinExchange(const BitcoinExchange &obj);
        BitcoinExchange& operator=(const BitcoinExchange &obj_values);

        std::string getFilename(char *filename);
        void readDataFile();
        std::string parseFilename(std::string const filename);
        // void BitcoinExchange::calculateValue(const std::string &date, float multiplier);
        void checkforPair(std::string line);
        void checkforDates(std::string line);
        bool ValidDay(std::string &line);
        bool checkforLeapYear(int &year);
        void checkforValues(std::string line);
        std::string LowerBound(std::string &date);
        void  calculateValue(std::string &rate);
        void  printAll() const; //* Debugger Print 

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