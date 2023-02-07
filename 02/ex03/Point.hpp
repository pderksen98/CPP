#ifndef POINT_HPP
#define POINT_HPP
#include "Fixed.hpp"

class Point
{
	private:
	const	Fixed _x;
	const	Fixed _y;

	public:
	Point();
	Point(const float x, const float y);
	Point(const Point& other);
	Point&	operator=(const Point& other);
	~Point();

	static Fixed	triangleArea(const Point& a, const Point& b, const Point& c);
	static void		printPoint(const Point& A, const Point& B, const Point& C, const Point& P, bool flag);
};
	bool    bsp(const Point& A, const Point& B, const Point& C, const Point& P);


#endif