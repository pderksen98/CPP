#include "Fixed.hpp"

int main(void)
{
	// Fixed	const a(10);
	// Fixed	const b(5);
	// Fixed	const c(10.0f);
	// Fixed	const d(a - b);

	// if (a > b)
	// 	std::cout << "a > b" << std::endl;
	// if (a == c)
	// 	std::cout << "a == c" << std::endl;
	// if (a != b)
	// 	std::cout << "a != b" << std::endl;
	// if (b < c)
	// 	std::cout << "b < c" << std::endl;
	// if (a >= b && a >= c)
	// 	std::cout << "a >= b && a >= c" << std::endl;
	// if (b <= c)
	// 	std::cout << "b <= c" << std::endl;
	
	Fixed	a;
	Fixed	const b(Fixed(5.05f) * Fixed(2));


	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;

	std::cout << b << std::endl;

	// std::cout << Fixed::max(a, b) << std::endl;
	return (0);
}