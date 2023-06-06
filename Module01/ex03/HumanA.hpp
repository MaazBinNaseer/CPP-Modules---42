/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbin-nas <mbin-nas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/06 17:06:15 by mbin-nas          #+#    #+#             */
/*   Updated: 2023/06/06 17:47:44 by mbin-nas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_A
#define HUMAN_A

#include "Weapon.hpp"

class HumanA{
    private:
        std::string name;
        Weapon weapon;
    public:
        // HumanA(void);
        HumanA(const std::string& name, const Weapon& weapon);
        void attack();
};
#endif