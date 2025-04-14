#ifndef BRAIN_HPP
#define BRAIN_HPP
#define MAX_IDEAS 100
#include <iostream>
#include <string>

class Brain
{
	public:
	Brain();
	Brain(const Brain &other);
	~Brain();
	Brain &operator=(const Brain &other);

	std::string idea(int index) const;
	void idea(int const index, std::string const newIdea);
	
	private:
	std::string _ideas[MAX_IDEAS];
};


#endif /* BRAIN_HPP */
