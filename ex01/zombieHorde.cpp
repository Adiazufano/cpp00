#include "Zombie.hpp"

Zombie*	zombieHorde(int N, std::string name)
{
	int		index;
	Zombie*	zombies;

	index = 0;
	if (N <= 0)
		return (NULL);
	zombies = new Zombie[N];
	while (index < N)
	{
		zombies[index].setName(name);
		index++;
	}
	return (zombies);
}