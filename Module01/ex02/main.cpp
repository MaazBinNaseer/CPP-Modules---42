/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbin-nas <mbin-nas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/06 14:41:22 by mbin-nas          #+#    #+#             */
/*   Updated: 2023/06/06 15:27:47 by mbin-nas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#define KGRN  "\x1B[32m"
#define RST  "\x1B[0m"
#define KBLU  "\x1B[34m"

int main()
{
    std::string brain = "HI THIS IS BRAIN";
    
    std::string *stringPTR = &brain;
    std::string& stringREF = brain;
    
    //* Getting to print the strings
    std::cout << KGRN <<"---------- Printing the strings access -------------" << RST << std::endl;
    std::cout << KGRN <<"This is the main string : " << brain << RST << std::endl;
    std::cout << KGRN <<"This is being inherited from pointer : " << *stringPTR << RST << std::endl;
    std::cout << KGRN <<"This is being referenced from REF: " << stringREF << RST << std:: endl;

    //* Getting it to access the memory
    std::cout << KBLU <<"----------- Printing the memory address ------------" << RST << std::endl;
    std::cout << KBLU <<"The memory address of the main string: " << &brain << RST << std::endl;
    std::cout << KBLU <<"The memory address of the stringPTR: " << &stringPTR << RST << std::endl;
    std::cout << KBLU <<"The memory address of the stringREF: " << &stringREF << RST << std::endl;
    
    return(0); 
}