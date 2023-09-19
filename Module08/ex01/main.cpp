/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbin-nas <mbin-nas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 19:58:06 by mbin-nas          #+#    #+#             */
/*   Updated: 2023/09/19 12:16:23 by mbin-nas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main()
{
    Span n1 = Span(5);
    try 
    {
        n1.addNumber(6);
        n1.addNumber(3);
        n1.addNumber(17);
        n1.addNumber(9);
        n1.addNumber(11);

    std::cout << n1.shortestSpan() << " " <<  n1.longestSpan() << std::endl;
        // n1.numberAdd(5, 10, 1);
    }
    catch(Span::SizeError &e)
    {
      std::cout << e.what() << std::endl;   
    }
    
    // n1.printArray();    
    
    return (0);
}