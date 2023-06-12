#include "Fixed.hpp"

Fixed::Fixed():value(12) {}

Fixed::Fixed (const int value)
{
    this->value = value;
}

int Fixed::getValue() const{
    return (value);
}

//* -------- Bool operations --------
bool Fixed::operator>(const Fixed& value_1)const{

    return (this->value > value_1.value);
}

bool Fixed::operator>=(const Fixed& value_1)const{

    return (this->value >= value_1.value);
}

bool Fixed::operator<(const Fixed& value_1) const {
    
    return (this->value < value_1.value);
}

bool Fixed::operator<=(const Fixed& value_1) const {

    return (this->value <= value_1.value);
}

//* ----  Arthimethic Operations  --------
Fixed Fixed::operator+(const Fixed& other) const {

    Fixed result;

    result.value = this->value + other.value;
    return (result.value);
}

Fixed Fixed::operator-(const Fixed& other) const {
    
    Fixed result; 

    result.value = this->value - other.value;
    return (result.value);
}

Fixed Fixed::operator*(const Fixed& other) const {

    Fixed result;

    result.value = this->value * other.value;
    return (result.value);
}

Fixed Fixed::operator/(const Fixed& other) const {

    Fixed result;

    result.value = this->value / other.value ;
    return (result.value);
}

Fixed::Fixed(const Fixed& value2){
    std::cout << "Copy constructor was called" << std::endl;
    *this = value2;
}

Fixed& Fixed::operator=(const Fixed& other) {
    if (this != &other) {
            this->value = other.getValue();
        }
    std::cout << "Copy assignment operator called " << std::endl;
    return *this;
}

//* ----- Increment and Decrement methods ------

Fixed& Fixed::operator++(){

    value++;
    return (*this);  
}

Fixed& Fixed::operator--()
{
    value--;
    return (*this);
}

Fixed Fixed::operator++(int)
{
    Fixed old(*this);
    ++value;
    return (old);

}

Fixed Fixed::operator--(int)
{
    Fixed old(*this);
    --value;
    return (old);
}

//* ---------- Max and minimum ------------------ 
const Fixed& Fixed::min(const Fixed& a, const Fixed& b) {
    if (a.value < b.value) {
        return a;
    } else {
        return b;
    }
}

Fixed& Fixed::min(Fixed& a, Fixed& b) {
    if (a.value < b.value) {
        return a;
    } else {
        return b;
    }
}

const Fixed& Fixed::max(const Fixed& a, const Fixed& b) {
    if (a.value > b.value) {
        return a;
    } else {
        return b;
    }
}

Fixed& Fixed::max(Fixed& a, Fixed& b) {
    if (a.value > b.value) {
        return a;
    } else {
        return b;
    }
}

std::ostream& operator<<(std::ostream& out, const Fixed& value) {
    out << value.getValue();
    return out;
}