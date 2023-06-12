/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbin-nas <mbin-nas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 13:04:22 by mbin-nas          #+#    #+#             */
/*   Updated: 2023/06/12 17:16:12 by mbin-nas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#define BGRN "\033[1;32m"
#define RST   "\033[0m"
#define BBLU  "\033[1;34m"

class ClapTrap{
    protected:
        std::string name;
        unsigned int health_point;
        unsigned int energy_point;
        unsigned int attack_damage;
    public:
        ClapTrap();
        ClapTrap(const std::string& name);
        ClapTrap(const ClapTrap& other);
        ClapTrap& operator=(const ClapTrap& other);
        ~ClapTrap();
        void attack(const std::string& target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
        int getEnergy() const;
        int getHealth() const;
};

std::ostream& operator<<(std::ostream& out, const ClapTrap& value);

