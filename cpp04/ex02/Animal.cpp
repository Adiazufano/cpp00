#include "Animal.hpp"

Animal::Animal()
{
	type = "Animal";
	std::cout << "Animal created" << std::endl;
}

Animal::Animal(const Animal& other) : type(other.type)
{
	std::cout << "Animal copy constructor called" << std::endl;
}

Animal&	Animal::operator=(const Animal& other)
{
	if (this != &other)
		this -> type = other.type;
	return(*this);
}

Animal::~Animal()
{
	std::cout << "Animal destroyed" << std::endl; 
}

void	Animal::makeSound() const
{
	std::cout << "Animal sound" << std::endl;
}

std::string	Animal::getType() const
{
	return(this -> type);
}