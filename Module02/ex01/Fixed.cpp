/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbin-nas <mbin-nas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/08 21:39:34 by mbin-nas          #+#    #+#             */
/*   Updated: 2023/06/20 16:36:14 by mbin-nas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(): value(0) {
    std::cout << "Default constructor is being called" << std::endl;
}


/* --------------------------------------------------------------------------
# @brief: 
* The point of having the (int << this->fractional_bits) is beacause of the 
* shifting the bitwise operation onto the left side of the decimal value. 
# @Example:
* When the value = 10 and the binary representation is = 00001010 << 8
* We then shift the positions of ones to left side by 8 places
* Also keep in mind that [128][64][32][16][8][4][2][1] are the power of 2
* in the bitwise operation. 
--> Now we have shifted it by 8 places which is 2560 decimal value
----------------------------------------- --------------------------------*/

Fixed::Fixed(const int int_value){
    std::cout << "Int constructor was called" << std::endl;
    this->value = (int_value << this->fractional_bits);
}

Fixed::Fixed(const float float_value){
    std::cout << "Float constructor was called" << std::endl;
    this->value = roundf(float_value * (1 << this->fractional_bits));
}

Fixed::Fixed(const Fixed& value2){
    std::cout << "Copy constructor was called" << std::endl;
    *this = value2;
}

Fixed& Fixed::operator=(const Fixed& other) {
    if (this != &other) {
            this->value = other.getRawBits();
        }
    std::cout << "Copy assignment operator called " << std::endl;
    return *this;
}

int Fixed::getRawBits(void) const {
        std::cout << "getRawBits member function is called" << std::endl;
        return this->value;
}

void Fixed::setRawBits(int const raw) {
        this->value = raw;
}

float Fixed::toFloat(void) const {
        return this->value / (float)(1 << fractional_bits);
}

int Fixed::toInt(void) const {
        return this->value >> fractional_bits;
}

Fixed::~Fixed(){
    std::cout << "Destructor called" <<  std::endl;
}

std::ostream &operator<<(std::ostream &out, const Fixed &value) {
    out << value.toFloat();
    return out;
}