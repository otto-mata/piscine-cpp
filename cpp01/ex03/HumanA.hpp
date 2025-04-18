/* ************************************************************************** */
/*                                                                            */
/*                                                                            */
/*   HumanA.hpp                                           ┌─┐┌┬┐┌┬┐┌─┐        */
/*                                                        │ │ │  │ │ │        */
/*   By: tblochet <tblochet@student.42.fr>                └─┘ ┴  ┴ └─┘        */
/*                                                        ┌┬┐┌─┐┌┬┐┌─┐        */
/*   Created: 2025/04/03 12:53:08 by tblochet             │││├─┤ │ ├─┤        */
/*   Updated: 2025/04/04 16:46:15 by tblochet             ┴ ┴┴ ┴ ┴ ┴ ┴        */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
#define HUMANA_HPP
#include <iostream>
#include "Weapon.hpp"
class HumanA
{
public:
	HumanA(std::string, Weapon &);
	void attack();

private:
	std::string name;
	Weapon *weapon;
};

#endif
