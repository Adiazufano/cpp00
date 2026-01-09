#include "Cat.hpp"

Cat::Cat()
{
	this -> type = "Cat";
	this -> brain = new Brain();
	std::cout << getType() << " created\n";
}

Cat::Cat(const Cat& other) : Animal(other)
{
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
	std::cout << getType() << " deleted\n";
	delete brain;
}

void	Cat::makeSound() const
{
	std::cout << "Miauuu!!\n";
}

Brain*	Cat::getBrain()
{
	return (brain);
}