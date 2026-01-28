#include "Cat.hpp"

Cat::Cat()
{
	type = "Cat";
	brain = new Brain();
	std::cout << "Cat created" << std::endl;
}

Cat::Cat(const Cat& other) : Animal(other)
{
	brain = new Brain(*other.brain);
	std::cout << "Cat copy constructor called" << std::endl;
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
	std::cout << "Cat deleted" << std::endl;
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