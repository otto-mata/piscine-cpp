/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tblochet <tblochet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/28 19:46:55 by tblochet          #+#    #+#             */
/*   Updated: 2025/05/26 04:35:43 by tblochet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie()
{
  this->_name = "";
}

Zombie::Zombie(std::string name)
{
  this->_name = name;
}

Zombie::Zombie(const Zombie& other)
{
  *this = other;
}

Zombie::~Zombie()
{
  std::cout << "[DEBUG] Destroying Zombie<'" + this->_name + "'>" << std::endl;
}

void
Zombie::announce()
{
  std::cout << this->_name + ": " << "BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie&
Zombie::operator=(const Zombie& other)
{
  if (this != &other) {
    this->_name = other._name;
  }
  return (*this);
}
