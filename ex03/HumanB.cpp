#include "HumanB.hpp"
#include <iostream>

HumanB::HumanB(const std::string& newName)
	: name(newName), weapon(NULL)
{
}

HumanB::HumanB(const HumanB& other)
{
	*this = other;
}

HumanB& HumanB::operator=(const HumanB& other)
{
	if (this != &other)
	{
		this -> name = other.name;
		this -> weapon = other.weapon;
	}
	return (*this);
}

void	HumanB::setWeapon(Weapon& newWeapon)
{
	this -> weapon = &newWeapon;
}

void	HumanB::attack()
{
	if (this->weapon)
		std::cout << this->name << " attacks with their " << this->weapon->getType() << std::endl;
	else
		std::cout << this->name << " has no weapon" << std::endl;
}