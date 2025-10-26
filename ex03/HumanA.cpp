#include "HumanA.hpp"

HumanA::HumanA(const std::string& newName, Weapon& newWeapon)
	: name(newName), weapon(newWeapon) {}

HumanA::HumanA(const HumanA& other)
	: name(other.name), weapon(other.weapon)
{
	this -> name = other.name;
	this -> weapon.setType(other.weapon.getType());
}

HumanA& HumanA::operator=(const HumanA& other)
{
	if (this != &other)
	{
		this -> name = other.name;
		this -> weapon = other.weapon;
	}
	return (*this);
}

void	HumanA::attack()
{
	std::cout << this->name << " attacks with their " << this->weapon.getType() << std::endl;
}