#include "Fixed.hpp"

int main(void)
{
	//OPERATORS OVERLOADING
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
	


	//PRE AND POST INCREMENT
	Fixed	a;
	Fixed	const b(Fixed(5.05f) * Fixed(2));


	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;

	std::cout << b << std::endl;

	std::cout << Fixed::max(a, b) << std::endl;


	// MIN_MAX FUNCTIONA
	// Fixed	normal_a(10);
	// Fixed	normal_b(5);

	// const Fixed	const_a(10);
	// const Fixed	const_b(5);

	// std::cout << "First the normals\n";
	// std::cout << Fixed::min(normal_a,normal_b) << std::endl;
	// std::cout << Fixed::max(normal_a, normal_b) << std::endl;
	// std::cout << std::endl;
	// std::cout << "Now the const member functions\n";
	// std::cout << Fixed::min(const_a,const_b) << std::endl;
	// std::cout << Fixed::max(const_a,const_b) << std::endl;



	return (0);
}
