/* ************************************************************************** */
/*                                                                            */
/*                                                                            */
/*   HumanA.hpp                                           ┌─┐┌┬┐┌┬┐┌─┐        */
/*                                                        │ │ │  │ │ │        */
/*   By: tblochet <tblochet@student.42.fr>                └─┘ ┴  ┴ └─┘        */
/*                                                        ┌┬┐┌─┐┌┬┐┌─┐        */
/*   Created: 2025/04/03 12:53:08 by tblochet             │││├─┤ │ ├─┤        */
/*   Updated: 2025/04/03 13:13:53 by tblochet             ┴ ┴┴ ┴ ┴ ┴ ┴        */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
#define HUMANA_HPP
#include <iostream>
#include "Weapon.hpp"
class HumanA
{
public:
	HumanA();
	HumanA(std::string, Weapon &);
	void attack();

private:
	std::string name;
	Weapon weapon;
};

#endif
