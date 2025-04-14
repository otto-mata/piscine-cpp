#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
	type = "Strange thing";
	_sound = "*hurtful screeching*";
}

WrongAnimal::WrongAnimal(const WrongAnimal &other)
{
	*this = other;
}

WrongAnimal::WrongAnimal(std::string animalType, std::string sound)
{
	type = animalType;
	_sound = sound;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &other)
{
	if (this != &other)
	{
		type = other.getType();
		_sound = other.getSound();
	}
	return (*this);
}

WrongAnimal::~WrongAnimal() {}

std::string WrongAnimal::getType() const
{
	return (type);
}

void WrongAnimal::setType(std::string &newType)
{
	type = newType;
}

std::string WrongAnimal::getSound() const
{
	return (_sound);
}

void WrongAnimal::setSound(std::string &newSound)
{
	_sound = newSound;
}

void WrongAnimal::makeSound() const
{
	std::cout
		<< "<"
		<< this->type
		<< "> "
		<< this->_sound
		<< std::endl;
}
