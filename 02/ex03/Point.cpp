#include "Point.hpp"
#include "Fixed.hpp"

Point::Point()
: _x(0), _y(0)
{
	std::cout << GREEN <<"Default constructor" << PLAIN << std::endl;
}

Point::Point(const float x, const float y)
: _x(Fixed(x)), _y(Fixed(y))
{
}

Point::Point(const Point& other)
: _x(other._x), _y(other._y)
{
	std::cout << GREEN <<"Copy constructor" << PLAIN << std::endl;
}

Point&	Point::operator=(const Point& other)
{
	(void)other;
	std::cout << RED << "Because const private atributes, the copy assignment is not possible. Default constructor used\n" << PLAIN;
	return (*this);
}

Point::~Point()
{
}



Fixed   Point::triangleArea(const Point& a, const Point& b, const Point& c)
{
	Fixed result = (a._x * (b._y - c._y) + b._x * (c._y - a._y) + c._x * (a._y - b._y)) / 2;
	// std::cout << result.toFloat() << std::endl;
	return (fabs(result.toFloat()));
}
