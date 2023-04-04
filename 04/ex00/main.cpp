#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main(void)
{
	const Animal* animal = new Animal();
	const Animal* dog = new Dog();
	const Animal* cat = new Cat();
	const WrongAnimal* w_animal = new WrongAnimal();
	const WrongAnimal* w_cat = new WrongCat();

	std::cout << std::endl;
	
	std::cout << dog->getType() << ": ";
	dog->makeSound();
	std::cout << std::endl;

	std::cout << cat->getType() << ": ";
	cat->makeSound();
	std::cout << std::endl;

	std::cout << animal->getType() << ": ";
	animal->makeSound();
	std::cout << std::endl;

	std::cout << w_animal->getType() << ": ";
	w_animal->makeSound();
	std::cout << std::endl;

	std::cout << w_cat->getType() << ": ";
	w_cat->makeSound();
	std::cout << std::endl;

	delete	animal;
	delete	dog;
	delete	cat;
	delete	w_animal;
	delete	w_cat;

	// system("leaks -q animal");
	return (0);
}
