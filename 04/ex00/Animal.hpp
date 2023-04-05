#ifndef ANIMAL_HPP
#define ANIMAL_HPP
#include <string>
#include <iostream>
#define YELLOW "\033[0;33m"
#define PLAIN "\033[0m"
#define RED "\033[1;31m"
#define LESS_RED "\033[0;31m"
#define GREEN "\033[1;92m"
#define CYAN "\033[1;36m"

class Animal
{
	protected:
	std::string _type;

	public:
	Animal();
	Animal(std::string type);
	Animal(const Animal &other);
	virtual ~Animal();
	const Animal &operator=(const Animal &other);

	void 			setType(std::string Type);
	virtual void	makeSound(void) const;
	std::string 	getType(void) const;
};


#endif