/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbin-nas <mbin-nas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 13:35:59 by mbin-nas          #+#    #+#             */
/*   Updated: 2023/06/21 14:11:31 by mbin-nas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main()
{
    FragTrap fragTrap("Sarah");
    FragTrap fragtrapCopy(fragTrap);
    // FragTrap fragTrapAssigned = fragTrap;
    std::cout << BGRN << "------------------------------------------" << RST << std::endl;
    fragTrap.attack("Johannatan");
    fragTrap.takeDamage(100);
    fragTrap.beRepaired(20);
    
    std::cout << fragTrap;

    return(0);
}