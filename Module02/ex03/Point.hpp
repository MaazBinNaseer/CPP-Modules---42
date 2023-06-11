#include "Fixed.hpp"

class Point{
    private:
        const Fixed x;
        const Fixed y;

    public:
        Point();
        Point(float x, float y);
        Point(const Point& value);
        Point& operator=(const Point& other);
        ~Point();
        static bool bsp(const Point& a, const Point& b, const Point& c, const Point& point);

};
