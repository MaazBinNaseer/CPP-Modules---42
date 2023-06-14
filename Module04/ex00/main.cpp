/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbin-nas <mbin-nas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 17:56:28 by mbin-nas          #+#    #+#             */
/*   Updated: 2023/06/14 13:32:54 by mbin-nas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"

int main()
{
    const Animal* animal = new Animal ();
    const Animal* j = new Dog();
    const Animal* i = new Cat();

    
    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << std::endl;
    i->makeSound();
    j->makeSound();
    animal->makeSound();

    delete j;
    delete i;
    delete animal;
}