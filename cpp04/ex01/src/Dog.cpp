#include <Dog.hpp>

Dog::Dog()
{
	type = "Dog";
	_brain = new Brain();
	std::string sound = "waf";
	setSound(sound);
}

Dog::~Dog()
{
	delete _brain;
	std::cout << "Destructor called for class 'Dog'." << std::endl;
}
