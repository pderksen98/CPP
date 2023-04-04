#ifndef WRONG_WRONGANIMAL_HPP
#define WRONG_WRONGANIMAL_HPP
#include "Animal.hpp"

class WrongAnimal
{
protected:
	std::string _type;

public:
	WrongAnimal();
	WrongAnimal(std::string& type);
	WrongAnimal(const WrongAnimal &other);
	~WrongAnimal();
	const WrongAnimal &operator=(const WrongAnimal &other);

	void        setType(std::string Type);
	void        makeSound(void) const;
	std::string getType(void) const;
};

std::ostream & operator<<(std::ostream &out, const WrongAnimal &wronganimal);

#endif