/* ************************************************************************** */
/*                                                                            */
/*                                                                            */
/*   HumanB.hpp                                           ┌─┐┌┬┐┌┬┐┌─┐        */
/*                                                        │ │ │  │ │ │        */
/*   By: tblochet <tblochet@student.42.fr>                └─┘ ┴  ┴ └─┘        */
/*                                                        ┌┬┐┌─┐┌┬┐┌─┐        */
/*   Created: 2025/04/03 12:53:08 by tblochet             │││├─┤ │ ├─┤        */
/*   Updated: 2025/04/03 13:12:23 by tblochet             ┴ ┴┴ ┴ ┴ ┴ ┴        */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP
#include <iostream>
#include "Weapon.hpp"

class HumanB
{
public:
	HumanB();
	HumanB(std::string);
	void attack();
	void setWeapon(const Weapon &);
	Weapon getWeapon() const;

private:
	std::string name;
	Weapon weapon;
};

#endif
