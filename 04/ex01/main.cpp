#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

void	leak_check(void)
{
	system("leaks -q animal");
}

// int	main(void)
// {
// 	Animal	*animals[8];
// 	// ***************** CONSTRUCTION ***********************
// 	std::cout << std::endl << YELLOW << "--- CONSTRUCTING ANIMALS ---" << PLAIN << std::endl;
// 	for (int i = 0; i < 8; i++)
// 	{
// 		if (i < 4)
// 			animals[i] = new Cat();
// 		if (i == 4)
// 			std::cout << std::endl;
// 		if (i >= 4)
// 			animals[i] = new Dog();
// 	}

// 	// ***************** IDEAS ***********************
// 	animals[1]->getBrain()->setIdea(0, "MUST DESTROY PLANT!");
// 	animals[1]->getBrain()->setIdea(1, "MUST DESTROY ANOTHER PLANT!");
// 	animals[1]->getBrain()->setIdea(2, "MUST DESTROY ONE MORE PLANT!");	
// 	animals[6]->getBrain()->setIdea(1, "MUST SMILE TO HUMAN");
// 	animals[6]->getBrain()->setIdea(2, "SCREW YOU CAT! WOOF WOOF!");

// 	std::cout << std::endl << YELLOW << "--- PRINTING IDEAS ---" << PLAIN << std::endl;
// 	std::cout << std::endl << "Type: " << animals[1]->getType() << std::endl;
// 	std::cout << "1 " << animals[1]->getBrain()->getIdea(0) << std::endl;
// 	std::cout << "2 " << animals[1]->getBrain()->getIdea(1) << std::endl;
// 	std::cout << "3 " << animals[1]->getBrain()->getIdea(2) << std::endl;
// 	std::cout << "4 " << animals[1]->getBrain()->getIdea(3) << std::endl;

// 	std::cout << std::endl << "Type: " << animals[6]->getType() << std::endl;
// 	std::cout << "5 " << animals[6]->getBrain()->getIdea(0) << std::endl;
// 	std::cout << "6 " << animals[6]->getBrain()->getIdea(1) << std::endl;
// 	std::cout << "7 " << animals[6]->getBrain()->getIdea(2) << std::endl;

// 	std::cout << std::endl;
// 	std::cout << "8 " << animals[3]->getBrain()->getIdea(2) << std::endl;
// 	std::cout << "9 " << animals[3]->getBrain()->getIdea(-1) << std::endl;
// 	std::cout << "10 " << animals[3]->getBrain()->getIdea(99) << std::endl;


// 	// ***************** DESTRUCTION ***********************
// 	std::cout << std::endl << YELLOW << "--- DECONSTRUCTING ANIMALS ---" << PLAIN << std::endl;
// 	for (int i = 0; i < 8; i++)
// 		delete animals[i];
		
// 	atexit(leak_check);
// 	return (0);
// }


// int main(void)
// {
// 	{
// 		std::cout << std::endl << YELLOW << "--- CONSTRUCTING CATS ---" << PLAIN << std::endl;
// 		std::cout << "- CONSTRUCTING KWIK ---" << std::endl;
// 		const Cat	Kwik;
// 		std::cout << "- CONSTRUCTING KWEK ---" << std::endl;
// 		const Cat	Kwek = Kwik;
// 		std::cout << "- CONSTRUCTING KWAK ---" << std::endl;
// 		const Cat 	Kwak(Kwik);

// 		std::cout << std::endl << std::endl << "ADDRESS KWIK BRAIN: " << Kwik.getBrain() << std::endl;
// 		std::cout << "ADDRESS KWEK BRAIN: " << Kwek.getBrain() << std::endl;
// 		std::cout << "ADDRESS KWAK BRAIN: " << Kwak.getBrain() << std::endl;
		
// 		std::cout << std::endl << std::endl << std::endl << YELLOW << "--- DECONSTRUCTING CATS ---" << PLAIN << std::endl;
// 	}
// 	atexit(leak_check);
// 	return (0);
// }

int main(void)
{
	std::cout << std::endl << std::endl << std::endl << YELLOW << "--- CHECKS FROM SUBJECT ---" << PLAIN << std::endl;
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
