#ifndef CAT_HPP
#define CAT_HPP
#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{	
	private:
	Brain*	_brain;

	public:
	// Constructors
	Cat();
	Cat(const Cat &other);
	// Destructor
	~Cat();
	// Operators
	const Cat &operator=(const Cat &other);
	// Member functions
	void makeSound() const;
	Brain	*getBrain(void) const;
};

std::ostream &operator<<(std::ostream &out, const Cat &cat);

#endif
