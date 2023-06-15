/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbin-nas <mbin-nas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 13:04:31 by mbin-nas          #+#    #+#             */
/*   Updated: 2023/06/12 18:49:59 by mbin-nas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAV_TRAP_HPP
#define SCAV_TRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap
{
    public:
        ScavTrap();
        ScavTrap(const std::string& name);
        ScavTrap(const ScavTrap& value);
        ScavTrap& operator=(const ScavTrap& other);
        virtual ~ScavTrap();
        void guardGate();
        virtual void attack(const std::string& target);
};

#endif