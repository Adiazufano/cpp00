#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP
#include <string>
#include <iostream>

class ClapTrap
{
	private:
		std::string	name;
		int			hitPoints;
		int			energyPoints;
		int			damage;
	public:
		ClapTrap(std::string name);
		ClapTrap(const ClapTrap& other);
		ClapTrap& operator=(const ClapTrap& other);
		~ClapTrap();
		void	attack(const std::string& target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);
		std::string	getName() const;
		int			getHitPoints() const;
		int			getEnergyPoints() const;
		int			getDamage() const;
		void		setName(std::string name);
		void		setHitPoints(int amount);
		void		setEnergyPoints(int amount);
		void		setDamage(int amount);
};
#endif