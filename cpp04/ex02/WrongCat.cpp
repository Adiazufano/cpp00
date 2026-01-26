#include "WrongCat.hpp"

WrongCat::WrongCat()
{
	this -> type = "WrongCat";
	std::cout << getType() << " created" << std::endl;
}

WrongCat::WrongCat(const WrongCat& other) : WrongAnimal(other)
{
	std::cout << "WrongCat copy construcor executed" << std::endl;
}

WrongCat&	WrongCat::operator=(const WrongCat& other)
{
	if (this != &other)
		this -> type = other.type;
	return (*this);
}

WrongCat::~WrongCat()
{
	std::cout << getType() << " deleted" << std::endl;
}

void	WrongCat::makeSound() const
{
	std::cout << "Miauuu!!" << std::endl;
}