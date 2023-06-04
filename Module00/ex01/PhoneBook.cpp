#include "PhoneBook.hpp"

Phonebook::Phonebook(void)
{
    this->index = 0;
}

void Phonebook::ADD(void)
{
    if(this->index == 8)
        this->index = 0;
    this->contacts[index].set_Contacts(this->index + 1);
    this->contacts[index++];
}

void Phonebook::EXIT(void)
{
    std::cout << KYEL<< BOLD("Exiting out") << std::endl;
    exit(0);
}

void Phonebook::SEARCH(void)
{
    int index;

    std::cout << KGRN << BOLD(" ----------------------------------------------") << std::endl;
    std::cout << KGRN << BOLD("  | INDEX| FIRST NAME| LAST NAME|  NICKNAME") << std::endl;
    std::cout << KGRN << BOLD(" ----------------------------------------------") << std::endl;
    for(int i = 0; i < 8; i++)
    {
        this->contacts[i].display_Contacts();
    }

    std::cout << KGRN << BOLD("Enter the index of the contact you want to see : ");
    std::string line;
    getline(std::cin, line);
    std::stringstream ss(line);
    if(!(ss >> index) || index < 1 || index > 8 || contacts[index-1].isEmpty())
    {
        std::cout << KRED << BOLD("Invalid index!") << std::endl;
        return;
    }

    this->contacts[index - 1].display_All_Contacts();
}


int main(void)
{
    Phonebook person;
    std::string line; 

    std::cout << KBLU << BOLD("Welcome to the crappy phonebook software ! ") << PHONEBOOK << std:: endl;
    while(1)
    {
        std::cout << KBLU << BOLD(" -- The options you have are [ADD], [SEARCH], and [EXIT] --")  << std:: endl;
        getline(std::cin, line);
        if(line.compare("ADD") == 0)
            person.ADD();
        else if (line.compare("EXIT") == 0 || std::cin.eof() == 1)
            person.EXIT();
        else if (line.compare("SEARCH") == 0)
            person.SEARCH();
        else
            std::cout << KRED << BOLD("Why you no listen?: [ADD], [SEARCH], [EXIT]") << std::endl;

    }
    return (0);

}


