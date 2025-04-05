/* ************************************************************************** */
/*                                                                            */
/*                                                                            */
/*   FragTrap.hpp                                         ┌─┐┌┬┐┌┬┐┌─┐        */
/*                                                        │ │ │  │ │ │        */
/*   By: tblochet <tblochet@student.42.fr>                └─┘ ┴  ┴ └─┘        */
/*                                                        ┌┬┐┌─┐┌┬┐┌─┐        */
/*   Created: 2025/04/05 16:06:22 by tblochet             │││├─┤ │ ├─┤        */
/*   Updated: 2025/04/05 17:12:24 by tblochet             ┴ ┴┴ ┴ ┴ ┴ ┴        */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP
#include <string>
#include <iostream>
#include "ClapTrap.hpp"

class FragTrap: public ClapTrap
{
	public:
	/* ctor */	FragTrap();
	/* ctor */	FragTrap(std::string ctName);
	/* dtor */	~FragTrap();
	void		highFivesGuys();
};

#endif
