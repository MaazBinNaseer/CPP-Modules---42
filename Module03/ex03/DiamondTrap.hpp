/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbin-nas <mbin-nas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/21 12:15:33 by mbin-nas          #+#    #+#             */
/*   Updated: 2023/06/21 12:15:34 by mbin-nas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMOND_TRAP_HPP
#define DIAMOND_TRAP_HPP

#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "ClapTrap.hpp"

class DiamondTrap: public ScavTrap, public FragTrap
{
    private:
        std::string name;
    public:
        DiamondTrap();
        DiamondTrap(std::string name);
        DiamondTrap (const DiamondTrap& other);
        DiamondTrap& operator=(const DiamondTrap& other);
        virtual  ~DiamondTrap();
        void    printStat(void);
        void    attack(const std::string &target);
        void    whoAmI(void);

};

std::ostream &operator<<(std::ostream &out, const DiamondTrap &value);

#endif