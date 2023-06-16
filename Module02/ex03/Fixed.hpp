#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed{
    private:
        int value;


    public:
        Fixed();
        Fixed(const int value);
        Fixed(const Fixed& value2);
        Fixed& operator=(const Fixed& other); 
        int getValue(void) const;

        bool operator>(const Fixed& value) const;
        bool operator<(const Fixed& value) const;
        bool operator>=(const Fixed& value) const;
        bool operator<=(const Fixed& value) const;
        bool operator ==(const Fixed& other) const;
        bool operator !=(const Fixed& other) const;

        Fixed operator+(const Fixed& other) const;
        Fixed operator-(const Fixed& other) const;
        Fixed operator*(const Fixed& other) const;
        Fixed operator/(const Fixed& other) const;

        Fixed& operator++();
        Fixed operator++(int); 
        Fixed& operator--(); 
        Fixed operator--(int);

        static const Fixed& min(const Fixed& value_1, const Fixed& value_2);
        static Fixed& min(Fixed& value_1, Fixed& value_2);
        static const Fixed& max(const Fixed& value_1, const Fixed& value_2);
        static Fixed& max(Fixed& value_1, Fixed& value_2);
};

std::ostream& operator<<(std::ostream& out, const Fixed& fixed);

#endif