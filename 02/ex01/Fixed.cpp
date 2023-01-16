#include "Fixed.hpp"

Fixed::Fixed() : _fixedPoint(0)
{
	std::cout << GREEN << "Default constructor\n" << PLAIN;
}

Fixed::Fixed(const Fixed& other)
{
	std::cout << YELLOW << "Copy constructor\n" << PLAIN;
	_fixedPoint = other.getRawBits();
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
	return (_fixedPoint);
}

void	Fixed::setRawBits(int const raw)
{
	// std::cout << "setRawBits member function called\n";
	_fixedPoint = raw;
}

Fixed::Fixed(const int num)
{
	std::cout << "Int constructor called\n";
	_fixedPoint = (num << _fractBits);
}

Fixed::Fixed(const float num)
{
	std::cout << "Float constructor called\n";
	_fixedPoint = (round(num * (1 << _fractBits)));
}

float	Fixed::toFloat(void) const
{
	return ((float)_fixedPoint / (float)(1 << _fractBits));
}

int	Fixed::toInt(void) const
{
	return (_fixedPoint >> _fractBits);
}

std::ostream& operator<<(std::ostream& stream, const Fixed& obj)
{
	stream << obj.toFloat();
	return (stream);
}
