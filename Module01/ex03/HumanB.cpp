/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbin-nas <mbin-nas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/06 17:06:21 by mbin-nas          #+#    #+#             */
/*   Updated: 2023/06/06 17:06:22 by mbin-nas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"



HumanB::HumanB(std::string name) {
    this->name = name;
}

void HumanB::setWeapon(Weapon &weapon) {
    this->weapon = &weapon;
}

void HumanB::attack() {
        std::cout << this->name << " attacks with his " << this->weapon->getType() << std::endl;
}