/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbin-nas <mbin-nas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/21 12:12:52 by mbin-nas          #+#    #+#             */
/*   Updated: 2023/06/21 12:12:53 by mbin-nas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class ClapTrap{
    private:
        std::string name;
        unsigned int health_point;
        unsigned int energy_point;
        unsigned int attack_damage;
    public:
        ClapTrap(const std::string name);
        ~ClapTrap();
        void attack(const std::string& target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
        int getEnergy() const;
        int getHealth() const;
};

std::ostream& operator<<(std::ostream& out, const ClapTrap& value);