#include <Animal.hpp>
#include <Cat.hpp>
#include <Dog.hpp>
#include <WrongAnimal.hpp>
#include <WrongCat.hpp>
#include <Brain.hpp>

int main()
{
	const Animal *meta = new Animal();
	const Animal *cat = new Cat();
	const Animal *dog = new Dog();
	const WrongAnimal *whatisthis = new WrongAnimal();
	const WrongAnimal *wrongCat = new WrongCat();

	std::cout << meta->getType() << std::endl;
	std::cout << dog->getType() << std::endl;
	std::cout << cat->getType() << std::endl;
	meta->makeSound();
	dog->makeSound();
	cat->makeSound();
	std::cout << whatisthis->getType() << std::endl;
	std::cout << wrongCat->getType() << std::endl;
	whatisthis->makeSound();
	wrongCat->makeSound();
	const Brain *brain0 = new Brain();
	brain0->idea(10);
	brain0->idea(234);
	return (0);
}
