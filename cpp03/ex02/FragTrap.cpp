#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap()
{
	this -> hitPoints = 100;
	this -> energyPoints = 100;
	this -> damage = 30;
	std::cout << "FragTrap default constructor called" << std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	this -> hitPoints = 100;
	this -> energyPoints = 100;
	this -> damage = 30;
	std::cout << "FragTrap : " << this->name << " created from ClapTrap!" << std::endl;
}

FragTrap::FragTrap(const FragTrap& other) : ClapTrap(other)
{
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
	std::cout << "FragTrap : " << this -> name<< " destroyed" << std::endl;
}

void	FragTrap::highFivesGuys()
{
	std::cout << "FragTrap " << this -> name << " high five" << std::endl;
}