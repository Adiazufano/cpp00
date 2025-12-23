#include "Dog.hpp"

Dog::Dog()
{
	this -> type = "Dog";
	this -> brain = new Brain();
	std::cout << getType() << " created\n";
}

Dog::Dog(const Dog& other) : Animal(other)
{
	brain = new Brain(*other.brain);
	type = other.type;
}

Dog&	Dog::operator=(const Dog& other)
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

Dog::~Dog()
{
	std::cout << getType() << " deleted\n";
	delete brain;
}

void	Dog::makeSound() const
{
	std::cout << "Guauuu!!\n";
}

Brain*	Dog::getBrain()
{
	return (brain);
}