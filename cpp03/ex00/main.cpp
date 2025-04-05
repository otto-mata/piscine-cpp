/* ************************************************************************** */
/*                                                                            */
/*                                                                            */
/*   main.cpp                                             ┌─┐┌┬┐┌┬┐┌─┐        */
/*                                                        │ │ │  │ │ │        */
/*   By: tblochet <tblochet@student.42.fr>                └─┘ ┴  ┴ └─┘        */
/*                                                        ┌┬┐┌─┐┌┬┐┌─┐        */
/*   Created: 2025/04/05 16:05:51 by tblochet             │││├─┤ │ ├─┤        */
/*   Updated: 2025/04/05 16:35:33 by tblochet             ┴ ┴┴ ┴ ┴ ┴ ┴        */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
	ClapTrap cl4ptp = ClapTrap();
	ClapTrap shadow = ClapTrap("5H4D0W-TP");
	
	cl4ptp.attack(shadow.name());
	shadow.takeDamage(cl4ptp.atk());
	shadow.beRepaired(10);
	shadow.atk(10);
	shadow.attack(cl4ptp.name());
	cl4ptp.takeDamage(shadow.atk());
	shadow.attack(cl4ptp.name());
	cl4ptp.takeDamage(shadow.atk());
	shadow.attack(cl4ptp.name());
	cl4ptp.takeDamage(shadow.atk());
}
