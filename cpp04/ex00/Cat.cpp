#include "Cat.hpp"

Cat::Cat()
{
	this -> type = "Cat";
	std::cout << getType() << " created\n";
}

Cat::Cat(const Cat& other) : Animal(other)
{
	*this =  other;
}

Cat&	Cat::operator=(const Cat& other)
{
	if (this != &other)
	{
		Animal::operator=(other);
		this -> type = other.type;
	}
	return (*this);
}

Cat::~Cat()
{
	std::cout << getType() << " deleted\n";
}

void	Cat::makeSound() const
{
	std::cout << "Miauuu!!\n";
}