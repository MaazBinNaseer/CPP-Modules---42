/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbin-nas <mbin-nas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 17:56:24 by mbin-nas          #+#    #+#             */
/*   Updated: 2023/06/14 13:39:22 by mbin-nas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>

class Animal
{
  protected:
    std::string type;
    std::string name;
    
  public:
    Animal();
    Animal(const Animal& value);
    Animal& operator=(const Animal& other);
    virtual ~Animal();
    virtual void makeSound() const;
    std::string getType() const;
};

#endif