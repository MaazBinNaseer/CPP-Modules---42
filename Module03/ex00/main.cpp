/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbin-nas <mbin-nas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/21 12:12:57 by mbin-nas          #+#    #+#             */
/*   Updated: 2023/06/21 12:12:59 by mbin-nas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
    ClapTrap a("John");
    a.attack("man");
    a.takeDamage(100000000);
    // a.takeDamage(5);
    a.attack("man");
    std::cout << "The status of the ClapTrap is:" << std::endl << a;

}