#include "Animal.hpp"

Animal::Animal()
{
	type = "LUCA";
	_sound = "*eery sound from the past*";
}

Animal::Animal(const Animal &other)
{
	type = other.getType();
	_sound = other.getSound();
}

Animal::Animal(std::string animalType, std::string sound)
{
	type = animalType;
	_sound = sound;
}

Animal &Animal::operator=(const Animal &other)
{
	if (this != &other)
	{
		type = other.getType();
		_sound = other.getSound();
	}
	return (*this);
}

Animal::~Animal()
{
	std::cout << "Destructor called for class 'Animal'." << std::endl;
}

std::string Animal::getType() const
{
	return (type);
}

void Animal::setType(std::string &newType)
{
	type = newType;
}

std::string Animal::getSound() const
{
	return (_sound);
}

void Animal::setSound(std::string &newSound)
{
	_sound = newSound;
}

void Animal::makeSound() const
{
	std::cout
		<< "<"
		<< this->type
		<< "> "
		<< this->_sound
		<< std::endl;
}
