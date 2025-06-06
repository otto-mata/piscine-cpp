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
	Animal(std::string animalType, std::string sound);
	Animal(const Animal &other);
	virtual ~Animal();
	virtual Animal &operator=(const Animal &other);
	
	virtual std::string getType() const;
	virtual void setType(std::string &newType);
	
	virtual std::string getSound() const;
	virtual void setSound(std::string &newSound);

	virtual void makeSound() const;

	private:
	std::string _sound;
};

#endif
