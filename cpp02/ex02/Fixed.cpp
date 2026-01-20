#include "Fixed.hpp"
#include <cmath>

Fixed::Fixed() : value(0)
{
}

Fixed::Fixed(const int num)
{
	this->value = num * (1 << fractionalBits);
}

Fixed::Fixed(const float num)
{
	this->value = static_cast<int>(roundf(num * (1 << fractionalBits)));
}

Fixed::Fixed(const Fixed &other)
{
	*this = other;
}

Fixed &Fixed::operator=(const Fixed &other)
{
	if (this != &other)
		this->value = other.value;
	return (*this);
}

Fixed::~Fixed()
{
}

int		Fixed::getRawBits(void) const
{
	return (this -> value);
}

void	Fixed::setRawBits(int raw)
{
	this -> value = raw;
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

Fixed&	Fixed::operator++()
{
	this->value++;
	return (*this);
}

Fixed	Fixed::operator++(int)
{
	Fixed	temp(*this);
	this -> value++;
	return (temp);
}

Fixed&	Fixed::operator--()
{
	this -> value--;
	return (*this);
}

Fixed	Fixed::operator--(int)
{
	Fixed	temp(*this);
	this -> value--;
	return (temp);
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