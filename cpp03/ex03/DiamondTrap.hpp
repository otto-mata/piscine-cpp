/* ************************************************************************** */
/*                                                                            */
/*                                                                            */
/*   DiamondTrap.hpp                                      ┌─┐┌┬┐┌┬┐┌─┐        */
/*                                                        │ │ │  │ │ │        */
/*   By: tblochet <tblochet@student.42.fr>                └─┘ ┴  ┴ └─┘        */
/*                                                        ┌┬┐┌─┐┌┬┐┌─┐        */
/*   Created: 2025/04/05 16:06:22 by tblochet             │││├─┤ │ ├─┤        */
/*   Updated: 2025/04/05 17:24:10 by tblochet             ┴ ┴┴ ┴ ┴ ┴ ┴        */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP
#include <string>
#include <iostream>
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap: public ScavTrap, public FragTrap
{
	public:
	/* ctor */	DiamondTrap(std::string ctName);
	/* dtor */	~DiamondTrap();
	
};

#endif
