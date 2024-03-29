/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbin-nas <mbin-nas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 13:20:31 by mbin-nas          #+#    #+#             */
/*   Updated: 2023/08/29 13:20:32 by mbin-nas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
#define WHATEVER_HPP

#include <iostream>

template <typename T>
void swap(T &a, T &b) 
{
    T temp;
    temp = a;
    a = b;
    b = temp;
};

template <typename T>
T min(T &a, T &b)
{
    if (a >= b)
        return (b);
    else
        return (a);
};

template <typename T>
T max(T &a, T &b)
{
    if(a >= b)
        return (a);
    else
        return (b);
}

#endif