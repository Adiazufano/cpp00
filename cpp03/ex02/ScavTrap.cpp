#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap()
{
	this -> hitPoints = 100;
	this -> energyPoints = 50;
	this -> damage = 20;
	std::cout << "ScavTrap default constructor called" << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	this -> hitPoints = 100;
	this -> energyPoints = 50;
	this -> damage = 20;
	std::cout << "ScavTrap : " << this->name << " created from ClapTrap!" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& other) : ClapTrap(other)
{
}

ScavTrap&	ScavTrap::operator=(const ScavTrap& other)
{
	if (this != &other)
	{
		ClapTrap::operator=(other);
	}
	return (*this);
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap :"<<  this -> name << " destroyed" << std::endl;
}

void ScavTrap::attack(const std::string& target)
{
	if (this -> hitPoints <= 0)
	{
		std::cout << "ScavTrap " << this -> name << " can’t attack because hasn’t hit points" << std::endl;
		return ;
	}
	if (this -> energyPoints <= 0)
	{
		std::cout << "ScavTrap " << this -> name << " can’t attack because hasn’t energy" << std::endl;
		return ;
	}
	this -> energyPoints--;
	std::cout << "ScavTrap " << this -> name << " attacks " << target << " , causing " << this -> damage << " points of damage!" << std::endl;
}

void	ScavTrap::guardGate()
{
	std::cout << "ScavTrap " << this -> name << " is now in Gate keeper mode." << std::endl;
}