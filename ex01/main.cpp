#include "Zombie.hpp"

int	main(void)
{
	Zombie*	horde;
	int	index;
	int	N;

	N = 5;
	index = 0;
	horde = zombieHorde(N, "Manuel");
	while (index < N)
	{
		horde[index].announce();
		index++;
	}
	delete[] horde;
	return (0);
}