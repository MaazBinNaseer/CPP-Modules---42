/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbin-nas <mbin-nas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 13:35:59 by mbin-nas          #+#    #+#             */
/*   Updated: 2023/06/13 14:21:12 by mbin-nas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main()
{
    FragTrap fragTrap("Sarah");
    FragTrap fragtrapCopy(fragTrap);
    FragTrap fragTrapAssigned = fragTrap;


    return(0);
}