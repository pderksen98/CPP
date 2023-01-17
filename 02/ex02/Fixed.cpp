#include "Fixed.hpp"

Fixed::Fixed() : _fixedPoint(0)
{
	// std::cout << GREEN << "Default constructor\n" << PLAIN;
}

Fixed::Fixed(const Fixed& other)
{
	// std::cout << GREEN << "Copy constructor\n" << PLAIN;
	*this = other;
}

Fixed& Fixed::operator=(const Fixed& other)
{
	// std::cout << CYAN << "Copy assigment operator\n" << PLAIN;
	this->_fixedPoint = other._fixedPoint;
	return (*this);
}

Fixed::~Fixed()
{
	// std::cout << RED << "Destructor\n" << PLAIN;
}

int	Fixed::getRawBits() const
{
	// std::cout << "getRawBits member function called\n";
	return (_fixedPoint);
}

void	Fixed::setRawBits(int const raw)
{
	_fixedPoint = raw;
}

//************* ALL ABOVE ARE THE SAME FUNCTIONS FROM EXERCISE 00 ******************//
//************* ALL ABOVE ARE THE SAME FUNCTIONS FROM EXERCISE 00 ******************//
//************* ALL ABOVE ARE THE SAME FUNCTIONS FROM EXERCISE 00 ******************//
//************* ALL ABOVE ARE THE SAME FUNCTIONS FROM EXERCISE 00 ******************//
//************* ALL ABOVE ARE THE SAME FUNCTIONS FROM EXERCISE 00 ******************//

std::ostream& operator<<(std::ostream& stream, const Fixed& obj)
{
	stream << obj.toFloat();
	return (stream);
}

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

//************* ALL ABOVE ARE THE SAME FUNCTIONS FROM EXERCISE 01 ******************//
//************* ALL ABOVE ARE THE SAME FUNCTIONS FROM EXERCISE 01 ******************//
//************* ALL ABOVE ARE THE SAME FUNCTIONS FROM EXERCISE 01 ******************//
//************* ALL ABOVE ARE THE SAME FUNCTIONS FROM EXERCISE 01 ******************//
//************* ALL ABOVE ARE THE SAME FUNCTIONS FROM EXERCISE 01 ******************//


bool    Fixed::operator>(const Fixed& other) const
{
	return (this->toFloat() > other.toFloat());
}

bool    Fixed::operator<(const Fixed& other) const
{
	return (this->toFloat() < other.toFloat());
}

bool    Fixed::operator<=(const Fixed& other) const
{
	return (this->toFloat() <= other.toFloat());
}

bool    Fixed::operator>=(const Fixed& other) const
{
	return (this->toFloat() >= other.toFloat());
}

bool    Fixed::operator==(const Fixed& other) const
{
	return (this->toFloat() == other.toFloat());
}

bool    Fixed::operator!=(const Fixed& other) const
{
	return (this->toFloat() != other.toFloat());
}

Fixed	Fixed::operator+(const Fixed& other) const
{
	Fixed	result(this->toFloat() + other.toFloat());
	return (result);
}

Fixed	Fixed::operator-(const Fixed& other) const
{
	Fixed	result(this->toFloat() - other.toFloat());
	return (result);
}

Fixed	Fixed::operator*(const Fixed& other) const
{
	Fixed	result(this->toFloat() * other.toFloat());
	return (result);
}

Fixed	Fixed::operator/(const Fixed& other) const
{
	Fixed	result(this->toFloat() / other.toFloat());
	return (result);
}

//pre-increment
Fixed&	Fixed::operator++()
{
	this->_fixedPoint++;
	return (*this);
}

//post-increment
Fixed	Fixed::operator++(int)
{
	Fixed	old(*this);

	++(*this);
	return (old);
}

//pre-decrement
Fixed&	Fixed::operator--()
{
	this->_fixedPoint--;
	return (*this);
}

//post-decrement
Fixed	Fixed::operator--(int)
{
	Fixed	old(*this);

	--(*this);
	return (old);
}