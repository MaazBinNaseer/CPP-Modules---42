/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbin-nas <mbin-nas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 17:56:28 by mbin-nas          #+#    #+#             */
/*   Updated: 2023/06/22 12:59:19 by mbin-nas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
    // const Animal* animal = new Animal();
    std::cout << "--------------- THE MAIN TEST ------------ " << std::endl;
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    // const Animal* k = new Animal();
    // std::cout << j << std::endl;
    // std::cout << i << std::endl; 
    // Cat a;
    // Cat b;
    // b = a;
    
    delete j;
    delete i;
    // delete a;
    // delete animal;


    
}