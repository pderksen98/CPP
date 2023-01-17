#include "Fixed.hpp"

Fixed::Fixed() : _fixedPoint(0)
{
	std::cout << GREEN << "Default constructor\n" << PLAIN;
}

Fixed::Fixed(const Fixed& other)
{
	std::cout << GREEN << "Copy constructor\n" << PLAIN;
	*this = other;
}

Fixed& Fixed::operator=(const Fixed& other)
{
	std::cout << CYAN << "Copy assigment operator\n" << PLAIN;
	this->_fixedPoint = other._fixedPoint;
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
	_fixedPoint = raw;
}

//************* ALL ABOVE ARE THE SAME FUNCTIONS FROM EXERCISE 00 ******************//

Fixed::Fixed(const int value)
{
	std::cout << GREEN << "Int constructor called\n" << PLAIN;
	this->_fixedPoint = (value << this->_fractBits);
}

Fixed::Fixed(const float value)
{
	std::cout << GREEN << "Float constructor called\n" << PLAIN;
	this->_fixedPoint = roundf(value * (1 << this->_fractBits));
}

float	Fixed::toFloat(void) const
{
	return ((float)_fixedPoint / (1 << _fractBits));
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
