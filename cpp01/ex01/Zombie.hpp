/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tblochet <tblochet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/28 19:40:11 by tblochet          #+#    #+#             */
/*   Updated: 2025/05/26 04:34:55 by tblochet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP
#include <iostream>
#include <string>

class Zombie
{
public:
  Zombie();
  Zombie(std::string name);
  Zombie(const Zombie& other);
  ~Zombie();

  void announce();
	void name(std::string newName);
  Zombie& operator=(const Zombie& other);

private:
  std::string _name;
};

Zombie*
zombieHorde(int N, std::string name);

#endif
