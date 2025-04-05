/* ************************************************************************** */
/*                                                                            */
/*                                                                            */
/*   DiamondTrap.cpp                                         ┌─┐┌┬┐┌┬┐┌─┐        */
/*                                                        │ │ │  │ │ │        */
/*   By: tblochet <tblochet@student.42.fr>                └─┘ ┴  ┴ └─┘        */
/*                                                        ┌┬┐┌─┐┌┬┐┌─┐        */
/*   Created: 2025/04/05 16:05:51 by tblochet             │││├─┤ │ ├─┤        */
/*   Updated: 2025/04/05 16:58:46 by tblochet             ┴ ┴┴ ┴ ┴ ┴ ┴        */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(std::string ctName)
{
	ctName += "_clap_name";
	std::cout
		<< "'"
		<< ctName
		<< "' has been constructed. Oh my god, what is this abomination..."
		<< std::endl;

	FragTrap::hp(100);
	ScavTrap::ep(50);
	FragTrap::atk(20);
	ClapTrap::name(ctName);
}

DiamondTrap::~DiamondTrap() {
	std::cout
		<< "DiamondTrap '"
		<< this->name()
		<< "' was destroyed. Thank god, what was that thing..."
		<< std::endl;
}
