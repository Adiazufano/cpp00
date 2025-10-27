#include "Zombie.hpp"

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
		this->name = other.name;
	return *this;
}

void Zombie::announce(void)
{
	std::cout << this->name << ":" << "BraiiiiiiinnnzzzZ...\n";
}

Zombie::~Zombie()
{
	std::cout << this->name << ":" << "destruido\n";
}
