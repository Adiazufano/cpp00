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

	// 1️⃣ Crear la mitad Dogs y la mitad Cats
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

	// 2️⃣ Comprobar copia profunda
	Dog originalDog;
	originalDog.getBrain()->setIdea(0, "Quiero hueso");
	Dog copiedDog = originalDog; // copia profunda

	copiedDog.getBrain()->setIdea(0, "Quiero dormir");

	std::cout << "\nTEST deep copy Dog\n";
	std::cout << "Original Dog idea[0]: " 
			  << originalDog.getBrain()->getIdea(0) << std::endl;
	std::cout << "Copied Dog idea[0]: " 
			  << copiedDog.getBrain()->getIdea(0) << std::endl;

	// 3️⃣ Liberar memoria
	for (int i = 0; i < SIZE; i++)
		delete animals[i];

	// 4️⃣ TEST WrongAnimals
	std::cout << "\nWRONGANIMALS TEST\n";
	const WrongAnimal* wa = new WrongAnimal();
	const WrongAnimal* wc = new WrongCat();

	std::cout << wc->getType() << " says: ";
	wc->makeSound(); // debe llamar a WrongAnimal::makeSound() -> no virtual

	wa->makeSound();

	delete wa;
	delete wc;

	return 0;
}
