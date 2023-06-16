/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbin-nas <mbin-nas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 13:35:59 by mbin-nas          #+#    #+#             */
/*   Updated: 2023/06/13 14:21:12 by mbin-nas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int main() {
    DiamondTrap    Spiderman("PeterParker");

    std::cout << std::endl;
    Spiderman.printStat();

    std::cout << std::endl;
    Spiderman.attack("enemy");
    Spiderman.takeDamage(80);
    Spiderman.beRepaired(30);
    std::cout << Spiderman << std::endl;

    Spiderman.guardGate();
    Spiderman.highFivesGuys();
    Spiderman.whoAmI();
    std::cout << std::endl;

    DiamondTrap    Spiderman2("Miles Morales");
    Spiderman2.takeDamage(130);
    std::cout << Spiderman2 << std::endl;
    Spiderman2.attack("enemy");
    Spiderman2.beRepaired(40);
    std::cout << " " << std::endl;
    return (0);
}