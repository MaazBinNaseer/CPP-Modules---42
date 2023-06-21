/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbin-nas <mbin-nas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 17:56:28 by mbin-nas          #+#    #+#             */
/*   Updated: 2023/06/21 20:19:11 by mbin-nas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main()
{
    const Animal* animal = new Animal ();
    const Animal* j = new Dog();
    const Animal* i = new Cat();

    /*------- COPY CONSTRUCTOR ---------- */
    Cat b;
    Cat c = b;
    /* ----------------------------------*/
    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << std::endl;
    i->makeSound();
    j->makeSound();
    animal->makeSound();
    
    delete j;
    delete i;
    delete animal;
    
    //* --------------- WRONG ANIMAL/CAT------------------
    const WrongAnimal* wrong_animal = new WrongAnimal();
    const WrongAnimal* k = new WrongCat();
    
    std::cout << "Wrong Cat " << k->getType() << std::endl;

    WrongCat cat1;
    cat1.makeSound(); 
    wrong_animal->makeSound();
    
    delete wrong_animal;
    delete k;    

    
}