/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbin-nas <mbin-nas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 13:28:06 by mbin-nas          #+#    #+#             */
/*   Updated: 2023/06/22 12:18:06 by mbin-nas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
  private:
    Brain* brain;

  public:
    Cat();
    Cat(const std::string& type);
    Cat(const Cat& value);
    Cat& operator=(const Cat& other);
    void makeSound() const;
    ~Cat();

};

#endif