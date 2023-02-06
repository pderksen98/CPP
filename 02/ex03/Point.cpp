#include "Point.hpp"
#include "Fixed.hpp"


Point::Point()
: _x(0), _y(0)
{
}

Point::Point(const float x, const float y)
: _x(Fixed(x)), _y(Fixed(y))
{
}

Point::Point(const Point& other)
: _x(other._x), _y(other._y)
{
}

Point&	Point::operator=(const Point& other)
{
   (void)other;
   std::cout << "Because const the copy assignment is not possible, default constructor used\n";
   return (*this);
}

Point::~Point()
{

}



void   Point::triangleArea(const Point a, const Point b, const Point c)
{
   Fixed result = (a._x * (b._y - c._y) + b._x * (c._y - a._y) + c._x * (a._y - b._y)) / 2;
   std::cout << result.toFloat() << std::endl;
   // Fixed result(abs((a._x * (b._y - c._y) + b._x * (c._y - a._y) + c._x * (a._y - b._y)) / 2));
   // return (result);
}
