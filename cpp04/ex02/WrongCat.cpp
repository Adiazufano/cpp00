#include "WrongCat.hpp"

WrongCat::WrongCat()
{
	this -> type = "WrongCat";
	std::cout << getType() << " created\n";
}

WrongCat::WrongCat(const WrongCat& other) : WrongAnimal(other)
{
	*this =  other;
}

WrongCat&	WrongCat::operator=(const WrongCat& other)
{
	if (this != &other)
		this -> type = other.type;
	return (*this);
}

WrongCat::~WrongCat()
{
	std::cout << getType() << " deleted\n";
}

void	WrongCat::makeSound() const
{
	std::cout << "Miauuu!!\n";
}