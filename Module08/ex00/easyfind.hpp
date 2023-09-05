/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbin-nas <mbin-nas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 14:48:18 by mbin-nas          #+#    #+#             */
/*   Updated: 2023/09/05 19:36:03 by mbin-nas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <algorithm>
#include <vector>
#include <exception>


template <typename T> 

typename T::iterator easyfind(T& p1, int p2)
{
    return (std::find(p1.begin(), p1.end(), p2));
}

// class OutofRange: public std::exception
// {
//     public:
//         virtual const char* what() const throw()
//         {
//             return ("Cannot find the value inside the vector");
//         }
    
// };