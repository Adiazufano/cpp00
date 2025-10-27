#include "PhoneBook.hpp"

int	main()
{
	PhoneBook pb;
	std::string	action;
	while (1)
	{
		std::cout << "Input action: \n";
		getline(std::cin, action);
		if (action  == "ADD")
			pb.ADD();
		else if (action == "SEARCH")
			pb.SEARCH();
		else if  (action == "EXIT")
			break ;
		else
			std::cout << "invalida action \n";
	}

	return (0);
}