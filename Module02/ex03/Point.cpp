#include "Point.hpp"

Point::Point(): x(0), y(0)
{
    // std::cout << "Default Point constructor is called " << std::endl;
}

Point::Point(float x, float y): x(x), y(y)
{
    // std::cout<< " Point constructor is being called " << std::endl;
}

Fixed Point::getX() const
{
    return (this->x);
}

Fixed Point::getY() const
{
    return (this->y);
}

Point::Point(const Point& value)
{
    // std::cout << "Copy constructor was called" << std::endl;
    *this = value;
}

Point& Point::operator=(const Point& other)
{
        if (this != &other)
        {
            const_cast<Fixed&>(this->x) = other.getX();
            const_cast<Fixed&>(this->y) = other.getY();
        }
    return *this;

}

Point::~Point()
{
    std::cout << "Point Destructor is being called " << std:: endl;
}