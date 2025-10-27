#include "Contacts.hpp"

Contacts::Contacts(){}

Contacts::Contacts(const Contacts& other)
{
	this -> firstName = other.firstName;
	this -> lastName = other.lastName;
	this -> nickname = other.nickname;
	this -> phoneNumber = other.phoneNumber;
	this -> darkestSecret = other.darkestSecret;
}

Contacts& Contacts::operator=(const Contacts& other)
{
	if (this != &other)
	{
		this -> firstName = other.firstName;
		this -> lastName = other.lastName;
		this -> nickname = other.nickname;
		this -> phoneNumber = other.phoneNumber;
		this -> darkestSecret = other.darkestSecret;
	}
	return (*this);
}

void	Contacts::setFirstname(std::string firstName)
{
	this -> firstName  = firstName;
}

std::string	Contacts::getFirstName()
{
	return (this -> firstName);
}

void	Contacts::setLastname(std::string lastName)
{
	this -> lastName = lastName;
}

std::string	Contacts::getLastName()
{
	return (this -> lastName);
}

void	Contacts::setNickname(std::string nickname)
{
	this -> nickname = nickname;
}

std::string	Contacts::getNickname()
{
	return (this -> nickname);
}

void	Contacts::setPhoneNumber(std::string phoneNumber)
{
	this -> phoneNumber = phoneNumber;
}

std::string	Contacts::getPhoneNumber()
{
	return (this -> phoneNumber);
}

void	Contacts::setDarkestSecret(std::string darkestSecret)
{
	this -> darkestSecret = darkestSecret;
}

std::string	Contacts::getDarkestSecret()
{
	return (this -> darkestSecret);
}
