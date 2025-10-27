#ifndef		PHONEBOOK_HPP
#define		PHONEBOOK_HPP
#include	"Contacts.hpp"

class	PhoneBook
{
	public:
		PhoneBook();
		PhoneBook(const PhoneBook& other);
		PhoneBook&	operator=(const PhoneBook& other);
		void	ADD(void);
		void	SEARCH(void);

	private:
		Contacts contacts[8];
		int		currentIndex;
};

#endif