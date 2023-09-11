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

bool BitcoinExchange::isValidDate(std::string const filename)
{
    std::ifstream ifs(filename.c_str());
    std::string line;
    std::string date;
    while(std::getline(ifs, line))
    {
        std::size_t pos = line.find("|");
        date = line.substr(0, pos);
        // std::cout << "Printing out the dates " << date << "and their size are " << date.size() << std::endl;
        if(date.size() < 9 || date.size() > 11)
            std::cout << "Error: the date size is incorrect => " << date <<  std::endl;
        
        std::size_t pos1 = line.find("-");
        std::size_t pos2 = line.find("-", pos1 + 1);

        std::string year = line.substr(0, pos1);
        int yearInt = atoi(year.c_str());
        std::string month = line.substr(pos1 + 1, pos2 - pos1 - 1);
        int monthInt = atoi(month.c_str());
        std::string day = line.substr(pos2 + 1, pos  - pos2 -  1); 
        int dayInt = atoi(day.c_str());
        std::cout << day << std::endl;  

        for(std::string::iterator it = year.begin(); it < year.end(); ++it)
        {
            if(!isdigit(*it))
                std::cout << "Error: Invalid Year format =>" << year << std::endl;
        }
        for(std::string::iterator it = month.begin(); it < month.end(); ++it)
        {
            if(!isdigit(*it))
                std::cout << "Error: Invalid Date format =>" << year << std::endl;
        }
        for(std::string::iterator it = month.begin(); it < month.end(); ++it)
        {
            if(!isdigit(*it))
                std::cout << "Error: Invalid Day format =>" << year << std::endl;
        }
        if(dayInt > 31 || monthInt > 12 || yearInt > 2022)
            std::cout << " Error: Maximum DD/MM/YY [31/12/2022] => " << dayInt << "/" << monthInt << "/" << yearInt << std::endl;
        else if (dayInt > 29 && monthInt >= 03 && yearInt >= 2022)
            std::cout << "Error: No such data could be found => " << dayInt << "/" << monthInt << "/" << yearInt << std::endl;
    }

    return (true);
}

bool BitcoinExchange::isValidDataPair(std::string const filename)
{
    std::ifstream ifs(filename.c_str());
    std::string line;
    while(std::getline(ifs, line))
    {
        if(line.find('|') == std::string::npos) 
        {
            std::cout << "Error bad input => " << line << std::endl;
            return (false);
        }
        if(std::count(line.begin(), line.end(), '|') != 1 || std::count(line.begin(), line.end(), '-') != 2)
        {
            std::cout << "Error pipes/hyphen issue => " << line << std::endl;
            return (false);
        }
        for(std::size_t i = 0;  i < line.size(); ++i)
        {
            char c = line[i];
            if(!std::isdigit(c) && c != '-' && c != '|' && !std::isspace(c) && c != '.')
            {
                 std::cout << "Error Character issue  => " << line << std::endl;
                return (false);
            }
        } 
    }
    return (true);
}




// std::string BitcoinExchange::dataChecks(std::string const filename)
// {

// }

BitcoinExchange::~BitcoinExchange() {};