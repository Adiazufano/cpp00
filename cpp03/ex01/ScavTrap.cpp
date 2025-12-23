#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	setHitPoints(100);
	setEnergyPoints(50);
	setDamage(20);
	std::cout << "ScavTrap : " << name << " created\n";
}

ScavTrap::ScavTrap(const ScavTrap& other) : ClapTrap(other)
{
	*this = other;
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
	std::cout << "ScavTrap :"<<  getName() << " destroyed\n";
}

void ScavTrap::attack(const std::string& target)
{
	if (getHitPoints() <= 0)
	{
		std::cout << "ScavTrap " << getName() << " can’t attack because hasn’t hit points\n";
		return ;
	}
	if (getEnergyPoints() <= 0)
	{
		std::cout << "ScavTrap " << getName() << " can’t attack because hasn’t energy\n";
		return ;
	}
	setEnergyPoints(getEnergyPoints() - 1);
	std::cout << "ScavTrap " << getName() << " attacks " << target << " , causing " << getDamage() << " points of damage!\n";
}

void	ScavTrap::guardGate()
{
	std::cout << "ScavTrap " << getName() << " is now in Gate keeper mode.";
}