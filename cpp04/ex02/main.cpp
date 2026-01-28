#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include <iostream>

int main()
{
	const int SIZE = 4;
	Animal* animals[SIZE];

	for (int i = 0; i < SIZE / 2; i++)
		animals[i] = new Dog();
	for (int i = SIZE / 2; i < SIZE; i++)
		animals[i] = new Cat();

	std::cout << "\nTEST makeSound & getType\n";
	for (int i = 0; i < SIZE; i++)
	{
		std::cout << animals[i]->getType() << " says: ";
		animals[i]->makeSound();
	}

	Dog originalDog;
	originalDog.getBrain()->setIdea(0, "I want bone");
	Dog copiedDog = originalDog;

	copiedDog.getBrain()->setIdea(0, "I want sleep");

	std::cout << "\nTEST deep copy Dog\n";
	std::cout << "Original Dog idea[0]: " 
			<< originalDog.getBrain()->getIdea(0) << std::endl;
	std::cout << "Copied Dog idea[0]: " 
			<< copiedDog.getBrain()->getIdea(0) << std::endl;

	for (int i = 0; i < SIZE; i++)
		delete animals[i];

	std::cout << "\nWRONGANIMALS TEST\n";
	const WrongAnimal* wa = new WrongAnimal();
	const WrongAnimal* wc = new WrongCat();

	std::cout << wc->getType() << " says: ";
	wc->makeSound(); 
	wa->makeSound();

	delete wa;
	delete wc;

	return 0;
}
