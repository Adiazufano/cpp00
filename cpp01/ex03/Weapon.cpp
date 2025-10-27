#include "Weapon.hpp"

Weapon::Weapon(std::string newType)
{
	this -> type = newType;
}

Weapon::Weapon(const Weapon& other)
{
	*this = other;
}

Weapon& Weapon::operator=(const Weapon& other)
{
	if (this != &other)
		this -> type = other.type;
	return(*this);
}

const std::string& Weapon::getType()
{
	return (type);
}

void Weapon::setType(const std::string& newType)
{
	this -> type = newType;
}