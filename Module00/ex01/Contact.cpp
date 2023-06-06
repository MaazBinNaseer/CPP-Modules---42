/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbin-nas <mbin-nas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/05 15:14:17 by mbin-nas          #+#    #+#             */
/*   Updated: 2023/06/06 15:16:49 by mbin-nas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact:: Contact() {
    this->id = 0;
};

bool Contact::valid_Phone(std::string phone_number)
{
    for (size_t i = 0; i < phone_number.length(); i++) 
    {
        if(!std::isdigit(phone_number[i]))
        {
            std::cout << KRED << BOLD("Invalid phone number !" ) << RST << std::endl;
            return false;
        }
    }
    this->phone_number = phone_number; 
    return true;     
}

bool Contact::valid_Name(std::string Name)
{
    for (size_t i = 0; i < Name.length(); i++) 
    {
        if(std::isdigit(Name[i]))
        {
            std::cout << KRED << BOLD("You have something incorrect: Name only contains strings") << RST << std::endl;
            return false;   
        }
    }
    return true;
}

bool Contact::valid_empty(std::string input)
{
   if(input.empty())
    {
        std::cout << KRED << BOLD("Input cannot be empty!") << std::endl;
        return false;
    }
    return true;
}   

bool Contact::isEmpty() const
{
    return id == 0;
}

bool readInput(std::string& input)
{
    if (!std::getline(std::cin, input))
    {
        std::cout << KRED << std::endl << BOLD("Input reading failed. Exiting.") << std::endl;
        return false;
    }
    return true;
}

bool Contact::set_Contacts(int i)
{
    std::string input;

    this->id = i;
    do {
        std::cout << KGRN << BOLD("First Name: ");
        if (!readInput(input))
            return false;
    } while(!valid_Name(input) || !valid_empty(input));
    this->first_name = input;

    do {
        std::cout << KGRN << BOLD("Last Name: ");
         if (!readInput(input))
            return false;
    } while(!valid_Name(input) || !valid_empty(input));
    this->last_name = input;

    do {
        std::cout << KGRN << BOLD("Phone Number [symbols are not allowed]: ");
         if (!readInput(input))
            return false;
    } while(!valid_Phone(input) || !valid_empty(input));

    do {
    std::cout << WOW << KGRN << BOLD(" Your embarrasing nickname : ");
     if (!readInput(input))
            return false;
    } while(!valid_empty(input));
    this->nick_nake = input;

    do {
    std::cout <<HIDE << KGRN << BOLD(" Your deepest darkest desire:  ");
     if (!readInput(input))
            return false;
    } while (!valid_empty(input));
    this->darkest_desire = input;

    return (true);   
}

void Contact::display_Format(std::string format)
{
    if(format.length() > 10)
        std::cout << std::setw(9) << format.substr(0, 9) << ".";
	else
		std::cout << std::setw(10) << format;

}

void Contact::display_Contacts(void)
{
    if (this->id == 0)
		return ;
	std::stringstream	string;
	string << this->id;
	this->display_Format(string.str());
	std::cout << "|";
	this->display_Format(this->first_name);
	std::cout << "|";
	this->display_Format(this->last_name);
	std::cout << "|";
	this->display_Format(this->nick_nake);
	std::cout << std::endl;
}

void Contact::display_All_Contacts()
{
    std::cout << KYEL << CLIP <<BOLD(" First name: ") << RST << this->first_name << std::endl;
	std::cout << KYEL << CLIP <<BOLD(" Last name: ") << RST << this->last_name << std::endl;
	std::cout << KYEL <<PHONE<< BOLD(" Phone number: ") << RST << this->phone_number << std::endl;
	std::cout << KYEL << WOW << BOLD(" Nickname: ") << RST << this->nick_nake << std::endl;
	std::cout << KYEL << HIDE<< BOLD(" Darkest Desire: " )<< RST << this->darkest_desire << std::endl;

}