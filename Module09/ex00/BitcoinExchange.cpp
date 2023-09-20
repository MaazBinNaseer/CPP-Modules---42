#include "BitcoinExchange.hpp"


/* -------- BASIC --------------------
TODO  Main : This program must use a database in csv format which will represent bitcoin price over time. This database is provided with this subject.
TODO Main2: The program will take as input a second database, storing the different prices/dates to evaluate.
TODO 1. Need to read the input.txt file
TODO 2. Validty of the input.txt file itself such as the incorrect file name etc.  
TODO 3. Need to see the date with the pipe value "2011-01-03 | 3" therefore it split the dates right before the pipe and after the pipe 
TODO 4. Validity of the dates to see. 

!CONSTRAINTS 
*Your program must respect these rules:
* Each line in this file must use the following format: "date | value".
* A valid date will always be in the following format: Year-Month-Day.
* A valid value must be either a float or a positive integer between 0 and 1000.

*Your program should display on the standard output the result of the value multiplied by the exchange rate according to the date indicated in your database. 
*/

BitcoinExchange::BitcoinExchange() {};

BitcoinExchange::BitcoinExchange(std::string  const filename): _filename(filename) {};

const char* BitcoinExchange::FileIssues:: what(void) const throw()
{
    return (errorMessage.c_str());
}

BitcoinExchange::FileIssues::~FileIssues() throw() {};

BitcoinExchange::FileIssues::FileIssues(std::string error) : errorMessage(error) {};

std::string BitcoinExchange::getFilename(char* filename)
{
    std::string name = filename;
    this->_filename = name;
    return(this->_filename);
}
/*
* @brief Reads the CSV file and stores it to the map vector [data]
* @returns Map Vector Data
*/ 
std::map<std::string, float> BitcoinExchange::readDataFile(std::string const filename)
{
    std::ifstream file(filename.c_str());
    if(file.fail())
        throw FileIssues("Cannot read the file");
    //* Now need to store all of the original data in the map container 
    std::map<std::string, float> data;
    std::string line;
    while(std::getline(file, line))
    {
        std::stringstream ff(line);
        std::string key;
        float value;
        if(std::getline(ff, key, ',') && ff >> value)
            data[key] = value;
    }
    file.close();
    return (data);
}
/*
* @brief Reads the filename of the argument
* @returns the data from input txt gets stored in the data 
*/
std::string BitcoinExchange::parseFilename(std::string const filename)
{
    if (filename.length() < 4)
        throw FileIssues("Filename is less than 4 characters");
    std::string checkFileName = filename.substr(filename.length() - 4, 4);
    if(checkFileName != ".txt")
        throw FileIssues("Filename does not cointain .txt");
    std::ifstream ifs(filename.c_str());
    if(!ifs)
        throw FileIssues("File does not exsist");
    std::cout << "Data from reading the file" << std::endl;
    std::ostringstream oss;
    std::string line;
    while(std::getline(ifs, line))
        oss << line << '\n';  // Append each line followed by a newline
    return (oss.str()); 
}

bool checkFordDates(std::string line)
{

}


BitcoinExchange::~BitcoinExchange() {};