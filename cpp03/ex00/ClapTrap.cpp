/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldiaz-u <aldiaz-u@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/26 10:05:14 by aldiaz-u          #+#    #+#             */
/*   Updated: 2026/01/26 10:51:52 by aldiaz-u         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : name("default"), hitPoints(10), energyPoints(10), damage(0)
{
	std::cout << "default constructor ClapTrap : " << name << " created" << std::endl;
}

ClapTrap::ClapTrap(std::string name) : name(name), hitPoints(10), energyPoints(10), damage(0)
{
	std::cout << "ClapTrap : " << name << " created" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& other) : 
	name(other.name), hitPoints(other.hitPoints),
	energyPoints(other.energyPoints), damage(other.damage)
{
	std::cout << "ClapTrap copy constructor called for " << name << std::endl;
}

ClapTrap&	ClapTrap::operator=(const ClapTrap& other)
{
	if (this != &other)
	{
		this -> damage = other.damage;
		this -> name = other.name;
		this -> hitPoints = other.hitPoints;
		this -> energyPoints = other.energyPoints;
	}
	return (*this);
}

ClapTrap::~ClapTrap()
{
	std::cout << name << ":" << "destroyed" << std::endl;
}

void	ClapTrap::attack(const std::string& target)
{
	if (hitPoints <= 0)
	{
		std::cout << "FragTrap " << name << " can´t attack because hasn´t hit points" << std::endl;
		return ;
	}
	if (energyPoints <= 0)
	{
		std::cout << "FragTrap " << name << " can´t attack because hasn´t energy" << std::endl;
		return ;
	}
	energyPoints--;
	std::cout << "FragTrap " << name << " attacks " << target << " , causing " << damage << " points of damage!" << std::endl;
}

void	ClapTrap::beRepaired(const unsigned int amount)
{
	if (hitPoints <= 0)
	{
		std::cout << name << " can´t repair itself because hasn´t hit points" << std::endl;
		return ;
	}
	if (this -> energyPoints <= 0)
	{
		std::cout << name << " can´t repair itself because hasn´t energy points" << std::endl;
		return ;
	}
	energyPoints--;
	hitPoints += amount;
	std::cout << name << " repairs itself and regains " << amount << " hit points" << std::endl;
}

void	ClapTrap::takeDamage(const unsigned int amount)
{
	if (hitPoints <= 0)
	{
		std::cout << name << " is alredy destroyed can´t take more damage" << std::endl;
		return ;
	}
	if ((int)amount >= hitPoints)
		hitPoints = 0;
	else
		hitPoints -= amount;
	std::cout << name << " takes " << amount << " points of damage! Hit points left: " << hitPoints << std::endl;
}
