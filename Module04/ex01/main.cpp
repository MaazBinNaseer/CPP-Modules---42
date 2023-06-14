/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbin-nas <mbin-nas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 17:56:28 by mbin-nas          #+#    #+#             */
/*   Updated: 2023/06/14 16:40:11 by mbin-nas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
    // const Animal* animal = new Animal ();
    // const Animal* j = new Dog();
    // const Animal* i = new Cat();

    // // std::cout << j << std::endl;
    // // std::cout << i << std::endl; 
    
    // delete j;
    // delete i;
    // delete animal;

    const int arraySize = 10;
    Animal* animals[arraySize];

    for (int i = 0; i < arraySize; ++i) {
        if (i % 2 == 0)
            {
                // std::cout << "Dog index: " << i << " ";
                animals[i] = new Dog();
             }
        else
            animals[i] = new Cat();
    }

    for (int i = 0; i < arraySize; ++i) {
        animals[i]->makeSound();
        delete animals[i];
    }

    return (0);
}