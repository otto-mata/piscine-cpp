#include <Brain.hpp>

Brain::Brain()
{
	std::cout << "Default constructor called for class 'Brain'." << std::endl;
}

Brain::Brain(const Brain &other)
{
	std::cout << "Copy constructor calld for class 'Brain'." << std::endl;
	for (int i = 0; i < MAX_IDEAS; i++)
		_ideas[i] = std::string(other.idea(i));
}

Brain::~Brain()
{
	std::cout << "Destructor called for class 'Brain'." << std::endl;
}

Brain &Brain::operator=(const Brain &other)
{
	std::cout << "Assignment operation called for class 'Brain'." << std::endl;
	if (this == &other)
		return (*this);	
	for (int i = 0; i < MAX_IDEAS; i++)
		_ideas[i] = std::string(other.idea(i));
	return (*this);
}

std::string Brain::idea(int const index) const
{
	if (index >= MAX_IDEAS)
		std::cout 
			<< "Warning: index " 
			<< index 
			<< " is greater than the max index. Wrapping will occur."
			<< std::endl;

	return (_ideas[index % MAX_IDEAS]);
}

void Brain::idea(int const index, std::string const newIdea)
{
	if (index >= MAX_IDEAS)
		std::cout 
			<< "Warning: index " 
			<< index 
			<< " is greater than the max index. Wrapping will occur."
			<< std::endl;

	_ideas[index % MAX_IDEAS] = newIdea;
}

