#include "Fixed.hpp"

Fixed::Fixed() : _value(0)
{
	std::cout << GREEN << "Default constructor\n" << PLAIN;
}

Fixed::Fixed(const Fixed& other)
{
	std::cout << YELLOW << "Copy constructor\n" << PLAIN;
	_value = other.getRawBits();
	// *this = other;
}

Fixed& Fixed::operator=(const Fixed& other)
{
	std::cout << CYAN << "Copy assigment operator\n" << PLAIN;
	setRawBits(other.getRawBits());
	return (*this);
}

Fixed::~Fixed()
{
	std::cout << RED << "Destructor\n" << PLAIN;
}

int	Fixed::getRawBits() const
{
	std::cout << "getRawBits member function called\n";
	return (_value);
}

void	Fixed::setRawBits(int const raw)
{
	// std::cout << "setRawBits member function called\n";
	_value = raw;
}