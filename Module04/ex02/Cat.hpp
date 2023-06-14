/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbin-nas <mbin-nas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 13:28:06 by mbin-nas          #+#    #+#             */
/*   Updated: 2023/06/14 14:20:57 by mbin-nas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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