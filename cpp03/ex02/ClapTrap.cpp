#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : name("Default"), hitPoints(10), energyPoints(10), damage(0)
{
	std::cout << "ClapTrap Default constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name) : name(name), hitPoints(10), energyPoints(10), damage(0)
{
	std::cout << this -> name << ":" << "created" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& other) : 
	name(other.name), hitPoints(other.hitPoints),
	energyPoints(other.energyPoints), damage(other.damage)
{
	std::cout << "ClapTrap copy constructor called for " << this->name << std::endl;
}

ClapTrap&	ClapTrap::operator=(const ClapTrap& other)
{
	std::cout << "ClapTrap copy assignment operator called" << std::endl;
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
	std::cout << this -> name << ":" << "destroyed" << std::endl;
}

void	ClapTrap::attack(const std::string& target)
{
	if (this->hitPoints <= 0)
	{
		std::cout << "ClapTrap " << this->name << " can´t attack because hasn´t hit points" << std::endl;
		return ;
	}
	if (this->energyPoints <= 0)
	{
		std::cout << "ClapTrap " << this->name << " can´t attack because hasn´t energy" << std::endl;
		return ;
	}
	this->energyPoints--;
	std::cout << "ClapTrap " << this -> name << " attacks " << target << " , causing " << this -> damage << " points of damage!" << std::endl;
}

void	ClapTrap::beRepaired(const unsigned int amount)
{
	if (this->hitPoints <= 0)
	{
		std::cout << this->name << " can´t repair itself because hasn´t hit points" << std::endl;
		return ;
	}
	if (this -> energyPoints <= 0)
	{
		std::cout << this->name << " can´t repair itself because hasn´t energy points" << std::endl;
		return ;
	}
	this -> energyPoints--;
	this -> hitPoints += amount;
	std::cout << this -> name << " repairs itself and regains " << amount << " hit points" << std::endl;
}

void	ClapTrap::takeDamage(const unsigned int amount)
{
	if (this->hitPoints <= 0)
	{
		std::cout << this->name << " is alredy destroyed can´t take more damage" << std::endl;
		return ;
	}
	if ((int)amount >= this -> hitPoints)
		this->hitPoints = 0;
	else
		this->hitPoints -= amount;
	std::cout << this -> name << " takes " << amount << " points of damage! Hit points left: " << this->hitPoints << std::endl;
}