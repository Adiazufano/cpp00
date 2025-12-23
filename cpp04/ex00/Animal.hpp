#ifndef ANIMAL_HPP
#define ANIMAL_HPP
#include <iostream>
#include <string>
class Animal
{
	protected:
		std::string	type;
	public:
		Animal();
		Animal(const Animal& other);
		Animal&	operator=(const Animal& other);
		~Animal();
		virtual void	makeSound() const;
		void	setType(std::string type);
		std::string	getType() const;
};
#endif
