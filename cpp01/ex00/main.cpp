/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tblochet <tblochet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/28 19:55:03 by tblochet          #+#    #+#             */
/*   Updated: 2025/05/26 04:29:53 by tblochet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int
main()
{
  Zombie axelito = Zombie("feuylle");
  axelito.announce();
  randomChump("tblochet");
  Zombie* chdoe = newZombie("chdoe");
  chdoe->announce();
  delete chdoe;
  return (0);
}
