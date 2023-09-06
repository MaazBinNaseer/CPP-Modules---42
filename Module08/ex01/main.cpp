/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbin-nas <mbin-nas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 19:58:06 by mbin-nas          #+#    #+#             */
/*   Updated: 2023/09/06 13:49:02 by mbin-nas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main()
{
    Span n1 = Span(100);
    try 
    {
        n1.addNumber(10);
        n1.addNumber(15);

        n1.numberAdd(5, 10, 2);
    }
    catch(Span::SizeError &e)
    {
      std::cout << e.what() << std::endl;   
    }
    
    n1.printArray();    
    
    return (0);
}