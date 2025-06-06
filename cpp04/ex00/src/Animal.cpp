/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tblochet <tblochet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/06 17:40:31 by tblochet          #+#    #+#             */
/*   Updated: 2025/06/06 17:40:32 by tblochet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
{
  type = "LUCA";
  _sound = "*eery sound from the past*";
  std::cout << "[ANIMAL] Default constructor called" << std::endl;
}

Animal::Animal(const Animal& other)
{
  std::cout << "[ANIMAL] Copy constructor called" << std::endl;
  *this = other;
}

Animal::Animal(std::string animalType, std::string sound)
{
  type = animalType;
  _sound = sound;
  std::cout << "[ANIMAL] Constructor called" << std::endl;
}

Animal&
Animal::operator=(const Animal& other)
{
  if (this != &other) {
    type = other.getType();
    _sound = other.getSound();
  }
  std::cout << "[ANIMAL] Assignment constructor called" << std::endl;
  return (*this);
}

Animal::~Animal()
{
  std::cout << "[ANIMAL] Destructor called" << std::endl;
}

std::string
Animal::getType() const
{
  return (type);
}

void
Animal::setType(std::string& newType)
{
  type = newType;
}

std::string
Animal::getSound() const
{
  return (_sound);
}

void
Animal::setSound(std::string& newSound)
{
  _sound = newSound;
}

void
Animal::makeSound() const
{
  std::cout << "<" << this->type << "> " << this->_sound << std::endl;
}
