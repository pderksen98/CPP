#ifndef WRONG_CAT_HPP
#define WRONG_CAT_HPP
#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{	
	public:
    // Constructors
	WrongCat();
	WrongCat(const WrongCat &other);

    // Destructor
	~WrongCat();

    // Operators
	const WrongCat &operator=(const WrongCat &other);
	
    // Member functions
    void makeSound() const;
};

std::ostream &operator<<(std::ostream &out, const WrongCat &wrongCat);

#endif
