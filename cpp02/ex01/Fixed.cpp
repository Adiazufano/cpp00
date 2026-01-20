#include "Fixed.hpp"
#include <cmath>

Fixed::Fixed() : value(0)
{
	std::cout << "Default constructor called\n";
}

Fixed::Fixed(const int num)
{
	this->value = num << fractionalBits;
	std::cout << "Int constructor called\n";
}

Fixed::Fixed(const float num)
{
	std::cout << "Float constructor called\n";
	this->value = roundf(num  * (1 << fractionalBits));
}

Fixed::Fixed(const Fixed &other)
{
	std::cout << "Copy constructor called\n";
	*this = other;
}

Fixed &Fixed::operator=(const Fixed &other)
{
	std::cout << "Copy assignment operator called\n";
	if (this != &other)
		this->value = other.getRawBits();
	return (*this);
}

Fixed::~Fixed()
{
	std::cout << "Destructor called\n";
}

int		Fixed::getRawBits(void) const
{
	return (this -> value);
}

void	Fixed::setRawBits(int raw)
{
	this -> value = raw;
	std::cout << "setRawBits member function called\n";
}

float Fixed::toFloat(void) const
{
	return (static_cast<float>(this->value) / (1 << fractionalBits));
}

int Fixed::toInt(void) const
{
	return (this->value >> fractionalBits);
}

std::ostream &operator<<(std::ostream &os, const Fixed &fixed)
{
	os << fixed.toFloat();
	return (os);
}