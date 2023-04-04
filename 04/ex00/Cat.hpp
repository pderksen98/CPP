#ifndef CAT_HPP
#define CAT_HPP
#include "Animal.hpp"

class Cat : public Animal
{	
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
};

std::ostream &operator<<(std::ostream &out, const Cat &cat);

#endif
