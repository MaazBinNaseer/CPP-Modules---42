/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbin-nas <mbin-nas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 13:51:00 by mbin-nas          #+#    #+#             */
/*   Updated: 2023/06/13 14:22:15 by mbin-nas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAP_TRAP_HPP
#define CLAP_TRAP_HPP

#include <iostream>

#define BGRN "\033[1;32m"
#define RST  "\033[0m"
#define BBLU "\033[1;34m"
#define BYLW "\033[1;33m"

class ClapTrap{
    protected:
        std::string name;
        unsigned int health_point;
        unsigned int energy_point;
        unsigned int attack_damage;
    public:
        ClapTrap();
        ClapTrap(const std::string& name);
        virtual ~ClapTrap();
        ClapTrap& operator=(const ClapTrap& other);
        ClapTrap(const ClapTrap& value);
        void attack(const std::string& target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
        std::string getName(void) const;
        int getDamage() const;
        int getEnergy() const;
        int getHealth() const;
};

std::ostream& operator<<(std::ostream& out, const ClapTrap& value);

#endif