/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbin-nas <mbin-nas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/06 16:47:53 by mbin-nas          #+#    #+#             */
/*   Updated: 2023/06/06 17:50:34 by mbin-nas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include "HumanB.hpp"

int main()
{
        {
            std::cout << "This is coming from the HumanA" << std::endl;
            Weapon club = Weapon("The spiked whiplash");
            HumanA jim("jim", club);
            jim.attack();
            club.setType("Some other attack");
            jim.attack();
        }
        {
            std::cout << "This is coming from the HumanB" << std::endl;
            Weapon club = Weapon("crude spiked club");
            HumanB jim("Jim");
            jim.setWeapon(club);
            jim.attack();
            club.setType("some other type of club");
            jim.attack();
        }
        
    return (0);
}