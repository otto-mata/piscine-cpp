/* ************************************************************************** */
/*                                                                            */
/*                                                                            */
/*   randomChump.cpp                                      ┌─┐┌┬┐┌┬┐┌─┐        */
/*                                                        │ │ │  │ │ │        */
/*   By: tblochet <tblochet@student.42.fr>                └─┘ ┴  ┴ └─┘        */
/*                                                        ┌┬┐┌─┐┌┬┐┌─┐        */
/*   Created: 2025/03/28 19:54:05 by tblochet             │││├─┤ │ ├─┤        */
/*   Updated: 2025/03/28 20:03:00 by tblochet             ┴ ┴┴ ┴ ┴ ┴ ┴        */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void randomChump(std::string name)
{
	Zombie chump = Zombie(name);
	chump.announce();
}
