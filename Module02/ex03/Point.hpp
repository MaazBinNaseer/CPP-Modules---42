#ifndef POINT_HPP
#define POINT_HPP

#include "Fixed.hpp"
#include <cmath>

class Point
{
    private:
        const Fixed x;
        const Fixed y;

    public:
        Point();
        Point(float x, float y);
        Fixed getX() const;
        Fixed getY() const;
        Point(const Point& other);
        Point& operator=(const Point& other);
        ~Point();
        
};

bool    bsp(Point const a, Point const b, Point const c, Point const point);


#endif