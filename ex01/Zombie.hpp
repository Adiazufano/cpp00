#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP
#include <string>
#include <iostream>

class Zombie
{
	public:
		Zombie();
		Zombie(std::string name);
		Zombie(const Zombie& other);
		Zombie& operator=(const Zombie& other);
		~Zombie();

		void	announce(void);
		void	setName(std::string name);
	private:
		std::string name;
};

Zombie*	zombieHorde(int N, std::string name);
#endif