/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbin-nas <mbin-nas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/21 12:12:57 by mbin-nas          #+#    #+#             */
/*   Updated: 2023/06/21 13:24:45 by mbin-nas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
    ClapTrap b;
    ClapTrap a("John");
    a.attack("man");
    a.takeDamage(0);
    // a.takeDamage(5);
    a.attack("man");
    a.beRepaired(50);
    std::cout << "The status of the ClapTrap is:" << std::endl << a;

}