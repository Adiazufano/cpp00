#include "Zombie.hpp"

Zombie::Zombie(){}

Zombie::Zombie(std::string name)
{
	this -> name = name;
}

Zombie::Zombie(const Zombie& other)
{
	*this = other;
}

Zombie& Zombie::operator=(const Zombie& other)
{
	if (this != &other)
		this -> name = other.name;
	return (*this);
}

Zombie::~Zombie(void)
{
	std::cout << this -> name << ":" << "destruido\n";
}

void Zombie::announce(void)
{
		std::cout << this -> name << ":" << "BraiiiiiiinnnzzzZ...\n";
}

void	Zombie::setName(std::string n)
{
	name = n;
}