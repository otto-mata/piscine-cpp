#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP
#include <string>
#include <iostream>

class WrongAnimal
{
	protected:
	std::string type;

	public:
	WrongAnimal();
	WrongAnimal(const WrongAnimal &other);
	WrongAnimal(std::string animalType, std::string sound);
	~WrongAnimal();
	WrongAnimal &operator=(const WrongAnimal &other);
	
	std::string getType() const;
	void setType(std::string &newType);
	
	std::string getSound() const;
	void setSound(std::string &newSound);

	void makeSound() const;

	private:
	std::string _sound;
};

#endif
