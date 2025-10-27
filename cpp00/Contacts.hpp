#ifndef	CONTACTS_HPP
#define	CONTACTS_HPP
#include <string>
#include <cstdio>
#include <iostream>


class	Contacts
{
	public:
		Contacts();
		Contacts(const Contacts& other);
		Contacts&	operator=(const Contacts& other);
		void		setFirstname(std::string firstName);
		std::string	getFirstName(void);
		void		setLastname(std::string lastName);
		std::string	getLastName(void);
		void		setNickname(std::string nickname);
		std::string	getNickname(void);
		void		setPhoneNumber(std::string phoneNumber);
		std::string	getPhoneNumber(void);
		void		setDarkestSecret(std::string darkestSecret);
		std::string	getDarkestSecret(void);
	private:
		std::string	firstName;
		std::string	lastName;
		std::string	nickname;
		std::string	phoneNumber;
		std::string	darkestSecret;
};

#endif