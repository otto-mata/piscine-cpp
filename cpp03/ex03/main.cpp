/* ************************************************************************** */
/*                                                                            */
/*                                                                            */
/*   main.cpp                                             ┌─┐┌┬┐┌┬┐┌─┐        */
/*                                                        │ │ │  │ │ │        */
/*   By: tblochet <tblochet@student.42.fr>                └─┘ ┴  ┴ └─┘        */
/*                                                        ┌┬┐┌─┐┌┬┐┌─┐        */
/*   Created: 2025/04/05 16:05:51 by tblochet             │││├─┤ │ ├─┤        */
/*   Updated: 2025/04/05 17:12:47 by tblochet             ┴ ┴┴ ┴ ┴ ┴ ┴        */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
	ClapTrap cl4ptp = ClapTrap();
	ScavTrap sc4vtp = ScavTrap();
	FragTrap frgtp = FragTrap();

	sc4vtp.guardGate();
	cl4ptp.attack(sc4vtp.name());
	sc4vtp.takeDamage(cl4ptp.atk());
	sc4vtp.attack(sc4vtp.name());
	cl4ptp.takeDamage(sc4vtp.atk());
	frgtp.highFivesGuys();
	
}
