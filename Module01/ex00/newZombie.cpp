/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbin-nas <mbin-nas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/05 15:16:42 by mbin-nas          #+#    #+#             */
/*   Updated: 2023/06/05 15:16:43 by mbin-nas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie *newZombie(std::string zombie_name)
{
    Zombie *z2;

    z2 = new Zombie(zombie_name);
    return (z2);
}

int main()
{
    Zombie *z2 = newZombie("Huan: ");
    z2->annouce();
    delete z2;

    return 0;
}