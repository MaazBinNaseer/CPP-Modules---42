/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbin-nas <mbin-nas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 19:04:18 by mbin-nas          #+#    #+#             */
/*   Updated: 2023/09/19 12:08:14 by mbin-nas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STACK_HPP
#define STACK_HPP

#include <iostream>
#include <stack>
#include <vector>
#include <iterator>

template <typename T>
class MutantStack : public std::stack<T>
{
    public:
        MutantStack(): std::stack<T>()
        {}
        
        MutantStack(const MutantStack &object) 
        {
            *this = object;
        }
        
        MutantStack& operator=(const MutantStack& object)
        {
            if (this != &object) {
            std::stack<T>::operator=(object);
        }
        return (*this);
        }
        

        typedef typename std::stack<T>::container_type::iterator iterator;
        iterator begin() 
        {
           return (this->c.begin());
        }
        
        iterator end()
        {
            return (this->c.end());
        }
        
        typedef typename std::stack<T>::container_type::const_iterator c_iterator;
        c_iterator begin() const
        {
           return (this->c.begin());
        }
        
        c_iterator end() const
        {
            return (this->c.end());
        }
        
        ~MutantStack() {}
};

#endif