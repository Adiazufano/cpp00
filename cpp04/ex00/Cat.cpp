#include "Cat.hpp"

Cat::Cat()
{
	type = "Cat";
	std::cout << "Cat created" << std::endl;
}

Cat::Cat(const Cat& other) : Animal(other)
{
	std::cout << "Cat copy constructor called" << std::endl;
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
	std::cout << "Cat deleted" << std::endl;
}

void	Cat::makeSound() const
{
	std::cout << "Miauuu!!" << std::endl;
}