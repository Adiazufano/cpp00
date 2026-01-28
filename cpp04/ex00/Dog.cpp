#include "Dog.hpp"

Dog::Dog()
{
	type = "Dog";
	std::cout << "Dog created" << std::endl;
}

Dog::Dog(const Dog& other) : Animal(other)
{
	std::cout << "Dog copy constructor called" << std::endl;
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
	std::cout << "Dog deleted" << std::endl;
}

void	Dog::makeSound() const
{
	std::cout << "Guauuu!!" << std::endl;
}