#include "Dog.hpp"

Dog::Dog()
{
	type = "Dog";
	brain = new Brain();
	std::cout << "Dog created" << std::endl;
}

Dog::Dog(const Dog& other) : Animal(other)
{
	brain = new Brain(*other.brain);
	std::cout << "Dog copy constructor called" << std::endl;
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
	std::cout << "Dog deleted" << std::endl;
	delete brain;
}

void	Dog::makeSound() const
{
	std::cout << "Guauuu!!" << std::endl;
}

Brain*	Dog::getBrain()
{
	return (brain);
}