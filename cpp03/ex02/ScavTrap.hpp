/* ************************************************************************** */
/*                                                                            */
/*                                                                            */
/*   ScavTrap.hpp                                         ┌─┐┌┬┐┌┬┐┌─┐        */
/*                                                        │ │ │  │ │ │        */
/*   By: tblochet <tblochet@student.42.fr>                └─┘ ┴  ┴ └─┘        */
/*                                                        ┌┬┐┌─┐┌┬┐┌─┐        */
/*   Created: 2025/04/05 16:06:22 by tblochet             │││├─┤ │ ├─┤        */
/*   Updated: 2025/04/05 16:58:12 by tblochet             ┴ ┴┴ ┴ ┴ ┴ ┴        */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP
#include <string>
#include <iostream>
#include "ClapTrap.hpp"

class ScavTrap: public ClapTrap
{
	public:
	/* ctor */	ScavTrap();
	/* ctor */	ScavTrap(std::string ctName);
	/* dtor */	~ScavTrap();
	void		guardGate();
	void		attack(std::string target);
	
};

#endif
