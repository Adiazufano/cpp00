#include "Zombie.hpp"

int	main(void)
{
	Zombie* heapZombie = newZombie("Manolo");
	heapZombie -> announce();
	delete heapZombie;

	randomChump("Pedro");
	return(0);
}