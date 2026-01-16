/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldiaz-u <aldiaz-u@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/16 11:40:56 by aldiaz-u          #+#    #+#             */
/*   Updated: 2026/01/16 12:32:15 by aldiaz-u         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie()
{}
Zombie::Zombie(std::string name)
{
	this -> name = name;
}

Zombie::Zombie(const Zombie& other)
{
	*this = other;
}

Zombie& Zombie::operator=(const Zombie& other)
{
	if (this != &other)
		this -> name = other.name;
	return (*this);
}

Zombie::~Zombie(void)
{
	std::cout << this -> name << ":" << "destroyed" << std::endl;
}

void Zombie::announce(void)
{
		std::cout << this -> name << ":" << "BraiiiiiiinnnzzzZ..." << std::endl;
}

void	Zombie::setName(std::string n)
{
	name = n;
}