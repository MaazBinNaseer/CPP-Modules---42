/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbin-nas <mbin-nas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/05 15:16:46 by mbin-nas          #+#    #+#             */
/*   Updated: 2023/06/05 15:42:21 by mbin-nas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie:: Zombie(void){}

void Zombie::getName(std::string name)
{
    this->name = name;
}

void Zombie::annouce(void)
{
    std::cout << name << "BraiiiiiiinnnzzzZ..." << std::endl;
}

int main()
{
    Zombie z1;
    z1.getName("Foo: ");
    z1.annouce();
    
}