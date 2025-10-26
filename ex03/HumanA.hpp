#ifndef HUMANA_HPP
#define HUMANA_HPP
#include <string>
#include <iostream>
#include "Weapon.hpp"

class	HumanA
{
	public :
		HumanA(const std::string& newName, Weapon& Weapon);
		HumanA(const HumanA& other);
		HumanA&	operator=(const HumanA& other);

		void	attack(void);

	private :
		std::string name;
		Weapon&	weapon;
};
#endif