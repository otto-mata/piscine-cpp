/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tblochet <tblochet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/03 12:53:08 by tblochet          #+#    #+#             */
/*   Updated: 2025/05/26 04:18:01 by tblochet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP
#include "Weapon.hpp"
#include <iostream>

class HumanB
{
public:
  HumanB(std::string);
  void attack();
  void setWeapon(Weapon&);
  Weapon getWeapon() const;

private:
  std::string name;
  Weapon* weapon;
};

#endif
