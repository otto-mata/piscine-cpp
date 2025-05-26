#ifndef CAT_HPP
#define CAT_HPP
#include "Animal.hpp"
#include "Brain.hpp"

class Cat: public Animal
{
	public:
	Cat();
	~Cat();
	
	private:
	Brain *_brain;
};

#endif
