#include "BitcoinExchange.hpp"

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

void BitcoinExchange::checkforValues(std::string line)
{
    line.erase(std::remove(line.begin(), line.end(), ' '), line.end());
    char *endptr;
    long number = strtol(line.c_str(), &endptr, 10);
    if (number > INT_MAX)
        std::cout << "Error : Value number too large ==> " << number <<  std::endl;
    else if(number < 0)
        std::cout << "Error : not a positive number ==> " << number << std::endl;
    else if(std::count(line.begin(), line.end(), '.') > 1)
        std::cout << "Error : Incorrect decimal number ==> " << number <<std::endl;
    // else if (std::count(line.begin(), line.end(), 32) > 1) //! Need to check this condition properly with a space
    //     std::cout << "Error : Cannot use space ==> " << number << std::endl; 

}

bool BitcoinExchange::checkforLeapYear(int &year)
{
    if((year % 4) != 0)
        return (false);
    return (true);
}

void BitcoinExchange::checkforDates(std::string line)
{
    std::stringstream stream(line);
    std::string year, month, day;

    getline(stream, year, '-');
    getline(stream, month, '-');
    getline(stream, day);

    int i_year = atoi(year.c_str());
    int i_month = atoi(month.c_str());
    int i_day = atoi(day.c_str());

    if(this->checkforLeapYear(i_year) == true)
    {
        if(i_year < 2009 || i_year > 2022 || year.size() > 4)
            std::cout << "Error: Incorrect year ==> " << i_year << std::endl;
        else if (i_month < 1 || i_month > 12 || month.size() > 2)
            std::cout << "Error: Incorrect month ==> " << i_month << std::endl;
        else if (i_day < 1 || i_day > 31 || day.size() > 3)
            std::cout << "Error: Incorrect day ==> " << i_day << std::endl; 
        else if( i_month == 2 && i_day > 29)
            std::cout << "Error: Leap Year is 29 days in Feburary ==> " << i_year << "-" << i_month << "-" << i_day << std::endl; 
    }
    else
    {
        if(i_year < 2009 || i_year > 2022 || year.size() > 4)
            std::cout << "Error: Incorrect year ==> " << i_year << std::endl;
        else if (i_month < 1 || i_month > 12 || month.size() > 2)
            std::cout << "Error: Incorrect month ==> " << i_month << std::endl;
        else if (i_day < 1 || i_day > 31 || day.size() > 3)
            std::cout << "Error: Incorrect day ==> " << i_day << std::endl;
        else if(i_month == 2 && i_day > 28)
            std::cout << "Error: Not a leap year which is 28 days in Feburary ==> " << i_year << "-" << i_month << "-" << i_day << std::endl; 
    }

    // std::cout << "Year X: " << i_year;
    // std::cout << " Month Y: " << i_month;
    // std::cout << " Day Z: " << i_day << std::endl;

}

void BitcoinExchange::checkforPair(std::string line)
{
    std::stringstream stream(line);
    std::string dates, value; 
    if(std::count(line.begin(), line.end(), '|') > 1 || std::count(line.begin(), line.end(), '|') == 0)
    {
        std::cout << "Error: bad input ==> " << line << std::endl;
    }
    else
    {
        getline(stream, dates, '|');
        this->checkforDates(dates);
        // std::cout << "dates: " << dates << std::endl;
        getline(stream, value);
        this->checkforValues(value);
        // std::cout << " values" << value <<  std::endl;
    }

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
    //* I can check here though about the parsing of the lines
    while(std::getline(ifs, line))
    {

        this->checkforPair(line);
        oss << line << '\n'; // Append each line followed by a newline
        // std::cout << line<< std::endl;
    }  
    return (oss.str()); 
}


BitcoinExchange::~BitcoinExchange() {};