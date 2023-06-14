/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbin-nas <mbin-nas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 13:27:49 by mbin-nas          #+#    #+#             */
/*   Updated: 2023/06/14 14:32:57 by mbin-nas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
  private:
    Brain* brain;
    
  public:
    Dog();
    Dog(const std::string& type);
    Dog(const Dog& value);
    Dog& operator=(const Dog& other);
    void makeSound() const;
    ~Dog();
};

#endif