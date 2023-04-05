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
#include "Brain.hpp"

class Animal
{
	protected:
	std::string _type;

	public:
	// Constructors
	Animal();
	Animal(std::string type);
	Animal(const Animal &other);
	// Destructor
	virtual ~Animal();
	// Operators
	const Animal &operator=(const Animal &other);
	// Member functions
	void 			setType(std::string Type);
	virtual void	makeSound(void) const = 0;
	std::string 	getType(void) const;
	virtual Brain*	getBrain(void) const = 0;
};

std::ostream & operator<<(std::ostream &out, const Animal &animal);

#endif