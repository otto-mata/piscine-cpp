#include <Cat.hpp>

Cat::Cat()
{
	type = "Cat";
	std::string str = "meow";
	_brain = new Brain();
	setSound(str);
}

Cat::~Cat()
{
	delete _brain;
	std::cout << "Destructor called for class 'Cat'." << std::endl;
}
