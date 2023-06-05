/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbin-nas <mbin-nas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/05 15:14:24 by mbin-nas          #+#    #+#             */
/*   Updated: 2023/06/05 15:14:26 by mbin-nas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>
#include <cctype>
#include <limits>
#include <cstdlib>
#include <iomanip>
#include <sstream>
#include <string>

#define KGRN  "\x1B[32m"
#define KRED  "\x1B[31m"
#define RST  "\x1B[0m"
#define KBLU  "\x1B[34m"
#define KYEL  "\x1B[33m"
#define BOLD(x) "\x1B[1m" x RST


#define PHONEBOOK "\U0001F4D4"
#define WOW "\U0001F633"
#define HIDE "\U0001F648"
#define PHONE "\U0001F4DE"
#define CLIP "\U0001F4CB"

class Contact {

private:
    std::string phone_number;
    std::string first_name;
    std::string last_name;
    std::string nick_nake;
    std::string darkest_desire;
    int         id;

public:
    Contact();
    bool valid_Phone(std::string phone_number);
    bool valid_Name(std::string Name);
    bool valid_empty(std::string input);
    void set_Contacts(int i);
    void display_Format(std:: string format);
    void display_Contacts(void);
    void display_All_Contacts(void);
    bool isEmpty() const;
};

#endif