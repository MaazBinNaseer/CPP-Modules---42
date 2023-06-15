/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbin-nas <mbin-nas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/15 18:12:47 by mbin-nas          #+#    #+#             */
/*   Updated: 2023/06/15 18:22:56 by mbin-nas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int argc, char **argv)
{
	Harl Person;

	if (argc != 2)
		std::cout << "[ Probably complaining about insignificant problems ]"
					<< std::endl;
    else
        Person.complain(argv[1]);
}