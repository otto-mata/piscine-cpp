/* ************************************************************************** */
/*                                                                            */
/*                                                                            */
/*   ClapTrap.hpp                                         ┌─┐┌┬┐┌┬┐┌─┐        */
/*                                                        │ │ │  │ │ │        */
/*   By: tblochet <tblochet@student.42.fr>                └─┘ ┴  ┴ └─┘        */
/*                                                        ┌┬┐┌─┐┌┬┐┌─┐        */
/*   Created: 2025/04/05 16:06:22 by tblochet             │││├─┤ │ ├─┤        */
/*   Updated: 2025/04/05 16:31:59 by tblochet             ┴ ┴┴ ┴ ┴ ┴ ┴        */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP
#include <string>
#include <iostream>

class ClapTrap
{
	public:
		/* ctor */	ClapTrap();
		/* ctor */	ClapTrap(std::string ctName);
		/* dtor */	~ClapTrap();
		void		attack(const std::string &target);
		void		takeDamage(unsigned int amount);
		void		beRepaired(unsigned int amount);
		int			hp() const;
		void		hp(int newHp);
		int			ep() const;
		void		ep(int newEp);
		int			atk() const;
		void		atk(int newAttack);
		std::string	name() const;
		void		name(std::string &newName);
	private:
		int			_hp;
		int			_ep;
		int			_atk;
		std::string	_name;
};

#endif
