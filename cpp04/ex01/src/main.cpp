#include <Animal.hpp>
#include <Brain.hpp>
#include <Cat.hpp>
#include <Dog.hpp>
#include <WrongAnimal.hpp>
#include <WrongCat.hpp>
#ifndef ANIMALS_COUNT
#define ANIMALS_COUNT 42
#endif

int
main()
{
  if (ANIMALS_COUNT % 2 || ANIMALS_COUNT < 2) {
    std::cout << "Invalid number of animals (got " << ANIMALS_COUNT << ")."
              << std::endl;
  }
  Animal* animals[ANIMALS_COUNT];
  for (int i = 0; i < ANIMALS_COUNT; i++) {
    if (i % 2)
      animals[i] = new Dog();
    else
      animals[i] = new Cat();
  }
  for (int i = 0; i < ANIMALS_COUNT; i++)
    animals[i]->makeSound();
  for (int i = 0; i < ANIMALS_COUNT; i++)
    delete animals[i];
}
