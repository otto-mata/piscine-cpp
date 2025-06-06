/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tblochet <tblochet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/28 20:10:45 by tblochet          #+#    #+#             */
/*   Updated: 2025/05/26 04:34:21 by tblochet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie*
zombieHorde(int N, std::string name)
{
  // uint8_t	*memPool = new uint8_t[sizeof(Zombie) * N];
  Zombie* horde = new Zombie[N];
  for (int i = 0; i < N; i++)
    horde[i].name(name);
  return (horde);
}
