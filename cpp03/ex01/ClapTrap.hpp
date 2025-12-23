#ifndef CLAPTRAP
#define CLAPTRAP
#include <string>
#include <iostream>

class ClapTrap
{
	public:
		ClapTrap(std::string name);
		ClapTrap(const ClapTrap& other);
		ClapTrap& operator=(const ClapTrap& other);
		~ClapTrap();
		virtual void	attack(const std::string& target);
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
	private:
		std::string	name;
		int			hitPoints;
		int			energyPoints;
		int			damage;
};
#endif