/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbin-nas <mbin-nas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/06 17:06:13 by mbin-nas          #+#    #+#             */
/*   Updated: 2023/06/06 17:14:42 by mbin-nas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_B
#define HUMAN_B

#include "Weapon.hpp"

class HumanB{
    private:
        std::string name;
        Weapon* weapon;
    public:
        HumanB(std::string name);
        void setWeapon(Weapon &weapon);
        void attack();
};


#endif