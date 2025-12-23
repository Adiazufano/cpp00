#include "Dog.hpp"

Dog::Dog()
{
	this -> type = "Dog";
	std::cout << getType() << " created\n";
}

Dog::Dog(const Dog& other) : Animal(other)
{
	*this =  other;
}

Dog&	Dog::operator=(const Dog& other)
{
	if (this != &other)
	{
		Animal::operator=(other);
		this -> type = other.type;
	}
	return (*this);
}

Dog::~Dog()
{
	std::cout << getType() << " deleted\n";
}

void	Dog::makeSound() const
{
	std::cout << "Guauuu!!\n";
}