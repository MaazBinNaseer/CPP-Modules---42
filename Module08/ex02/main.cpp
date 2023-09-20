/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbin-nas <mbin-nas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 19:04:15 by mbin-nas          #+#    #+#             */
/*   Updated: 2023/09/19 12:34:01 by mbin-nas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

int main()
{
    MutantStack<int> mstack;
		mstack.push(12);
		mstack.push(18);
	std::cout << mstack.top() << std::endl;
		mstack.pop();
	std::cout << mstack.size() << std::endl;
		mstack.push(19);
		mstack.push(5);
		mstack.push(737);
		mstack.push(0);
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
		++it;
		--it;
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}
	std::stack<int> s(mstack);
	return 0;
}