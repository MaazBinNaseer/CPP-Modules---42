/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbin-nas <mbin-nas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 13:21:01 by mbin-nas          #+#    #+#             */
/*   Updated: 2023/08/29 13:43:57 by mbin-nas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>


template <typename T>
void printElement(const T &element) {
    std::cout << element << " ";
}

template <typename T, typename Func>
void iter(T *array, size_t length, Func function)
{
    for(size_t i= 0; i < length; i++)
    {
        function(array[i]);
    }
}
#endif