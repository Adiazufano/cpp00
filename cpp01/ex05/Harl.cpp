#include "Harl.hpp"

Harl::Harl(){}

void	Harl::debug()
{
	std::cout << "DEBUG: I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!\n";
}

void	Harl::info()
{
	std::cout << "INFO: I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!\n";
}

void	Harl::warning()
{
	std::cout << "WARNING: I think I deserve to have some extra bacon for free. I’ve been coming for years, whereas you started working here just last month.\n";
}

void	Harl::error()
{
	std::cout << "ERROR: This is unacceptable! I want to speak to the manager now\n";
}

void Harl::complain(std::string level)
{
	if (level == "DEBUG")
		debug();
	if (level == "INFO")
		info();
	if (level == "WARNING")
		warning();
	if (level == "ERROR")
		error();
}