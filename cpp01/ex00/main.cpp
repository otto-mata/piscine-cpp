/* ************************************************************************** */
/*                                                                            */
/*                                                                            */
/*   main.cpp                                             ┌─┐┌┬┐┌┬┐┌─┐        */
/*                                                        │ │ │  │ │ │        */
/*   By: tblochet <tblochet@student.42.fr>                └─┘ ┴  ┴ └─┘        */
/*                                                        ┌┬┐┌─┐┌┬┐┌─┐        */
/*   Created: 2025/03/28 19:55:03 by tblochet             │││├─┤ │ ├─┤        */
/*   Updated: 2025/03/28 20:04:32 by tblochet             ┴ ┴┴ ┴ ┴ ┴ ┴        */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <vector>
#include <algorithm>
#include <functional>

typedef std::vector<Zombie> VecZomboids;
typedef std::vector<std::string> VecStrings;
typedef std::pair<VecZomboids::iterator, VecStrings::iterator> PairZombieName;
int main()
{

	std::string const names[] = {"Xavier Niel", "Nicolas Sadirac", "Bernard Arnault", "feuylle"};
	size_t const names_size(sizeof(names) / sizeof(std::string));
	VecZomboids zombos(names, names + names_size);
	VecZomboids::iterator zomb_begin = zombos.begin();
	VecZomboids::iterator zomb_end = zombos.end();
	
	std::for_each(zomb_begin, zomb_end, std::mem_fun_ref(&Zombie::announce));
	randomChump("tblochet");
	Zombie *chdoe = newZombie("chdoe");
	chdoe->announce();
	delete chdoe;
	return (0);
}
