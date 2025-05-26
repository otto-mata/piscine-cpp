/* ************************************************************************** */
/*                                                                            */
/*                                                                            */
/*   Zombie.hpp                                           ┌─┐┌┬┐┌┬┐┌─┐        */
/*                                                        │ │ │  │ │ │        */
/*   By: tblochet <tblochet@student.42.fr>                └─┘ ┴  ┴ └─┘        */
/*                                                        ┌┬┐┌─┐┌┬┐┌─┐        */
/*   Created: 2025/03/28 19:40:11 by tblochet             │││├─┤ │ ├─┤        */
/*   Updated: 2025/03/28 20:12:09 by tblochet             ┴ ┴┴ ┴ ┴ ┴ ┴        */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP
# include <string>
# include <iostream>

class	Zombie
{
	public:
		/* ctor */	Zombie();
		/* ctor */	Zombie(std::string name);
		/* ctor */	Zombie(const Zombie &other);
		/* dtor */	~Zombie();

		void		announce();

		Zombie		&operator=(const Zombie &other);
		
	private:
		std::string _name;
};

Zombie *zombieHorde(int N, std::string name);

#endif
