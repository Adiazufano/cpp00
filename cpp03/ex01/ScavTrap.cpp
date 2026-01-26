/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldiaz-u <aldiaz-u@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/26 10:27:03 by aldiaz-u          #+#    #+#             */
/*   Updated: 2026/01/26 11:34:05 by aldiaz-u         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap()
{
	this -> hitPoints = 100;
	this -> energyPoints = 50;
	this -> damage = 20;
	std::cout << "default constructor ScavTrap : " << name << " created" << std::endl;
}
ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	this -> hitPoints = 100;
	this -> energyPoints = 50;
	this -> damage = 20;
	std::cout << "ScavTrap : " << name << " created" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& other) : ClapTrap(other)
{
	std::cout << "ScavTrap copy constructor called for " << name << std::endl;
}

ScavTrap&	ScavTrap::operator=(const ScavTrap& other)
{
	if (this != &other)
	{
		ClapTrap::operator=(other);
	}
	return (*this);
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap :"<<  name << " destroyed" << std::endl;
}

void ScavTrap::attack(const std::string& target)
{
	if (hitPoints <= 0)
	{
		std::cout << "ScavTrap " << name << " can’t attack because hasn’t hit points" << std::endl;
		return ;
	}
	if (energyPoints <= 0)
	{
		std::cout << "ScavTrap " << name << " can’t attack because hasn’t energy" << std::endl;
		return ;
	}
	energyPoints--;
	std::cout << "ScavTrap " << name << " attacks " << target << " , causing " << damage << " points of damage!" << std::endl;
}

void	ScavTrap::guardGate()
{
	std::cout << "ScavTrap " << name << " is now in Gate keeper mode." << std::endl;
}