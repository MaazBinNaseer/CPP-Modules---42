/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbin-nas <mbin-nas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 13:35:52 by mbin-nas          #+#    #+#             */
/*   Updated: 2023/06/13 14:01:55 by mbin-nas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAG_TRAP_HPP
#define FRAG_TRAP_HPP

#include "ClapTrap.hpp"


class FragTrap : virtual public ClapTrap
{
  public:
    FragTrap();
    FragTrap(const std:: string& name);
    FragTrap(const FragTrap& value);
    FragTrap& operator=(const FragTrap& other);
    virtual ~FragTrap();
    void highFivesGuys(void);
};

#endif