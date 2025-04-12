#include <Animal.hpp>
#include <Cat.hpp>
#include <Dog.hpp>

int main()
{
	const Animal *meta = new Animal();
	const Animal *cat = new Cat();
	const Animal *dog = new Dog();

	std::cout << meta->getType() << std::endl;
	std::cout << dog->getType() << std::endl;
	std::cout << cat->getType() << std::endl;
	meta->makeSound();
	dog->makeSound();
	cat->makeSound();
	return (0);
}
