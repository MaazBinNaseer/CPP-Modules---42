/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbin-nas <mbin-nas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/06 17:06:24 by mbin-nas          #+#    #+#             */
/*   Updated: 2023/06/06 17:47:26 by mbin-nas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(const std::string& name, Weapon& weapon) 
    : name(name), weapon(weapon) {}

void HumanA::attack() {
    std::cout << this->name << " attacks with their " << weapon.getType() << std::endl;
}

