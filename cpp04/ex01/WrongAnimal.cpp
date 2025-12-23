#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
	this -> type = "";
	std::cout << "WrongAnimal created\n";
}

WrongAnimal::WrongAnimal(const WrongAnimal& other)
{
	*this = other;
}

WrongAnimal&	WrongAnimal::operator=(const WrongAnimal& other)
{
	if (this != &other)
		this -> type = other.type;
	return(*this);
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal destroyed\n";
}

void	WrongAnimal::makeSound() const
{
	std::cout << "WrongAnimal sound\n";
}

void	WrongAnimal::setType(std::string type)
{
	this -> type = type;
}

std::string	WrongAnimal::getType() const
{
	return(this -> type);
}