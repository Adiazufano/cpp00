#include "Animal.hpp"

Animal::Animal()
{
	this -> type = "";
	std::cout << "Animal created\n";
}

Animal::Animal(const Animal& other)
{
	*this = other;
}

Animal&	Animal::operator=(const Animal& other)
{
	if (this != &other)
		this -> type = other.type;
	return(*this);
}

Animal::~Animal()
{
	std::cout << "Animal destroyed\n";
}

void	Animal::makeSound() const
{
	std::cout << "Animal sound\n";
}

void	Animal::setType(std::string type)
{
	this -> type = type;
}

std::string	Animal::getType() const
{
	return(this -> type);
}