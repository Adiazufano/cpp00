#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
	currentIndex = 0;
};

PhoneBook::PhoneBook(const PhoneBook& other)
{
	int	index;

	index = 0;
	while (index < 8)
	{
		this -> contacts[index] = other.contacts[index];
		index++;
	}
	this -> currentIndex = other.currentIndex;
}

PhoneBook&	PhoneBook::operator=(const PhoneBook& other)
{
	int	index;

	index = 0;
	if (this != &other)
	{
		while (index < 8)
		{
		this -> contacts[index] = other.contacts[index];
		index++;
		}
		this -> currentIndex = other.currentIndex;
	}
	return (*this);
}

void	PhoneBook::ADD()
{
	std::string	firstName;
	std::string	lastName;
	std::string	nickname;
	std::string	phoneNumber;
	std::string	darkestSecret;

	std::cout << "Input first name:\n";
	getline(std::cin, firstName);
	std::cout << "Input last name:\n";
	getline(std::cin, lastName);
	std::cout << "Input nickname:\n";
	getline(std::cin, nickname);
	std::cout << "Input phone number:\n";
	getline(std::cin, phoneNumber);
	std::cout << "Input darkest secret:\n";
	getline(std::cin, darkestSecret);
	if (firstName.empty() || lastName.empty() ||  nickname.empty() || phoneNumber.empty() || darkestSecret.empty())
	{
		std::cout << "The contact's can't have empty files\n";
		return;
	}
	contacts[currentIndex].setFirstname(firstName);
	contacts[currentIndex].setLastname(lastName);
	contacts[currentIndex].setNickname(nickname);
	contacts[currentIndex].setPhoneNumber(phoneNumber);
	contacts[currentIndex].setDarkestSecret(darkestSecret);
	currentIndex = (currentIndex + 1) % 8;
};


std::string	printSearch(std::string str)
{
	if (str.length() > 10)
		return str.substr(0,9) + ".";
	return (str);
}
void	PhoneBook::SEARCH()
{
	int	index;
	int	j;

	scanf("%i", &index);
	std::string	firstName = contacts[index].getFirstName();
	std::string	lastName = contacts[index].getLastName();
	std::string	nickname = contacts[index].getNickname();
	std::cout << "Input index contact:\n";
	std::cout << "index" << "|" << "first name" << "|" << "last name" << "|" << "nickname\n";
	std::cout << index << "|" << printSearch(firstName) << "|" << printSearch(lastName) << "|" << printSearch(nickname);
}