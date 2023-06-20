/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbin-nas <mbin-nas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/05 15:16:49 by mbin-nas          #+#    #+#             */
/*   Updated: 2023/06/15 20:10:31 by mbin-nas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
#include <string>

class Zombie {
    private:
        std::string name;
    public:
        Zombie(std::string name);
        ~Zombie();
        void annouce(void);
        void setName(std::string name);
};

void randomZombie(std::string zombie_name);
Zombie *newZombie(std::string zombie_name);

#endif