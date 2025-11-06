#include "Fixed.hpp"

Fixed::Fixed() : value(0)
{
	std::cout << "Default constructor called\n";
}

Fixed::Fixed(const Fixed& other)
{
	this -> value = other.value;
	std::cout << "Copy constructor called\n";
}

Fixed&	Fixed::operator=(const Fixed& other)
{
	if (this != &other)
	{
		this -> value = other.value;
	}
	std::cout << "Copy asigment operator called\n";
	return (*this);
}

Fixed::~Fixed()
{
	std::cout << "Destructor called\n";
};

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