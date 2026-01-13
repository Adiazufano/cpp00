#include "Zombie.hpp"

int	main(void)
{
	Zombie* heapZombie = newZombie("Manolo");
	randomChump("Pedro");
	
	heapZombie -> announce();
	delete heapZombie;

	return(0);
}