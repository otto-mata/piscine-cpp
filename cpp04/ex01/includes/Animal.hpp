#ifndef ANIMAL_HPP
#define ANIMAL_HPP
#include <string>
#include <iostream>

class Animal
{
	protected:
	std::string type;

	public:
	Animal();
	Animal(const Animal &other);
	Animal(std::string animalType, std::string sound);
	virtual ~Animal();
	Animal &operator=(const Animal &other);
	
	std::string getType() const;
	void setType(std::string &newType);
	
	std::string getSound() const;
	void setSound(std::string &newSound);

	void makeSound() const;

	private:
	std::string _sound;
};

#endif
