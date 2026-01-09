#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name) : name(name), hitPoints(10), energyPoints(10), damage(0)
{
	std::cout << this -> name << ":" << "created\n";
}

ClapTrap::ClapTrap(const ClapTrap& other)
{
	*this = other;
}

ClapTrap&	ClapTrap::operator=(const ClapTrap& other)
{
	if (this != &other)
	{
		this -> name = other.name;
		this -> hitPoints = other.hitPoints;
		this -> damage = other.damage;
		this -> energyPoints = other.energyPoints;
	}
	return (*this);
}

ClapTrap::~ClapTrap()
{
	std::cout << this -> name << ":" << "destroyed\n";
}

void	ClapTrap::attack(const std::string& target)
{
	if (this->hitPoints <= 0)
	{
		std::cout << "ClapTrap " << this->name << " can´t attack because hasn´t hit points\n";
		return ;
	}
	if (this->energyPoints <= 0)
	{
		std::cout << "ClapTrap " << this->name << " can´t attack because hasn´t energy\n";
		return ;
	}
	this->energyPoints--;
	std::cout << "ClapTrap " << this -> name << " attacks " << target << " , causing " << this -> damage << " points of damage!\n";
}

void	ClapTrap::beRepaired(const unsigned int amount)
{
	if (this->hitPoints <= 0)
	{
		std::cout << this->name << " can’t repair itself because hasn’t hit points\n";
		return ;
	}
	if (this -> energyPoints <= 0)
	{
		std::cout << this->name << " can’t repair itself because hasn’t energy points\n";
		return ;
	}
	this -> energyPoints--;
	this -> hitPoints += amount;
	std::cout << this -> name << " repairs itself and regains " << amount << " hit points\n";
}

void	ClapTrap::takeDamage(const unsigned int amount)
{
	if (this->hitPoints <= 0)
	{
		std::cout << this->name << " is alredy destroyed can´t take more damage\n";
		return ;
	}
	if ((int)amount >= this -> hitPoints)
		this->hitPoints = 0;
	else
		this->hitPoints -= amount;
	std::cout << this -> name << " takes " << amount << " points of damage! Hit points left: " << this->hitPoints << std::endl;
}

std::string	ClapTrap::getName() const
{
	return (this -> name);
}

int	ClapTrap::getDamage() const
{
	return (this->damage);
}

int	ClapTrap::getEnergyPoints() const
{
	return (this->energyPoints);
}

int	ClapTrap::getHitPoints() const
{
	return (this->hitPoints);
}

void	ClapTrap::setDamage(int amount)
{
	this -> damage = amount;
}

void	ClapTrap::setEnergyPoints(int amount)
{
	this -> energyPoints = amount;
}

void	ClapTrap::setHitPoints(int amount)
{
	this -> hitPoints = amount;
}

void	ClapTrap::setName(std::string name)
{
	this -> name = name;
}