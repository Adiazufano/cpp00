#include "Cat.hpp"

Cat::Cat()
{
	this -> type = "Cat";
	this -> brain = new Brain();
	std::cout << getType() << " created" << std::endl;
}

Cat::Cat(const Cat& other) : Animal(other)
{
	std::cout << "Cat copy construcor executed" << std::endl;
	brain = new Brain(*other.brain);
	type = other.type;
}

Cat&	Cat::operator=(const Cat& other)
{
	if (this != &other)
	{
		Animal::operator=(other);
		delete brain;
		brain = new Brain(*other.brain);
		type = other.type;
	}
	return (*this);
}

Cat::~Cat()
{
	std::cout << getType() << " deleted" << std::endl;
	delete brain;
}

void	Cat::makeSound() const
{
	std::cout << "Miauuu!!" << std::endl;
}

Brain*	Cat::getBrain()
{
	return (brain);
}