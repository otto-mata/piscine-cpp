#ifndef ANIMAL_HPP
#define ANIMAL_HPP
#include <string>
#include <iostream>

class AAnimal
{
	protected:
	std::string type;

	public:
	AAnimal();
	AAnimal(const AAnimal &other);
	AAnimal(std::string animalType, std::string sound);
	virtual ~AAnimal();
	AAnimal &operator=(const AAnimal &other);
	
	std::string getType() const;
	void setType(std::string &newType);
	
	std::string getSound() const;
	void setSound(std::string &newSound);

	virtual void makeSound() const = 0;

	private:
	std::string _sound;
};

#endif
