#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	setHitPoints(100);
	setEnergyPoints(100);
	setDamage(30);
	std::cout << "FragTrap : " << name << " created\n";
}

FragTrap::FragTrap(const FragTrap& other) : ClapTrap(other)
{
	*this = other;
}

FragTrap&	FragTrap::operator=(const FragTrap& other)
{
	if (this != &other)
	{
		ClapTrap::operator=(other);
	}
	return (*this);
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap : " << getName()<< " destroyed\n";
}

void	FragTrap::highFivesGuys()
{
	std::cout << "FragTrap " << getName() << " high five\n";
}