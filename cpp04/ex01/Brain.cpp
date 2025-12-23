#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "Brain created\n";
	for (int i = 0; i < 100; i++)
		ideas[i] = std::string(""); // asegura que cada string está inicializado
}

Brain::Brain(const Brain& other)
{
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
		std::cout << "Brain deleted\n";
}

void	Brain::setIdea(int index, const std::string& idea)
{
	ideas[index] = idea;
}

std::string	Brain::getIdea(int index)
{
	return (ideas[index]);
}