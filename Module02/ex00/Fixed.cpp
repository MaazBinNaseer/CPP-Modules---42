/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbin-nas <mbin-nas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/08 17:15:50 by mbin-nas          #+#    #+#             */
/*   Updated: 2023/06/08 21:36:42 by mbin-nas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

Fixed::Fixed():value(0) {
    std::cout << "Default constructor was called" << std::endl;
}

Fixed::Fixed(const Fixed& value2){
    std::cout << "Copy constructor was called" << std::endl;
    *this = value2;
}

Fixed& Fixed::operator=(const Fixed& other) {
    if (this != &other) {
        value = other.value;
    }
    std::cout << "Copy assignment operator called " << std::endl;
    return *this;
}

Fixed::~Fixed() {
    std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits(void) const {
    std::cout << "getRawBits member function called" << std::endl;
    return (value);
}

void Fixed::setRawBits(int const raw) {
    value = raw;
}

int main( void ) {
    Fixed a;
    Fixed b(a);
    Fixed c;
    c = b;
    std::cout << a.getRawBits() << std::endl; 
    std::cout << b.getRawBits() << std::endl; 
    std::cout << c.getRawBits() << std::endl;
    return 0; 
}


