#include "Fixed.hpp"
#include "Point.hpp"

void    Point::printPoint(const Point& A, const Point& B, const Point& C, const Point& P, bool flag)
{
    std::cout << "The point with coordinates " << CYAN << "x = " << P._x << " & y = " << P._y << PLAIN << " is ";
    if (flag == false)
        std::cout << RED << "NOT " << PLAIN << "in the triangle with vertices" << CYAN;
    else
        std::cout << GREEN << "IN " << PLAIN << "the triangle with vertices" << CYAN;
    std::cout << " [" << A._x << "," << A._y << "], [" << B._x << "," << B._y << "], [" << C._x << "," << C._y << "]" << PLAIN << std::endl;
}


bool    bsp(const Point& A, const Point& B, const Point& C, const Point& P)
{
    Fixed   triangle_ABC = Point::triangleArea(A, B, C);
    Fixed   triangle_ABP = Point::triangleArea(A, B, P);
    Fixed   triangle_ACP = Point::triangleArea(A, C, P);
    Fixed   triangle_BCP = Point::triangleArea(B, C, P);
    Fixed   together = triangle_ABP + triangle_ACP + triangle_BCP;

    if (triangle_ABC.getRawBits() != together.getRawBits())
        return (false);
    return (true);
}
