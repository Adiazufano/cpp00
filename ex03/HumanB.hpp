#ifndef HUMANB_HPP
#define HUMANB_HPP
#include <string>
#include <iostream>
#include "Weapon.hpp"

class	HumanB
{
	public :
		HumanB(const std::string& newName);
		HumanB(const HumanB& other);
		HumanB&	operator=(const HumanB& other);

		void	attack(void);
		void	setWeapon(Weapon& weapon);

	private :
		std::string name;
		Weapon*	weapon;
};
#endif