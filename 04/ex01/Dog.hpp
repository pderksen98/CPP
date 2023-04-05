#ifndef DOG_HPP
#define DOG_HPP
#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
	private:
	Brain*	_brain;

	public:
	// Constructors
	Dog();
	Dog(const Dog &other);
	// Destructor
	~Dog();
	// Operators
	const Dog &operator=(const Dog &other);
	// Member functions
	void makeSound() const;
	Brain	*getBrain(void) const;
};

std::ostream &operator<<(std::ostream &out, const Dog &dog);

#endif