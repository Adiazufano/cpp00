#include "WrongCat.hpp"

WrongCat::WrongCat()
{
	type = "WrongCat";
	std::cout << "WrongCat created" << std::endl;
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat destroyed" << std::endl;
}

WrongCat&	WrongCat::operator=(const WrongCat& other)
{
	if (this != &other)
		this -> type = other.type;
	return (*this);
}
