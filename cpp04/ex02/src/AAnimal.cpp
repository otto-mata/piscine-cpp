/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tblochet <tblochet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/06 17:47:02 by tblochet          #+#    #+#             */
/*   Updated: 2025/06/06 18:26:54 by tblochet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/AAnimal.hpp"

AAnimal::AAnimal()
{
  type = "LUCA";
  _sound = "*eery sound from the past*";
}

AAnimal::AAnimal(const AAnimal& other)
{
  type = other.getType();
  _sound = other.getSound();
}

AAnimal::AAnimal(std::string animalType, std::string sound)
{
  type = animalType;
  _sound = sound;
}

AAnimal&
AAnimal::operator=(const AAnimal& other)
{
  if (this != &other) {
    type = other.getType();
    _sound = other.getSound();
  }
  return (*this);
}

AAnimal::~AAnimal()
{
  std::cout << "destruction" << std::endl;
}

std::string
AAnimal::getType() const
{
  return (type);
}

void
AAnimal::setType(std::string& newType)
{
  type = newType;
}

std::string
AAnimal::getSound() const
{
  return (_sound);
}

void
AAnimal::setSound(std::string& newSound)
{
  _sound = newSound;
}
