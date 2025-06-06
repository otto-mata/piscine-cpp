#ifndef CAT_HPP
#define CAT_HPP
#include "AAnimal.hpp"
#include "Brain.hpp"

class Cat: public AAnimal
{
	public:
	Cat();
	~Cat();
	
	virtual void makeSound() const;
	private:
	Brain *_brain;
};

#endif
