/* ************************************************************************** */
/*                                                                            */
/*                                                                            */
/*   main.cpp                                             ┌─┐┌┬┐┌┬┐┌─┐        */
/*                                                        │ │ │  │ │ │        */
/*   By: tblochet <tblochet@student.42.fr>                └─┘ ┴  ┴ └─┘        */
/*                                                        ┌┬┐┌─┐┌┬┐┌─┐        */
/*   Created: 2025/04/05 16:05:51 by tblochet             │││├─┤ │ ├─┤        */
/*   Updated: 2025/04/05 16:59:12 by tblochet             ┴ ┴┴ ┴ ┴ ┴ ┴        */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main()
{
	ClapTrap cl4ptp = ClapTrap();
	ScavTrap sc4vtp = ScavTrap();

	sc4vtp.guardGate();
	cl4ptp.attack(sc4vtp.name());
	sc4vtp.takeDamage(cl4ptp.atk());
	sc4vtp.attack(sc4vtp.name());
	cl4ptp.takeDamage(sc4vtp.atk());
	
}
