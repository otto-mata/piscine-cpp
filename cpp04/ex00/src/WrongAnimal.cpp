#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
  type = "Strange thing";
  _sound = "*hurtful screeching*";
  std::cout << "[WRONGANIMAL] Default constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& other)
{
  *this = other;
  std::cout << "[WRONGANIMAL] Copy constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(std::string animalType, std::string sound)
{
  type = animalType;
  _sound = sound;
  std::cout << "[WRONGANIMAL] Constructor called" << std::endl;
}

WrongAnimal&
WrongAnimal::operator=(const WrongAnimal& other)
{
  if (this != &other) {
    type = other.getType();
    _sound = other.getSound();
  }
  std::cout << "[WRONGANIMAL] Assignment constructor called" << std::endl;
  return (*this);
}

WrongAnimal::~WrongAnimal()
{
  std::cout << "[WRONGANIMAL] Destructor called" << std::endl;
}

std::string
WrongAnimal::getType() const
{
  return (type);
}

void
WrongAnimal::setType(std::string& newType)
{
  type = newType;
}

std::string
WrongAnimal::getSound() const
{
  return (_sound);
}

void
WrongAnimal::setSound(std::string& newSound)
{
  _sound = newSound;
}

void
WrongAnimal::makeSound() const
{
  std::cout << "<" << this->type << "> " << this->_sound << std::endl;
}
