/* ************************************************************************** */
/*                                                                            */
/*                                                                            */
/*   FragTrap.cpp                                         ┌─┐┌┬┐┌┬┐┌─┐        */
/*                                                        │ │ │  │ │ │        */
/*   By: tblochet <tblochet@student.42.fr>                └─┘ ┴  ┴ └─┘        */
/*                                                        ┌┬┐┌─┐┌┬┐┌─┐        */
/*   Created: 2025/04/05 16:05:51 by tblochet             │││├─┤ │ ├─┤        */
/*   Updated: 2025/04/05 17:15:42 by tblochet             ┴ ┴┴ ┴ ┴ ┴ ┴        */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap()
{
	std::cout
		<< "Default FragTrap's constructor called."
		<< std::endl
		<< "This one may be useful, at least..."
		<< std::endl;

	this->hp(100);
	this->ep(100);
	this->atk(30);
	this->name("FR4G-TP");
}

FragTrap::FragTrap(std::string ctName) : ClapTrap(ctName)
{
	std::cout
		<< "'"
		<< ctName
		<< "' has been constructed."
		<< std::endl;

	this->hp(100);
	this->ep(100);
	this->atk(30);
}

FragTrap::~FragTrap() {
	std::cout
		<< "FragTrap '"
		<< this->name()
		<< "' was destroyed."
		<< std::endl;
}

void FragTrap::highFivesGuys()
{
	std::cout
		<< "<"
		<< this->name()
		<< ">"
		<< std::endl
		<< "Hey guys!"
		<< std::endl
		<< "Up there! Gimme five!"
		<< std::endl
		<< "---"
		<< std::endl;
}
