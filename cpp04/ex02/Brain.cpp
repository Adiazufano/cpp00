#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "Brain created" << std::endl;
	for (int i = 0; i < 100; i++)
		ideas[i] = std::string("");
}

Brain::Brain(const Brain& other)
{
	std::cout << "Brain copy constructor called" << std::endl;
	*this = other;
}

Brain&	Brain::operator=(const Brain& other)
{
	if (this != &other)
	{
		for (int i = 0; i < 100; i++)
			this -> ideas[i] = other.ideas[i];
	}
	return (*this);
}

Brain::~Brain()
{
		std::cout << "Brain deleted" << std::endl;
}

void	Brain::setIdea(int index, const std::string& idea)
{
	ideas[index] = idea;
}

std::string	Brain::getIdea(int index)
{
	return (ideas[index]);
}