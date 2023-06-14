/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbin-nas <mbin-nas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 17:56:24 by mbin-nas          #+#    #+#             */
/*   Updated: 2023/06/13 18:09:31 by mbin-nas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class Animal{
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

class Dog : public Animal
{
  public:
    Dog();
    Dog(const std::string& type);
    Dog(const Dog& value);
    Dog& operator=(const Dog& other);
    void makeSound() const;
    ~Dog();

};



class Cat : public Animal
{
  public:
    Cat();
    Cat(const std::string& type);
    Cat(const Cat& value);
    Cat& operator=(const Cat& other);
    void makeSound() const;
    ~Cat();

};