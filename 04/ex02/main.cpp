#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

void	leak_check(void)
{
	system("leaks -q animal");
}

// int	main(void)
// {
// 	Animal	*animals[10];
// 	// ***************** CONSTRUCTION ***********************
// 	std::cout << std::endl << YELLOW << "--- CONSTRUCTING ANIMALS ---" << PLAIN << std::endl;
// 	for (int i = 0; i < 10; i++)
// 	{
// 		if (i < 5)
// 			animals[i] = new Cat();
// 		if (i >= 5)
// 			animals[i] = new Dog();
// 	}

// 	// ***************** DESTRUCTION ***********************
// 	std::cout << std::endl << YELLOW << "--- DECONSTRUCTING ANIMALS ---" << PLAIN << std::endl;
// 	for (int i = 0; i < 10; i++)
// 		delete animals[i];
		
// 	atexit(leak_check);
// 	return (0);
// }


// int main(void)
// {
// 	{
// 		std::cout << std::endl << YELLOW << "--- CONSTRUCTING CATS ---" << PLAIN << std::endl;
// 		std::cout << "- CONSTRUCTING KWIK ---" << std::endl;
// 		Cat	Kwik;
// 		std::cout << "- CONSTRUCTING KWEK ---" << std::endl;
// 		Cat	Kwek = Kwik;
// 		std::cout << "- CONSTRUCTING KWAK ---" << std::endl;
// 		Cat 	Kwak(Kwik);

// 		std::cout << std::endl << std::endl << "ADDRESS KWIK BRAIN: " << Kwik.getBrain() << std::endl;
// 		std::cout << "ADDRESS KWEK BRAIN: " << Kwek.getBrain() << std::endl;
// 		std::cout << "ADDRESS KWAK BRAIN: " << Kwak.getBrain() << std::endl;

		
// 		std::cout << std::endl << std::endl << std::endl << YELLOW << "--- DECONSTRUCTING CATS ---" << PLAIN << std::endl;
// 	}
// 	atexit(leak_check);
// 	return (0);
// }

// int	main(void)
// {
// 	Dog	dog;
// 	Cat	cat;

// 	std::cout << dog.getType() << ": ";
// 	dog.makeSound();
// 	dog.addIdea("Food");
// 	dog.addIdea("Run");
// 	dog.addIdea("Smile to the boss");
// 	dog.addIdea("Sleep");
// 	dog.printIdeas();
// 	std::cout << std::endl;


// 	std::cout << cat.getType() << ": ";
// 	cat.makeSound();
// 	cat.printIdeas();
// 	cat.addIdea("YESS");
// 	cat.printIdeas();
// 	std::cout << std::endl;

// 	atexit(leak_check);
// 	return (0);
// }

int main(void)
{
	// Animal	animal;
	// animal.makeSound();
	// std::cout << std::endl;


	std::cout << std::endl << YELLOW << "--- CHECKS FROM SUBJECT ---" << PLAIN << std::endl;
	std::cout << "- CONSTRUCTING DOG ---" << std::endl;
	const Animal	*j = new Dog();
	std::cout << "- CONSTRUCTING CAT ---" << std::endl;
	const Animal	*i = new Cat();
	
	std::cout << "- DECONSTRUCTING DOG ---" << std::endl;
	delete j;
	std::cout << "- DECONSTRUCTING CAT ---" << std::endl;
	delete i;
	std::cout << std::endl << std::endl << std::endl;

	atexit(leak_check);
	return (0);
}
