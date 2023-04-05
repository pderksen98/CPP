#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

void	leak_check(void)
{
	system("leaks -q animal");
}

int main(void)
{
	const Animal* animal = new Animal();
	const Animal* dog = new Dog();
	const Animal* cat = new Cat();
	const WrongAnimal* w_animal = new WrongAnimal();
	const WrongAnimal* w_cat = new WrongCat();

	std::cout << std::endl;
	
	std::cout << CYAN << dog->getType() << ": " << PLAIN;
	dog->makeSound();
	// std::cout << std::endl;

	std::cout << CYAN << cat->getType() << ": " << PLAIN;
	cat->makeSound();
	// std::cout << std::endl;

	std::cout << CYAN << animal->getType() << ": " << PLAIN;
	animal->makeSound();
	// std::cout << std::endl;

	std::cout << YELLOW << w_animal->getType() << ": " << PLAIN;
	w_animal->makeSound();
	// std::cout << std::endl;

	std::cout << YELLOW << w_cat->getType() << ": " << PLAIN;
	w_cat->makeSound();
	std::cout << std::endl;

	delete	animal;
	delete	dog;
	delete	cat;
	delete	w_animal;
	delete	w_cat;

	// atexit(leak_check);
	return (0);
}
