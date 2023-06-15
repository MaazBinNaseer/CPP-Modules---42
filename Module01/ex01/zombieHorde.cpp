/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbin-nas <mbin-nas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/15 11:57:38 by mbin-nas          #+#    #+#             */
/*   Updated: 2023/06/15 17:54:19 by mbin-nas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde(int N, const std::string& name) {
    if (N <= 0) {
        std::cout << "Invalid number of zombies!" << std::endl;
        return (NULL);
    }

    // Zombie* horde = new Zombie[N]; // Allocate memory for N Zombie objects
    Zombie* horde = new Zombie[N];
     
    // Initialize each zombie with the given name
    for (int i = 0; i < N; ++i) {
        horde[i].setName(name);
    }

    return horde;
}