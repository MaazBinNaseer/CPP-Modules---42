/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbin-nas <mbin-nas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/05 15:16:49 by mbin-nas          #+#    #+#             */
/*   Updated: 2023/06/05 15:41:05 by mbin-nas         ###   ########.fr       */
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
        Zombie();
        void annouce(void);
        void getName(std::string name);
};

#endif