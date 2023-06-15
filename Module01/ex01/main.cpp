/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbin-nas <mbin-nas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/06 12:51:37 by mbin-nas          #+#    #+#             */
/*   Updated: 2023/06/15 12:15:19 by mbin-nas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main() {
    const int numZombies = 5;
    const std::string zombieName = "Zombie";

    Zombie* horde = zombieHorde(numZombies, zombieName);

    if (horde != nullptr) {
        // Call announce() for each zombie
        for (int i = 0; i < numZombies; ++i) {
            horde[i].annouce();
        }
        delete[] horde; // Delete the entire horde of zombies
    }

    return 0;
}