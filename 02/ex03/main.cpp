#include "Fixed.hpp"
#include "Point.hpp"

int main( void )
{
	Point A(1, 1);
	Point B(4, 2);
	Point C(2, 7);

	Point P1(2, 3);
	Point P2(1.5, 5);
	Point P3(1, 1);

	bool	first = bsp(A, B, C, P1);
	Point::printPoint(A, B, C, P1, first);

	bool	second = bsp(A, B, C, P2);
	Point::printPoint(A, B, C, P2, second);

	bool	third = bsp(A, B, C, P3);
	Point::printPoint(A, B, C, P3, third);

	return 0;
}
