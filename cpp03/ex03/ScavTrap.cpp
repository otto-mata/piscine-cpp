/* ************************************************************************** */
/*                                                                            */
/*                                                                            */
/*   ScavTrap.cpp                                         ┌─┐┌┬┐┌┬┐┌─┐        */
/*                                                        │ │ │  │ │ │        */
/*   By: tblochet <tblochet@student.42.fr>                └─┘ ┴  ┴ └─┘        */
/*                                                        ┌┬┐┌─┐┌┬┐┌─┐        */
/*   Created: 2025/04/05 16:05:51 by tblochet             │││├─┤ │ ├─┤        */
/*   Updated: 2025/04/05 16:58:46 by tblochet             ┴ ┴┴ ┴ ┴ ┴ ┴        */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap()
{
	std::cout
		<< "Default ScavTrap's constructor called."
		<< std::endl
		<< "This one may be useful, at least..."
		<< std::endl;

	this->hp(100);
	this->ep(50);
	this->atk(20);
	this->name("SC4V-TP");
}

ScavTrap::ScavTrap(std::string ctName) : ClapTrap(ctName)
{
	std::cout
		<< "'"
		<< ctName
		<< "' has been constructed, hopefully it will guard that gate."
		<< std::endl;

	this->hp(100);
	this->ep(50);
	this->atk(20);
}

ScavTrap::~ScavTrap() {
	std::cout
		<< "ScavTrap '"
		<< this->name()
		<< "' was destroyed. Ah sh--t, who will guard that damn gate now?"
		<< std::endl;
}

void ScavTrap::guardGate()
{
	std::cout
		<< "<"
		<< this->name()
		<< ">"
		<< std::endl
		<< "I am at the gate!"
		<< std::endl
		<< "HEY, YOU! Are you a new recruit?"
		<< std::endl
		<< "---"
		<< std::endl;
}

void ScavTrap::attack(std::string target)
{
	std::cout
		<< "<"
		<< this->name()
		<< ">"
		
		<< std::endl
		<< "Aaaaaaaarrgggh!"
		<< std::endl
		<< "You are going to see how powerful RedBelly's gang is!"
		<< std::endl
		<< "---"
		<< std::endl;
	ClapTrap::attack(target);
}
