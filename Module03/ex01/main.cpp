/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbin-nas <mbin-nas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 13:04:26 by mbin-nas          #+#    #+#             */
/*   Updated: 2023/06/21 13:37:56 by mbin-nas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

//todo: Implement the copy assignment and copy constructor in the program

int main() {
    ScavTrap scav; //* Defualt constructor 
    ScavTrap scavTrap("Sarah");
    ScavTrap scavTrapCopy(scavTrap);
    ScavTrap scavTrapAssigned = scavTrap;
    scavTrap.attack("Enemy");
    scavTrap.takeDamage(60);
    scavTrap.guardGate();
    std::cout << scavTrap;

    return 0;
}
