#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
const Animal* meta = new Animal();
const Animal* j = new Dog();
const Animal* i = new Cat();
const WrongAnimal* wa = new WrongAnimal();
const WrongAnimal* wc = new WrongCat();

std::cout << j->getType() << " " << std::endl;
std::cout << i->getType() << " " << std::endl;

i->makeSound();
j->makeSound();
meta->makeSound();

std::cout << "\nWRONGANIMALS TEST\n";
std::cout << wc->getType() << " " << std::endl;
wc -> makeSound();
wa -> makeSound();

delete meta;
delete j;
delete i;
delete wa;
delete wc;
return 0;
}
