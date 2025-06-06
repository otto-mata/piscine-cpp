/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tblochet <tblochet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/05 16:06:22 by tblochet          #+#    #+#             */
/*   Updated: 2025/06/02 13:39:19 by tblochet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP
#include <iostream>
#include <string>

class ClapTrap
{
public:
  ClapTrap();
  ClapTrap(std::string ctName);
  ~ClapTrap();
  void attack(const std::string& target);
  void takeDamage(unsigned int amount);
  void beRepaired(unsigned int amount);
  int hp() const;
  void hp(int newHp);
  int ep() const;
  void ep(int newEp);
  int atk() const;
  void atk(int newAttack);
  std::string name() const;
  void name(std::string& newName);

private:
  int _hp;
  int _ep;
  int _atk;
  std::string _name;
};

#endif
