/* ************************************************************************** */
/*                                                                            */
/*                                                                            */
/*   Harl.cpp                                             ┌─┐┌┬┐┌┬┐┌─┐        */
/*                                                        │ │ │  │ │ │        */
/*   By: tblochet <tblochet@student.42.fr>                └─┘ ┴  ┴ └─┘        */
/*                                                        ┌┬┐┌─┐┌┬┐┌─┐        */
/*   Created: 2025/04/04 18:02:31 by tblochet             │││├─┤ │ ├─┤        */
/*   Updated: 2025/04/05 11:15:41 by tblochet             ┴ ┴┴ ┴ ┴ ┴ ┴        */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void Harl::debug(void)
{
	std::string msg("I love having extra bacon for my "
					"7XL-double-cheese-triple-pickle-special-ketchup burger. "
					"I really do!");
	std::cout << msg << std::endl;
}

void Harl::info(void)
{
	std::string msg("I cannot believe adding extra bacon costs more money. "
					"You didn’t put enough bacon in my burger! "
					"If you did, I wouldn’t be asking for more!");
	std::cout << msg << std::endl;
}

void Harl::warning(void)
{
	std::string msg("I think I deserve to have some extra bacon for free. "
					"I’ve been coming for years, "
					"whereas you started working here just last month.");
	std::cout << msg << std::endl;
}

void Harl::error(void)
{
	std::string msg("This is unacceptable! I want to speak to the manager now.");
	std::cout << msg << std::endl;
}

void Harl::_unknown()
{
	std::string msg("[ Probably complaining about insignificant problems ]");
	std::cout << msg << std::endl;
}

Harl::Harl()
{
}

Harl::~Harl()
{
}

void Harl::complain(std::string level)
{
	std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	int nLevel;

	nLevel = 5;
	for (int i = 0; i < 4; i++)
	{
		if (levels[i] == level)
		{
			nLevel = i + 1;
			break ;
		}
	}
	switch (nLevel)
	{
	case 1:
		std::cout << "[ DEBUG ] " << std::endl;
		this->debug();
		std::cout << std::endl;
	case 2:
		std::cout << "[ INFO ] " << std::endl;
		this->info();
		std::cout << std::endl;
	case 3:
		std::cout << "[ WARNING ] " << std::endl;
		this->warning();
		std::cout << std::endl;
	case 4:
		std::cout << "[ ERROR ] " << std::endl;
		this->error();
		std::cout << std::endl;
		break ;
	default:
		this->_unknown();
	}
}
