/* ************************************************************************** */
/*                                                                            */
/*                                                                            */
/*   HumanB.hpp                                           ┌─┐┌┬┐┌┬┐┌─┐        */
/*                                                        │ │ │  │ │ │        */
/*   By: tblochet <tblochet@student.42.fr>                └─┘ ┴  ┴ └─┘        */
/*                                                        ┌┬┐┌─┐┌┬┐┌─┐        */
/*   Created: 2025/04/03 12:53:08 by tblochet             │││├─┤ │ ├─┤        */
/*   Updated: 2025/04/04 16:44:27 by tblochet             ┴ ┴┴ ┴ ┴ ┴ ┴        */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP
#include <iostream>
#include "Weapon.hpp"

class HumanB
{
public:
	HumanB(std::string);
	void attack();
	void setWeapon(Weapon &);
	Weapon getWeapon() const;

private:
	std::string name;
	Weapon *weapon;
};

#endif
