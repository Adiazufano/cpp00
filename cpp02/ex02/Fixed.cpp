#include "Fixed.hpp"
#include <cmath>

Fixed::Fixed() : value(0)
{
	std::cout << "Default constructor called\n";
}

Fixed::Fixed(const int num)
{
	this->value = num * (1 << fractionalBits);
	std::cout << "Int constructor called\n";
}

Fixed::Fixed(const float num)
{
	this->value = static_cast<int>(roundf(num * (1 << fractionalBits)));
	std::cout << "Float constructor called\n";
}

Fixed::Fixed(const Fixed &other)
{
	this->value = other.value;
	std::cout << "Copy constructor called\n";
}

Fixed &Fixed::operator=(const Fixed &other)
{
	if (this != &other)
		this->value = other.value;
	std::cout << "Copy as assigment operator called\n";
	return (*this);
}

Fixed::~Fixed()
{
	std::cout << "Destructor called\n";
}

int		Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called\n";
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

bool	Fixed::operator<(const Fixed& fixed) const
{
	return (this->value < fixed.value);
}

bool	Fixed::operator>(const Fixed& fixed) const
{
	return (this->value > fixed.value);
}

bool	Fixed::operator<=(const Fixed& fixed) const
{
	return (this->value <= fixed.value);
}

bool	Fixed::operator>=(const Fixed& fixed) const
{
	return (this->value >= fixed.value);
}

bool	Fixed::operator!=(const Fixed& fixed) const
{
	return (this->value != fixed.value);
}

bool	Fixed::operator==(const Fixed& fixed) const
{
	return (this->value == fixed.value);
}

Fixed	Fixed::operator+(const Fixed& fixed) const
{
	return Fixed(this->toFloat() + fixed.toFloat());
}

Fixed	Fixed::operator-(const Fixed& fixed) const
{
	return Fixed(this->toFloat() - fixed.toFloat());
}

Fixed	Fixed::operator*(const Fixed& fixed) const
{
	return Fixed(this->toFloat() * fixed.toFloat());
}

Fixed	Fixed::operator/(const Fixed& fixed) const
{
	return Fixed(this->toFloat() / fixed.toFloat());
}

Fixed&	Fixed::min(Fixed& firstFixed, Fixed& secondFixed)
{
	if (firstFixed < secondFixed)
		return (firstFixed);
	else
		return (secondFixed);
}

Fixed&	Fixed::max(Fixed& firstFixed, Fixed& secondFixed)
{
	if (firstFixed > secondFixed)
		return (firstFixed);
	else
		return (secondFixed);
}

const Fixed&	Fixed::min(const Fixed& firstFixed, const Fixed& secondFixed)
{
	if (firstFixed < secondFixed)
		return (firstFixed);
	else
		return (secondFixed);
}

const Fixed&	Fixed::max(const Fixed& firstFixed, const Fixed& secondFixed)
{
	if (firstFixed > secondFixed)
		return (firstFixed);
	else
		return (secondFixed);
}