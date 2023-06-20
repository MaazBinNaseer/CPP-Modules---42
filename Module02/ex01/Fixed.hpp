/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbin-nas <mbin-nas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/08 21:39:37 by mbin-nas          #+#    #+#             */
/*   Updated: 2023/06/20 16:35:58 by mbin-nas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>
class Fixed {
    private:
        int value;
        static const int fractional_bits = 8;

    public:
        Fixed();
        Fixed(const int int_value);
        Fixed(const Fixed& value2);
        Fixed(const float float_value);
        Fixed& operator=(const Fixed& other);
        ~Fixed();
        int getRawBits(void) const;
        void setRawBits(int const raw);
        float toFloat(void) const;
        int toInt(void) const;
};
 
std::ostream &operator<<(std::ostream &out, const Fixed &value);

#endif
