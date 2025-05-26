/* ************************************************************************** */
/*                                                                            */
/*                                                                            */
/*   newZombie.cpp                                        ┌─┐┌┬┐┌┬┐┌─┐        */
/*                                                        │ │ │  │ │ │        */
/*   By: tblochet <tblochet@student.42.fr>                └─┘ ┴  ┴ └─┘        */
/*                                                        ┌┬┐┌─┐┌┬┐┌─┐        */
/*   Created: 2025/03/28 19:54:32 by tblochet             │││├─┤ │ ├─┤        */
/*   Updated: 2025/03/28 20:03:23 by tblochet             ┴ ┴┴ ┴ ┴ ┴ ┴        */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie *newZombie(std::string name)
{
	Zombie	*newOne = new Zombie(name);
	return (newOne);
}
