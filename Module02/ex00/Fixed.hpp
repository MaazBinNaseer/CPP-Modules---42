/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbin-nas <mbin-nas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/08 17:15:53 by mbin-nas          #+#    #+#             */
/*   Updated: 2023/06/19 17:13:17 by mbin-nas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed {
    private:
        int value;
        static const int fractional_bits = 8;

    public:
        Fixed();
        Fixed(const Fixed& value2);
        Fixed& operator=(const Fixed& other);
        ~Fixed();
        int getRawBits(void) const;
        void setRawBits(int const raw);
};

#endif

