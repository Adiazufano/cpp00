#include "PhoneBook.hpp"
#include <string>

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

int	checkPhoneNumber(std::string phoneNumber)
{
	int	index;
	index = 0;
	if (phoneNumber[0] == '+')
		index++;
	while (phoneNumber[index])
	{
		if (!isdigit(phoneNumber[index]))
			return (0);
		index++;
	}
	return (1);
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
	if (!checkPhoneNumber(phoneNumber))
	{
		std::cout << "The phone isn't valid\n";
		return ;
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
	return std::string(10 - str.length(), ' ') + str;
}
void	PhoneBook::SEARCH()
{
	std::string	line;
	int	index;

	index = 0;
	if (contacts[0].getFirstName().empty())
	{
		std::cout << "empty phonebook\n";
		return;
	}
	std::cout << printSearch("index") << "|" << printSearch("first name") << "|" << printSearch("last name") << "|" << printSearch("nickname") << "\n";
	while (index < 8)
	{
		if (contacts[index].getFirstName().empty())
		{
			index++;
			continue;
		}
		std::string index_str(1, char ('0' + index));
		std::cout << printSearch(index_str) << "|"
		<< printSearch(contacts[index].getFirstName()) << "|"
		<< printSearch(contacts[index].getLastName()) << "|"
		<< printSearch(contacts[index].getNickname()) << "\n";
		index++;
	}
	std::cout << "Input index contact:\n";
	if (!getline(std::cin, line))
		return ;
	if (line.size() != 1 || line[0] < '0' || line[0] > '7')
	{
		std::cout << "Index out of range or invalid\n";
		return ;
	}
	index = line[0] - '0';
	if (contacts[index].getFirstName().empty())
	{
		std::cout << "No contact at index " << index << "\n";
		return ;
	}

	std::cout << "Fisrt name:" << contacts[index].getFirstName() << "\n";
	std::cout << "Last name:" << contacts[index].getLastName() << "\n";
	std::cout << "Nickname:" << contacts[index].getNickname() << "\n";
	std::cout << "Phone number:" << contacts[index].getPhoneNumber() << "\n";
	std::cout << "Darkest secrest:" << contacts[index].getDarkestSecret() << "\n";
}